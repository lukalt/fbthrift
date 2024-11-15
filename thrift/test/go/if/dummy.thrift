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

namespace go thrift.test.go.if.dummy

// !!! DO NOT MODIFY !!!
//
// This schema is used to create dummy codegen for testing
// server/client implementations in 'thrift/lib/go/thrift'.
// It needs to stay simple - the way it currently is.

service Dummy {
  string Echo(1: string value);
  oneway void OnewayRPC(1: string value);
}
