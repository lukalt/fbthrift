/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h>)
#include <thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h>
#else
#include <thrift/compiler/test/fixtures/params/gen-cpp2/module_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class NestedContainersWrapper : virtual public NestedContainersSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit NestedContainersWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , std::unique_ptr<std::map<int32_t,std::vector<int32_t>>> foo
    ) override;
    void async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , std::unique_ptr<std::map<int32_t,std::set<int32_t>>> foo
    ) override;
    void async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , std::unique_ptr<std::vector<std::map<int32_t,int32_t>>> foo
    ) override;
    void async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , std::unique_ptr<std::vector<std::set<int32_t>>> foo
    ) override;
    void async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , std::unique_ptr<std::vector<std::vector<std::map<int32_t,std::map<int32_t,std::set<int32_t>>>>>> foo
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> NestedContainersInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
