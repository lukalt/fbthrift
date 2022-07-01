/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/protocol/Patch.h>

#include <thrift/lib/thrift/gen-cpp2/patch_types.h>

namespace apache {
namespace thrift {
namespace protocol {
namespace detail {
namespace {
using op::PatchOp;

const Value* if_op(const Object& patch, PatchOp op) {
  return patch.if_contains(static_cast<FieldId>(op));
}

} // namespace

void ApplyPatch::operator()(const Object& patch, protocol::Value& value) const {
  switch (value.getType()) {
    case Value::Type::boolValue:
      operator()(patch, *value.boolValue_ref());
      return;
    default:
      folly::throw_exception<std::runtime_error>("Not Implemented.");
  }
}

void ApplyPatch::operator()(const Object& patch, bool& value) const {
  if (auto* assign = if_op(patch, PatchOp::Assign)) {
    value = *assign->boolValue_ref();
    return; // Ignore all other ops.
  }

  if (auto* invert = if_op(patch, PatchOp::Add)) {
    if (*invert->boolValue_ref()) {
      value = !value;
    }
  }

  // TODO: Check for unknown ops and throw an exception, if found.
}

} // namespace detail
} // namespace protocol
} // namespace thrift
} // namespace apache
