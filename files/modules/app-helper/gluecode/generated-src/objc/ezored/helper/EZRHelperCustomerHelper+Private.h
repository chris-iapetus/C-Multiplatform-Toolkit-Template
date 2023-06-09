// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/helper/CustomerHelper.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class EZRHelperCustomerHelper;

namespace djinni_generated
{

class CustomerHelper
{
public:
    using CppType = std::shared_ptr<::ezored::helper::CustomerHelper>;
    using CppOptType = std::shared_ptr<::ezored::helper::CustomerHelper>;
    using ObjcType = ::EZRHelperCustomerHelper *;

    using Boxed = CustomerHelper;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType &cpp);
    static ObjcType fromCpp(const CppType &cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated
