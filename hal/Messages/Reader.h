#pragma once

#include <fstream>

#include <thread>
#include <mutex>
#include <condition_variable>

#include <list>
#include <memory>

#include <HAL/Header.pb.h>
#include <HAL/Messages.pb.h>

namespace hal {

enum MessageType {
  Msg_Type_Camera,
  Msg_Type_IMU,
  Msg_Type_LIDAR,
  Msg_Type_Posys
};

class Reader {
 public:
  HAL_EXPORT static Reader& Instance(const std::string& filename, MessageType eType);

  HAL_EXPORT Reader(const std::string &filename);
  HAL_EXPORT ~Reader();

  /// Reads message regardless of type. This allows the user to handle
  /// the message list directly.
  ///
  /// This will block if no messages are in the queue.
  HAL_EXPORT std::unique_ptr<hal::Msg> ReadMessage();

  /// Reads the next camera message from the message queue. If the
  /// next message is NOT a camera message, or the message queue is
  /// empty, the function will block. Mostly used for camera specific
  /// driver implementations.
  ///
  /// The "ReadCamera" static variable must be set to true if the
  /// reader is to queue camera messages.
  ///
  /// @param id ID of camera to return. Negative number indicates that
  ///           any camera messsage should be returned.
  HAL_EXPORT std::unique_ptr<hal::CameraMsg> ReadCameraMsg(int id = -1);

  /// Reads the next IMU message from the message queue. If the next
  /// message is NOT an IMU message, or the message queue is empty,
  /// the function will block. Mostly used for IMU specific driver
  /// implementations.
  ///
  /// The "ReadIMU" static variable must be set to true if the reader
  /// is to queue IMU messages.
  HAL_EXPORT std::unique_ptr<hal::ImuMsg> ReadImuMsg();

  /// Reads the next LIDAR message from the message queue. If the next
  /// message is NOT a LIDAR message, or the message queue is empty,
  /// the function will block. Mostly used for LIDAR specific driver
  /// implementations.
  ///
  /// The "ReadLidar" static variable must be set to true if the
  /// reader is to queue LIDAR messages.
  HAL_EXPORT std::unique_ptr<hal::LidarMsg> ReadLidarMsg();

  /// Reads the next POSE message from the message queue. If the next
  /// message is NOT a POSE message, or the message queue is empty,
  /// the function will block. Mostly used for POSYS specific driver
  /// implementations.
  ///
  /// The "ReadPose" static variable must be set to true if the reader
  /// is to queue POSE messages.
  HAL_EXPORT std::unique_ptr<hal::PoseMsg> ReadPoseMsg();

  /// Stops the buffering thread. Should be called by driver
  /// implementations, usually in their destructors.
  HAL_EXPORT void StopBuffering();

  /// Reset reader to use specified initial image
  HAL_EXPORT bool SetInitialImage(size_t nImgID);

  /// Getters and setters for max buffer size
  void SetMaxBufferSize(const int nNumMessages) {
    m_nMaxBufferSize = nNumMessages;
  }
  size_t GetMaxBufferSize() const { return m_nMaxBufferSize; }

  /// Return the log's filename.
  std::string GetFilename() const { return m_sFilename; }

  /// Return Header protobuf.
  const hal::Header& GetHeader() const { return m_Header; }

  bool IsRunning() const { return m_bRunning; }

  HAL_EXPORT void Enable(MessageType type);
  HAL_EXPORT void Disable(MessageType type);
  HAL_EXPORT void EnableAll();
  HAL_EXPORT void DisableAll();
  HAL_EXPORT bool IsEnabled(MessageType type) const;

 private:
  /// Buffer from file.
  bool _BufferFromFile(const std::string &fileName);

  bool _AmINext( MessageType eMsgType );
  void _ThreadFunc();

 private:
  std::string                             m_sFilename;
  hal::Header                              m_Header;
  bool                                    m_bRunning;
  bool                                    m_bShouldRun;
  bool                                    m_bReadCamera;
  bool                                    m_bReadIMU;
  bool                                    m_bReadLIDAR;
  bool                                    m_bReadPosys;
  std::list<std::unique_ptr<hal::Msg> >    m_qMessages;
  std::list<MessageType >                 m_qMessageTypes;
  std::mutex                              m_QueueMutex;
  std::condition_variable                 m_ConditionQueued;
  std::condition_variable                 m_ConditionDequeued;
  std::thread                             m_ReadThread;
  size_t                                  m_nInitialImageID;
  size_t                                  m_nMaxBufferSize;
};

}  // end namespace hal
