// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef  __DICT_SERVER_IMPL_H_
#define  __DICT_SERVER_IMPL_H_

#include "dict_server.pb.h"

namespace bds {

class DictServerImpl : public DictServer {
public:
    inline DictServerImpl() {}
    virtual ~DictServerImpl() {}

    virtual void Seek(::google::protobuf::RpcController* controller,
            const ::bds::SeekRequest* request,
            ::bds::SeekResponse* response,
            ::google::protobuf::Closure* done);
    virtual void LoadDict(::google::protobuf::RpcController* controller,
            const ::bds::LoadDictRequest* request,
            ::bds::LoadDictResponse* response,
            ::google::protobuf::Closure* done);

};

}

#endif  //__DICT_SERVER_IMPL_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
