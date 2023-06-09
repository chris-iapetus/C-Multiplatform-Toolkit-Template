// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "com/ezored/domain/EZRDomainInitializationData.hpp" // my header
#include "djinni/jni/Marshal.hpp"

namespace djinni_generated
{

EZRDomainInitializationData::EZRDomainInitializationData() = default;

EZRDomainInitializationData::~EZRDomainInitializationData() = default;

auto EZRDomainInitializationData::fromCpp(JNIEnv *jniEnv, const CppType &c) -> ::djinni::LocalRef<JniType>
{
    const auto &data = ::djinni::JniClass<EZRDomainInitializationData>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.appId)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.name)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.basePath)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.databaseMigrationMaxVersion)),
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.debug)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto EZRDomainInitializationData::toCpp(JNIEnv *jniEnv, JniType j) -> CppType
{
    ::djinni::JniLocalScope jscope(jniEnv, 6);
    assert(j != nullptr);
    const auto &data = ::djinni::JniClass<EZRDomainInitializationData>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mAppId)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mName)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mBasePath)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mDatabaseMigrationMaxVersion)),
            ::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_mDebug))};
}

} // namespace djinni_generated
