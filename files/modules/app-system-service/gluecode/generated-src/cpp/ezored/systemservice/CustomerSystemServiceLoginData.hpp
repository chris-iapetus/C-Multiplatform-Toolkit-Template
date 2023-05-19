// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "ezored/domain/Customer.hpp"
#include "ezored/domain/Response.hpp"
#include <utility>

namespace ezored
{
namespace systemservice
{

struct CustomerSystemServiceLoginData final
{
    ::ezored::domain::Response response;
    ::ezored::domain::Customer customer;

    CustomerSystemServiceLoginData(::ezored::domain::Response response_,
                                   ::ezored::domain::Customer customer_)
        : response(std::move(response_)), customer(std::move(customer_))
    {
    }

    CustomerSystemServiceLoginData()
        : response(), customer()
    {
    }
};

} // namespace systemservice
} // namespace ezored
