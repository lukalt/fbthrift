/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/stream/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/stream/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/stream/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace cpp2 {

PubSubStreamingServiceWrapper::PubSubStreamingServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


void PubSubStreamingServiceWrapper::async_tm_returnstream(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t i32_from
    , int32_t i32_to
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
i32_from,
i32_to    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_returnstream(
            this->if_object,
            ctx,
            std::move(promise),
            i32_from,
            i32_to        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_streamthrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_streamthrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_servicethrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_servicethrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_servicethrows2(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_servicethrows2(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_boththrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_boththrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_responseandstreamstreamthrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ResponseAndServerStream<int32_t,int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>();
        call_cy_PubSubStreamingService_responseandstreamstreamthrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_responseandstreamservicethrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ResponseAndServerStream<int32_t,int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>();
        call_cy_PubSubStreamingService_responseandstreamservicethrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_tm_responseandstreamboththrows(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ResponseAndServerStream<int32_t,int32_t>> callback
    , int32_t foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>();
        call_cy_PubSubStreamingService_responseandstreamboththrows(
            this->if_object,
            ctx,
            std::move(promise),
            foo        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void PubSubStreamingServiceWrapper::async_eb_returnstreamFast(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ServerStream<int32_t>> callback
    , int32_t i32_from
    , int32_t i32_to
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
i32_from,
i32_to    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_PubSubStreamingService_returnstreamFast(
            this->if_object,
            ctx,
            std::move(promise),
            i32_from,
            i32_to        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> PubSubStreamingServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<PubSubStreamingServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> PubSubStreamingServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_PubSubStreamingService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> PubSubStreamingServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_PubSubStreamingService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace cpp2
