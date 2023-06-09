// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "ezored/domain/EZRDomainTodo+Private.h"
#import "ezored/helper/EZRHelperTodoHelper+Private.h"
#import "ezored/helper/EZRHelperTodoHelper.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface EZRHelperTodoHelper ()

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::TodoHelper> &)cppRef;

@end

@implementation EZRHelperTodoHelper
{
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ezored::helper::TodoHelper>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ezored::helper::TodoHelper> &)cppRef
{
    if (self = [super init])
    {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nonnull EZRDomainTodo *)create
{
    try
    {
        auto objcpp_result_ = ::ezored::helper::TodoHelper::create();
        return ::djinni_generated::Todo::fromCpp(objcpp_result_);
    }
    DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated
{

auto TodoHelper::toCpp(ObjcType objc) -> CppType
{
    if (!objc)
    {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto TodoHelper::fromCppOpt(const CppOptType &cpp) -> ObjcType
{
    if (!cpp)
    {
        return nil;
    }
    return ::djinni::get_cpp_proxy<::EZRHelperTodoHelper>(cpp);
}

} // namespace djinni_generated

@end
