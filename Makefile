
include config.mk

CXX=g++
INCPATH=-I$(PROTOBUF_PATH)/include -I$(SOFA_PATH)/include
CXXFLAGS=-W -Wall -Wno-unused-parameter -fPIC -D_GNU_SOURCE -D__STDC_LIMIT_MACROS -g $(INCPATH)
LIBRARY=$(SOFA_PATH)/lib/libsofa_pbrpc.a $(PROTOBUF_PATH)/lib/libprotobuf.a $(SNAPPY_PATH)/lib/libsnappy.a
LDFLAGS=-lpthread -lrt -lz

all: dict_server

clean: 
	rm -rf dict_server
	rm -f src/*.o
	rm -f src/*.pb.cc
	rm -f src/*.pb.h

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

SERVER_OBJS = $(SERVER_SRC:.cc=.o)

dict_server: gen_proto $(SERVER_OBJS)
	$(CXX) $(LDFLAGS) $(SERVER_OBJS) $(LIBRARY) -o dict_server

gen_proto: src/proto/dict_server.proto
	$(PROTOBUF_PATH)/bin/protoc --cpp_out=src/ --proto_path=src/proto/ src/proto/dict_server.proto
