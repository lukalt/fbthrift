/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioChildAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"
#if __has_include("thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.h")
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.h"
#else
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h"
#endif

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

namespace cpp2 {
class MyServicePrioChild;
class MyServicePrioChildAsyncProcessor;

class MyServicePrioChildServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // namespace cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::MyServicePrioChild> : virtual public ::cpp2::MyServicePrioParentSvIf {
 public:
  std::string_view getGeneratedName() const override { return "MyServicePrioChild"; }

  typedef ::cpp2::MyServicePrioChildAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_pang();
  [[deprecated("Use sync_pang instead")]] virtual void pang();
  virtual folly::Future<folly::Unit> future_pang();
  virtual folly::SemiFuture<folly::Unit> semifuture_pang();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_pang();
  virtual folly::coro::Task<void> co_pang(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_pang(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
 private:
  static ::cpp2::MyServicePrioChildServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_pang{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using MyServicePrioChildSvIf [[deprecated("Use apache::thrift::ServiceHandler<MyServicePrioChild> instead")]] = ::apache::thrift::ServiceHandler<MyServicePrioChild>;
} // namespace cpp2
namespace cpp2 {
class MyServicePrioChildSvNull : public ::apache::thrift::ServiceHandler<MyServicePrioChild>, virtual public ::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent> {
 public:
  void pang() override;
};

class MyServicePrioChildAsyncProcessor : public ::cpp2::MyServicePrioParentAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::cpp2::MyServicePrioParentAsyncProcessor;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<MyServicePrioChildAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const MyServicePrioChildAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServicePrioChildAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_pang(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_pang(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_pang(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_pang(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServicePrioChildAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>* iface) :
      ::cpp2::MyServicePrioParentAsyncProcessor(iface),
      iface_(iface) {}
  ~MyServicePrioChildAsyncProcessor() override {}
};

} // namespace cpp2
