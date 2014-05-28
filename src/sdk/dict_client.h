// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef  BDS_DICT_H_
#define  BDS_DICT_H_

#include <string>

namespace bds {

/// Seek callback
void (*SeekCallback)(std::string* key, std::string* value, int32_t status);

class DictClient {
public:
    /// Connect to server
    virtual Start() = 0;
    /// Stop client
    virtual Stop() = 0;
    /// Seek
    virtual Seek(std::string* key, std::string* value, SeekCallback callback)
        = 0;
private:
    DictClient(const DictClient&);
    void operator=(const DictClient&);
};

}

#endif  //__DICT_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
