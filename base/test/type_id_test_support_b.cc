// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/test/type_id_test_support_b.h"

#include <memory>

namespace {

struct TypeInAnonymousNameSpace {};

}  // namespace

namespace base {

// static
experimental::TypeId
TypeIdTestSupportB::GetTypeIdForTypeInAnonymousNameSpace() {
  return experimental::TypeId::Create<TypeInAnonymousNameSpace>();
}

experimental::TypeId TypeIdTestSupportB::GetTypeIdForUniquePtrInt() {
  return experimental::TypeId::Create<std::unique_ptr<int>>();
}

}  // namespace base
