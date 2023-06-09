// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/time/DateTime.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class EZRDateTime;

namespace djinni_generated
{

class DateTime
{
public:
    using CppType = std::shared_ptr<::ezored::time::DateTime>;
    using CppOptType = std::shared_ptr<::ezored::time::DateTime>;
    using ObjcType = ::EZRDateTime *;

    using Boxed = DateTime;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType &cpp);
    static ObjcType fromCpp(const CppType &cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated
