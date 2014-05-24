// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <stdio.h>
#include <sofa/pbrpc/pbrpc.h>
#include "dict_server_impl.h"

int main(int argc, char* argv[]) {
    sofa::pbrpc::RpcServerOptions options;
    sofa::pbrpc::RpcServer rpc_server(options);
    if (!rpc_server.Start("0.0.0.0:12321")) {
        fprintf(stderr, "Bind to 12321 failed!\n");
        return -1;
    }

    bds::DictServer* dict_server = new bds::DictServerImpl();
    if (!rpc_server.RegisterService(dict_server)) {
        fprintf(stderr, "Register service failed");
        return -1;
    }

    rpc_server.Run();

    rpc_server.Stop();
    return 0;
}

















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
