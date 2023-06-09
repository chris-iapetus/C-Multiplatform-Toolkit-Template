// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "ezored/helper/EnvironmentHelper.hpp"

namespace djinni_generated
{

class EZRHelperEnvironmentHelper final : ::djinni::JniInterface<::ezored::helper::EnvironmentHelper, EZRHelperEnvironmentHelper>
{
public:
    using CppType = std::shared_ptr<::ezored::helper::EnvironmentHelper>;
    using CppOptType = std::shared_ptr<::ezored::helper::EnvironmentHelper>;
    using JniType = jobject;

    using Boxed = EZRHelperEnvironmentHelper;

    ~EZRHelperEnvironmentHelper();

    static CppType toCpp(JNIEnv *jniEnv, JniType j) { return ::djinni::JniClass<EZRHelperEnvironmentHelper>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv *jniEnv, const CppOptType &c) { return {jniEnv, ::djinni::JniClass<EZRHelperEnvironmentHelper>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, const CppType &c) { return fromCppOpt(jniEnv, c); }

private:
    EZRHelperEnvironmentHelper();
    friend ::djinni::JniClass<EZRHelperEnvironmentHelper>;
    friend ::djinni::JniInterface<::ezored::helper::EnvironmentHelper, EZRHelperEnvironmentHelper>;
};

} // namespace djinni_generated
