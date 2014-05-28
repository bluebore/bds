// Copyright (c) 2014 YanShiguang. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "dict.h"

namespace bds {

DictClientImpl::DictClientImpl() {
}

/// Connect to server
bool DictClientImpl::Start() {
    return false;
}

/// Stop client
bool DictClientImpl::Stop() {
    return false;
}

/// Seek
void DictClientImpl::Seek(std::string* key, std::string* value, SeekCallback callback) {
}

} // namespace bds

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
