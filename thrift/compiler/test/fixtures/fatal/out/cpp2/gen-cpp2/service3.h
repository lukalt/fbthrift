/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/fatal/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service3AsyncClient.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test_cpp2::cpp_reflection {
class service3;
class service3AsyncProcessor;

class service3ServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // test_cpp2::cpp_reflection

namespace apache::thrift {
template <>
class ServiceHandler<::test_cpp2::cpp_reflection::service3> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "service3"; }

  typedef ::test_cpp2::cpp_reflection::service3AsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_methodA();
  [[deprecated("Use sync_methodA instead")]] virtual void methodA();
  virtual folly::Future<folly::Unit> future_methodA();
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_methodA();
  virtual folly::coro::Task<void> co_methodA(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
  virtual void sync_methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  [[deprecated("Use sync_methodB instead")]] virtual void methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  virtual folly::Future<folly::Unit> future_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual folly::coro::Task<void> co_methodB(apache::thrift::RequestParams params, ::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
#endif
  virtual void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual ::std::int32_t sync_methodC();
  [[deprecated("Use sync_methodC instead")]] virtual ::std::int32_t methodC();
  virtual folly::Future<::std::int32_t> future_methodC();
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodC();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::int32_t> co_methodC();
  virtual folly::coro::Task<::std::int32_t> co_methodC(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback);
  virtual ::std::int32_t sync_methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  [[deprecated("Use sync_methodD instead")]] virtual ::std::int32_t methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  virtual folly::Future<::std::int32_t> future_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::int32_t> co_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual folly::coro::Task<::std::int32_t> co_methodD(apache::thrift::RequestParams params, ::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
#endif
  virtual void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback, ::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual void sync_methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/);
  [[deprecated("Use sync_methodE instead")]] virtual void methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/);
  virtual folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> future_methodE();
  virtual folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> semifuture_methodE();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> co_methodE();
  virtual folly::coro::Task<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> co_methodE(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>>> callback);
  virtual void sync_methodF(::test_cpp2::cpp_reflection::struct3& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  [[deprecated("Use sync_methodF instead")]] virtual void methodF(::test_cpp2::cpp_reflection::struct3& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  virtual folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> future_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
  virtual folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> semifuture_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> co_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
  virtual folly::coro::Task<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> co_methodF(apache::thrift::RequestParams params, ::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
#endif
  virtual void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>>> callback, ::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
 private:
  static ::test_cpp2::cpp_reflection::service3ServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodA{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodB{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodC{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodD{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodE{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodF{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace test_cpp2::cpp_reflection {
using service3SvIf [[deprecated("Use apache::thrift::ServiceHandler<service3> instead")]] = ::apache::thrift::ServiceHandler<service3>;
} // test_cpp2::cpp_reflection
namespace test_cpp2::cpp_reflection {
class service3SvNull : public ::apache::thrift::ServiceHandler<service3> {
 public:
  void methodA() override;
  void methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) override;
  ::std::int32_t methodC() override;
  ::std::int32_t methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) override;
  void methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/) override;
  void methodF(::test_cpp2::cpp_reflection::struct3& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) override;
};

class service3AsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::test_cpp2::cpp_reflection::service3>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<service3AsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const service3AsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const service3AsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodA(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodA(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodB(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodB(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodC(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodC(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodD(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodD(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodE(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodE(apache::thrift::ContextStack* ctx, ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodF(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodF(apache::thrift::ContextStack* ctx, ::test_cpp2::cpp_reflection::struct3 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  service3AsyncProcessor(::apache::thrift::ServiceHandler<::test_cpp2::cpp_reflection::service3>* iface) :
      iface_(iface) {}
  ~service3AsyncProcessor() override {}
};

} // test_cpp2::cpp_reflection
