// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "ezored/domain/DeviceData.hpp"

namespace djinni_generated
{

class EZRDomainDeviceData final
{
public:
    using CppType = ::ezored::domain::DeviceData;
    using JniType = jobject;

    using Boxed = EZRDomainDeviceData;

    ~EZRDomainDeviceData();

    static CppType toCpp(JNIEnv *jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, const CppType &c);

private:
    EZRDomainDeviceData();
    friend ::djinni::JniClass<EZRDomainDeviceData>;

    const ::djinni::GlobalRef<jclass> clazz{::djinni::jniFindClass("com/ezored/domain/DeviceData")};
    const jmethodID jconstructor{::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FFFLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")};
    const jfieldID field_mUniqueIdentifier{::djinni::jniGetFieldID(clazz.get(), "mUniqueIdentifier", "Ljava/lang/String;")};
    const jfieldID field_mName{::djinni::jniGetFieldID(clazz.get(), "mName", "Ljava/lang/String;")};
    const jfieldID field_mSystemName{::djinni::jniGetFieldID(clazz.get(), "mSystemName", "Ljava/lang/String;")};
    const jfieldID field_mSystemVersion{::djinni::jniGetFieldID(clazz.get(), "mSystemVersion", "Ljava/lang/String;")};
    const jfieldID field_mModel{::djinni::jniGetFieldID(clazz.get(), "mModel", "Ljava/lang/String;")};
    const jfieldID field_mLocalizedModel{::djinni::jniGetFieldID(clazz.get(), "mLocalizedModel", "Ljava/lang/String;")};
    const jfieldID field_mAppVersion{::djinni::jniGetFieldID(clazz.get(), "mAppVersion", "Ljava/lang/String;")};
    const jfieldID field_mAppShortVersion{::djinni::jniGetFieldID(clazz.get(), "mAppShortVersion", "Ljava/lang/String;")};
    const jfieldID field_mAppName{::djinni::jniGetFieldID(clazz.get(), "mAppName", "Ljava/lang/String;")};
    const jfieldID field_mScreenWidth{::djinni::jniGetFieldID(clazz.get(), "mScreenWidth", "F")};
    const jfieldID field_mScreenHeight{::djinni::jniGetFieldID(clazz.get(), "mScreenHeight", "F")};
    const jfieldID field_mScreenScale{::djinni::jniGetFieldID(clazz.get(), "mScreenScale", "F")};
    const jfieldID field_mSystemOsName{::djinni::jniGetFieldID(clazz.get(), "mSystemOsName", "Ljava/lang/String;")};
    const jfieldID field_mLanguage{::djinni::jniGetFieldID(clazz.get(), "mLanguage", "Ljava/lang/String;")};
    const jfieldID field_mImei{::djinni::jniGetFieldID(clazz.get(), "mImei", "Ljava/lang/String;")};
    const jfieldID field_mRegion{::djinni::jniGetFieldID(clazz.get(), "mRegion", "Ljava/lang/String;")};
};

} // namespace djinni_generated
