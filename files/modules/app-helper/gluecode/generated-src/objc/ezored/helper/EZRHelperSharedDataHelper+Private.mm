// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#import "ezored/domain/EZRDomainCustomer+Private.h"
#import "ezored/helper/EZRHelperSharedDataHelper+Private.h"
#import "ezored/helper/EZRHelperSharedDataHelper.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface EZRHelperSharedDataHelper ()

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::SharedDataHelper> &)cppRef;

@end

@implementation EZRHelperSharedDataHelper
{
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ezored::helper::SharedDataHelper>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::SharedDataHelper> &)cppRef
{
    if (self = [super init])
    {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (void)setCustomer:(nonnull EZRDomainCustomer *)value
{
    try
    {
        ::ezored::helper::SharedDataHelper::setCustomer(::djinni_generated::Customer::toCpp(value));
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull EZRDomainCustomer *)getCustomer
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::SharedDataHelper::getCustomer();
        return ::djinni_generated::Customer::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (void)storeCustomer
{
    try
    {
        ::ezored::helper::SharedDataHelper::storeCustomer();
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (void)setDemoFlag:(BOOL)value
{
    try
    {
        ::ezored::helper::SharedDataHelper::setDemoFlag(::djinni::Bool::toCpp(value));
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (BOOL)getDemoFlag
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::SharedDataHelper::getDemoFlag();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated
{

auto SharedDataHelper::toCpp(ObjcType objc) -> CppType
{
    if (!objc)
    {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto SharedDataHelper::fromCppOpt(const CppOptType &cpp) -> ObjcType
{
    if (!cpp)
    {
        return nil;
    }
    return ::djinni::get_cpp_proxy<::EZRHelperSharedDataHelper>(cpp);
}

} // namespace djinni_generated

@end
