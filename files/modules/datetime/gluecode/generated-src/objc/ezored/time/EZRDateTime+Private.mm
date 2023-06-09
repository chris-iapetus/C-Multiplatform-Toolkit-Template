// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#import "ezored/time/EZRDateTime+Private.h"
#import "ezored/time/EZRDateTime.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface EZRDateTime ()

- (id)initWithCpp:(const std::shared_ptr<::ezored::time::DateTime> &)cppRef;

@end

@implementation EZRDateTime
{
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ezored::time::DateTime>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ezored::time::DateTime> &)cppRef
{
    if (self = [super init])
    {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nonnull NSDate *)getDateTimeFromString:(nonnull NSString *)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getDateTimeFromString(::djinni::String::toCpp(value));
        return ::djinni::Date::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)getStringFromDateTime:(nonnull NSDate *)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getStringFromDateTime(::djinni::Date::toCpp(value));
        return ::djinni::String::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)getCurrentDateTimeAsString
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentDateTimeAsString();
        return ::djinni::String::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSDate *)getCurrentDateTime
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentDateTime();
        return ::djinni::Date::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSDate *)getDateTimeFromSeconds:(int64_t)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getDateTimeFromSeconds(::djinni::I64::toCpp(value));
        return ::djinni::Date::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSDate *)getDateTimeFromMilliseconds:(int64_t)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getDateTimeFromMilliseconds(::djinni::I64::toCpp(value));
        return ::djinni::Date::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int64_t)getTimestampInMillisecondsFromDateTime:(nonnull NSDate *)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getTimestampInMillisecondsFromDateTime(::djinni::Date::toCpp(value));
        return ::djinni::I64::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int64_t)getTimestampInSecondsFromDateTime:(nonnull NSDate *)value
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getTimestampInSecondsFromDateTime(::djinni::Date::toCpp(value));
        return ::djinni::I64::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)getCurrentTimestampInSecondsAsString
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentTimestampInSecondsAsString();
        return ::djinni::String::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int64_t)getCurrentTimestampInSeconds
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentTimestampInSeconds();
        return ::djinni::I64::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)getCurrentTimestampInMillisecondsAsString
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentTimestampInMillisecondsAsString();
        return ::djinni::String::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int64_t)getCurrentTimestampInMilliseconds
{
    try
    {
        auto objcpp_result_ = ::ezored::time::DateTime::getCurrentTimestampInMilliseconds();
        return ::djinni::I64::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated
{

auto DateTime::toCpp(ObjcType objc) -> CppType
{
    if (!objc)
    {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto DateTime::fromCppOpt(const CppOptType &cpp) -> ObjcType
{
    if (!cpp)
    {
        return nil;
    }
    return ::djinni::get_cpp_proxy<::EZRDateTime>(cpp);
}

} // namespace djinni_generated

@end
