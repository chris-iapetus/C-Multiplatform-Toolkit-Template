// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "ezored/net/http/HttpServerConfig.hpp"

namespace djinni_generated
{

class EZRHttpServerConfig final
{
public:
    using CppType = ::ezored::net::http::HttpServerConfig;
    using JniType = jobject;

    using Boxed = EZRHttpServerConfig;

    ~EZRHttpServerConfig();

    static CppType toCpp(JNIEnv *jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, const CppType &c);

private:
    EZRHttpServerConfig();
    friend ::djinni::JniClass<EZRHttpServerConfig>;

    const ::djinni::GlobalRef<jclass> clazz{::djinni::jniFindClass("com/ezored/net/http/HttpServerConfig")};
    const jmethodID jconstructor{::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;)V")};
    const jfieldID field_mPort{::djinni::jniGetFieldID(clazz.get(), "mPort", "I")};
    const jfieldID field_mStaticPath{::djinni::jniGetFieldID(clazz.get(), "mStaticPath", "Ljava/lang/String;")};
};

} // namespace djinni_generated
