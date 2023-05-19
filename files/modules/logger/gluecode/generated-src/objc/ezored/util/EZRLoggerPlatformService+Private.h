// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/util/LoggerPlatformService.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol EZRLoggerPlatformService;

namespace djinni_generated
{

class LoggerPlatformService
{
public:
    using CppType = std::shared_ptr<::ezored::util::LoggerPlatformService>;
    using CppOptType = std::shared_ptr<::ezored::util::LoggerPlatformService>;
    using ObjcType = id<EZRLoggerPlatformService>;

    using Boxed = LoggerPlatformService;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType &cpp);
    static ObjcType fromCpp(const CppType &cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated
