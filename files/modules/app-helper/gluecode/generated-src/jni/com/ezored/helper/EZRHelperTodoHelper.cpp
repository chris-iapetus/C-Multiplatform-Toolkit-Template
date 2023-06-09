// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "com/ezored/helper/EZRHelperTodoHelper.hpp" // my header
#include "com/ezored/domain/EZRDomainTodo.hpp"

namespace djinni_generated
{

EZRHelperTodoHelper::EZRHelperTodoHelper() : ::djinni::JniInterface<::ezored::helper::TodoHelper, EZRHelperTodoHelper>("com/ezored/helper/TodoHelper$CppProxy") {}

EZRHelperTodoHelper::~EZRHelperTodoHelper() = default;

CJNIEXPORT void JNICALL Java_com_ezored_helper_TodoHelper_00024CppProxy_nativeDestroy(JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ezored::helper::TodoHelper> *>(nativeRef);
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::EZRDomainTodo::JniType JNICALL Java_com_ezored_helper_TodoHelper_00024CppProxy_create(JNIEnv *jniEnv, jobject /*this*/)
{
    try
    {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ezored::helper::TodoHelper::create();
        return ::djinni::release(::djinni_generated::EZRDomainTodo::fromCpp(jniEnv, r));
    }
    JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
