// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/helper/SecurityHelper.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class EZRHelperSecurityHelper;

namespace djinni_generated
{

class SecurityHelper
{
public:
    using CppType = std::shared_ptr<::ezored::helper::SecurityHelper>;
    using CppOptType = std::shared_ptr<::ezored::helper::SecurityHelper>;
    using ObjcType = ::EZRHelperSecurityHelper *;

    using Boxed = SecurityHelper;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType &cpp);
    static ObjcType fromCpp(const CppType &cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated
