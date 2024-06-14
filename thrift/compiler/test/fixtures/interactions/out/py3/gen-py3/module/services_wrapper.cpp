/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/interactions/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/interactions/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace cpp2 {

MyServiceWrapper::MyServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__fixtures__interactions__module__services();
  }


void MyServiceWrapper::async_tm_foo(
  apache::thrift::HandlerCallbackPtr<void> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_foo(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_interact(
  apache::thrift::HandlerCallbackPtr<void> callback
    , int32_t arg
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
arg    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_interact(
            this->if_object,
            ctx,
            std::move(promise),
            arg        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_interactFast(
  apache::thrift::HandlerCallbackPtr<int32_t> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<int32_t>();
        call_cy_MyService_interactFast(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<int32_t>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_serialize(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ResponseAndServerStream<int32_t,int32_t>> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>();
        call_cy_MyService_serialize(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::unique_ptr<MyServiceSvIf::MyInteractionIf> MyServiceWrapper::createMyInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<MyServiceSvIf::MyInteractionFastIf> MyServiceWrapper::createMyInteractionFast() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<MyServiceSvIf::SerialInteractionIf> MyServiceWrapper::createSerialInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<MyServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


FactoriesWrapper::FactoriesWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__fixtures__interactions__module__services();
  }


void FactoriesWrapper::async_tm_foo(
  apache::thrift::HandlerCallbackPtr<void> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_Factories_foo(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void FactoriesWrapper::async_tm_interact(
  apache::thrift::HandlerCallbackPtr<void> callback
    , int32_t arg
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
arg    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_Factories_interact(
            this->if_object,
            ctx,
            std::move(promise),
            arg        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void FactoriesWrapper::async_tm_interactFast(
  apache::thrift::HandlerCallbackPtr<int32_t> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<int32_t>();
        call_cy_Factories_interactFast(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<int32_t>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void FactoriesWrapper::async_tm_serialize(
  apache::thrift::HandlerCallbackPtr<apache::thrift::ResponseAndServerStream<int32_t,int32_t>> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>();
        call_cy_Factories_serialize(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::unique_ptr<FactoriesSvIf::MyInteractionIf> FactoriesWrapper::createMyInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<FactoriesSvIf::MyInteractionFastIf> FactoriesWrapper::createMyInteractionFast() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<FactoriesSvIf::SerialInteractionIf> FactoriesWrapper::createSerialInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::shared_ptr<apache::thrift::ServerInterface> FactoriesInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<FactoriesWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> FactoriesWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_Factories_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> FactoriesWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_Factories_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


PerformWrapper::PerformWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__fixtures__interactions__module__services();
  }


void PerformWrapper::async_tm_foo(
  apache::thrift::HandlerCallbackPtr<void> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_Perform_foo(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::unique_ptr<PerformSvIf::MyInteractionIf> PerformWrapper::createMyInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<PerformSvIf::MyInteractionFastIf> PerformWrapper::createMyInteractionFast() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::unique_ptr<PerformSvIf::SerialInteractionIf> PerformWrapper::createSerialInteraction() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::shared_ptr<apache::thrift::ServerInterface> PerformInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<PerformWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> PerformWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_Perform_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> PerformWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_Perform_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace cpp2
