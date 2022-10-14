@echo off
cd Messages
protoc.exe *.proto --cpp_out=..
cd ..
move *.pb.cc Protobuf