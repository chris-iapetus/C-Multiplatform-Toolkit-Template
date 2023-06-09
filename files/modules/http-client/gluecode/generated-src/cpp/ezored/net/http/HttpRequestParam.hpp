// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include <string>
#include <utility>

namespace ezored
{
namespace net
{
namespace http
{

struct HttpRequestParam final
{
    std::string name;
    std::string value;

    HttpRequestParam(std::string name_,
                     std::string value_)
        : name(std::move(name_)), value(std::move(value_))
    {
    }

    HttpRequestParam()
        : name(), value()
    {
    }
};

} // namespace http
} // namespace net
} // namespace ezored
