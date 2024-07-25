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

include "thrift/annotation/thrift.thrift"

enum ErrorCode {
  UNKNOWN = 0,
  INVALID_VALUE = 1,
  DEPENDENCY_FAILURE = 2,
}

exception InternalError {
  1: ErrorCode code;
  @thrift.ExceptionMessage
  2: string message;
}

exception RetryableError {
  1: ErrorCode code;
}

struct T1 {}

service TestService {
  void do_foo() throws (1: InternalError ie, 2: RetryableError re);
  stream<T1 throws (1: InternalError ie, 2: RetryableError re)> do_foo_stream();
  void do_no_throw();
}
