// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/domain/DeviceData.hpp"
#import "ezored/domain/EZRDomainDeviceData.h"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class EZRDomainDeviceData;

namespace djinni_generated
{

struct DeviceData
{
    using CppType = ::ezored::domain::DeviceData;
    using ObjcType = ::EZRDomainDeviceData *;

    using Boxed = DeviceData;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType &cpp);
};

} // namespace djinni_generated
