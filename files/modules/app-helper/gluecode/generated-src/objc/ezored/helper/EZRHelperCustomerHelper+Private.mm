// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#import "ezored/domain/EZRDomainCustomer+Private.h"
#import "ezored/helper/EZRHelperCustomerHelper+Private.h"
#import "ezored/helper/EZRHelperCustomerHelper.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface EZRHelperCustomerHelper ()

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::CustomerHelper> &)cppRef;

@end

@implementation EZRHelperCustomerHelper
{
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ezored::helper::CustomerHelper>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::CustomerHelper> &)cppRef
{
    if (self = [super init])
    {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (BOOL)isLogged
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::CustomerHelper::isLogged();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)getToken
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::CustomerHelper::getToken();
        return ::djinni::String::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull EZRDomainCustomer *)create
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::CustomerHelper::create();
        return ::djinni_generated::Customer::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (void)onCustomerLogin:(nonnull EZRDomainCustomer *)customer
{
    try
    {
        ::ezored::helper::CustomerHelper::onCustomerLogin(::djinni_generated::Customer::toCpp(customer));
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated
{

auto CustomerHelper::toCpp(ObjcType objc) -> CppType
{
    if (!objc)
    {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto CustomerHelper::fromCppOpt(const CppOptType &cpp) -> ObjcType
{
    if (!cpp)
    {
        return nil;
    }
    return ::djinni::get_cpp_proxy<::EZRHelperCustomerHelper>(cpp);
}

} // namespace djinni_generated

@end
