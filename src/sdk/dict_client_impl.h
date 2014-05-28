// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef  BDS_DICT_IMPL_H_
#define  BDS_DICT_IMPLH_

#include <dict_client.h>

namespace bds {

class DictClientImpl : public DictClient {
public:
    DictClientImpl();
    /// Connect to server
    virtual Start();
    /// Stop client
    virtual Stop();
    /// Seek
    virtual Seek(std::string* key, std::string* value, SeekCallback callback);
};

}

