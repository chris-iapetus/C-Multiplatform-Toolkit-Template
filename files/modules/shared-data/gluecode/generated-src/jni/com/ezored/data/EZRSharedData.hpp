// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "ezored/data/SharedData.hpp"

namespace djinni_generated
{

class EZRSharedData final : ::djinni::JniInterface<::ezored::data::SharedData, EZRSharedData>
{
public:
    using CppType = std::shared_ptr<::ezored::data::SharedData>;
    using CppOptType = std::shared_ptr<::ezored::data::SharedData>;
    using JniType = jobject;

    using Boxed = EZRSharedData;

    ~EZRSharedData();

    static CppType toCpp(JNIEnv *jniEnv, JniType j) { return ::djinni::JniClass<EZRSharedData>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv *jniEnv, const CppOptType &c) { return {jniEnv, ::djinni::JniClass<EZRSharedData>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, const CppType &c) { return fromCppOpt(jniEnv, c); }

private:
    EZRSharedData();
    friend ::djinni::JniClass<EZRSharedData>;
    friend ::djinni::JniInterface<::ezored::data::SharedData, EZRSharedData>;
};

} // namespace djinni_generated
