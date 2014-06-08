// Copyright (c) 2014, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Author: yanshiguang02@baidu.com

#include "dict_client.h"

void MyCallback(std::string* key, std::string* value, int32_t status) {

}
int main() {
    DictClient* dict = DictClient::NewClient();
    dict->Start();
    for (int i = 1; i <= 100; i++) {
        std::string* str = new std::string(i, 'c');
        std::string* value = new std::string;
        dict->Seek(str, value, &MyCallBack);
    }
    reutrn 0;
}
/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
