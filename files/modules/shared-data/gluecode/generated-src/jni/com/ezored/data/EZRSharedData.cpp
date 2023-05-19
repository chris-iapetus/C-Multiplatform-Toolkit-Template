// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "com/ezored/data/EZRSharedData.hpp" // my header
#include "com/ezored/data/EZRSharedDataPlatformService.hpp"
#include "djinni/jni/Marshal.hpp"

namespace djinni_generated
{

EZRSharedData::EZRSharedData() : ::djinni::JniInterface<::ezored::data::SharedData, EZRSharedData>("com/ezored/data/SharedData$CppProxy") {}

EZRSharedData::~EZRSharedData() = default;

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_nativeDestroy(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ezored::data::SharedData> *>(nativeRef);
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_ezored_data_SharedData_00024CppProxy_shared(JNIEnv *jniEnv, jobject /*this*/)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ezored::data::SharedData::shared();
        return ::djinni::release(::djinni_generated::EZRSharedData::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setPlatformService(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jobject j_ps)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setPlatformService(::djinni_generated::EZRSharedDataPlatformService::toCpp(jniEnv, j_ps));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getPlatformService(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getPlatformService();
        return ::djinni::release(::djinni_generated::EZRSharedDataPlatformService::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1hasPlatformService(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->hasPlatformService();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setString(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jstring j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setString(::djinni::String::toCpp(jniEnv, j_groupName),
                       ::djinni::String::toCpp(jniEnv, j_key),
                       ::djinni::String::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setInteger(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jint j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setInteger(::djinni::String::toCpp(jniEnv, j_groupName),
                        ::djinni::String::toCpp(jniEnv, j_key),
                        ::djinni::I32::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setLong(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jlong j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setLong(::djinni::String::toCpp(jniEnv, j_groupName),
                     ::djinni::String::toCpp(jniEnv, j_key),
                     ::djinni::I64::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setBool(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jboolean j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setBool(::djinni::String::toCpp(jniEnv, j_groupName),
                     ::djinni::String::toCpp(jniEnv, j_key),
                     ::djinni::Bool::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setFloat(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jfloat j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setFloat(::djinni::String::toCpp(jniEnv, j_groupName),
                      ::djinni::String::toCpp(jniEnv, j_key),
                      ::djinni::F32::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1setDouble(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jdouble j_value)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->setDouble(::djinni::String::toCpp(jniEnv, j_groupName),
                       ::djinni::String::toCpp(jniEnv, j_key),
                       ::djinni::F64::toCpp(jniEnv, j_value));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getString(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getString(::djinni::String::toCpp(jniEnv, j_groupName),
                                ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getInteger(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getInteger(::djinni::String::toCpp(jniEnv, j_groupName),
                                 ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getLong(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getLong(::djinni::String::toCpp(jniEnv, j_groupName),
                              ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getBool(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getBool(::djinni::String::toCpp(jniEnv, j_groupName),
                              ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getFloat(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getFloat(::djinni::String::toCpp(jniEnv, j_groupName),
                               ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jdouble JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getDouble(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getDouble(::djinni::String::toCpp(jniEnv, j_groupName),
                                ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getStringWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jstring j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getStringWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                                ::djinni::String::toCpp(jniEnv, j_key),
                                                ::djinni::String::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getIntegerWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jint j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getIntegerWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                                 ::djinni::String::toCpp(jniEnv, j_key),
                                                 ::djinni::I32::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getLongWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jlong j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getLongWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                              ::djinni::String::toCpp(jniEnv, j_key),
                                              ::djinni::I64::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getBoolWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jboolean j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getBoolWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                              ::djinni::String::toCpp(jniEnv, j_key),
                                              ::djinni::Bool::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getFloatWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jfloat j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getFloatWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                               ::djinni::String::toCpp(jniEnv, j_key),
                                               ::djinni::F32::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jdouble JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1getDoubleWithDefaultValue(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key, jdouble j_defaultValue)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->getDoubleWithDefaultValue(::djinni::String::toCpp(jniEnv, j_groupName),
                                                ::djinni::String::toCpp(jniEnv, j_key),
                                                ::djinni::F64::toCpp(jniEnv, j_defaultValue));
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1has(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        auto r = ref->has(::djinni::String::toCpp(jniEnv, j_groupName),
                          ::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1remove(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName, jstring j_key)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->remove(::djinni::String::toCpp(jniEnv, j_groupName),
                    ::djinni::String::toCpp(jniEnv, j_key));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_data_SharedData_00024CppProxy_native_1clear(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jstring j_groupName)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto &ref = ::djinni::objectFromHandleAddress<::ezored::data::SharedData>(nativeRef);
        ref->clear(::djinni::String::toCpp(jniEnv, j_groupName));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
