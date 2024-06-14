/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-stack-arguments/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyService.h>)
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyService.h>
#else
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_clients.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.h>)
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.h>
#else
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_clients.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArguments.h>)
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArguments.h>
#else
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_clients.h>
#endif

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class MyServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<bool> hasDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<std::string> getDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<folly::Unit> putDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
    folly::Future<folly::Unit> lobDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
};


class MyServiceFastClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<bool> hasDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<std::string> getDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<folly::Unit> putDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
    folly::Future<folly::Unit> lobDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
};


class DbMixedStackArgumentsClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<std::string> getDataByKey0(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_key);
    folly::Future<std::string> getDataByKey1(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_key);
};


} // namespace cpp2
