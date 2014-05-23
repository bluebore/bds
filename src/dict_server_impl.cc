// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "dict_server_impl.h"

namespace bds {

void DictServerImpl::Seek(::google::protobuf::RpcController* controller,
        const SeekRequest* request,
        SeekResponse* response,
        ::google::protobuf::Closure* done) {
    for (int i = 0; i < request->keys_size(); i++) {
        SeekResult* result = response->add_results();
        result->set_status(-1);
    }
    done->Run();
}

void DictServerImpl::LoadDict(::google::protobuf::RpcController* controller,
        const LoadDictRequest* request,
        LoadDictResponse* response,
        ::google::protobuf::Closure* done) {
    response->set_status(-1);
    done->Run();
}

} // namespace bds

