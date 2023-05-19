// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "ezored/domain/Customer.hpp"

namespace djinni_generated
{

class EZRDomainCustomer final
{
public:
    using CppType = ::ezored::domain::Customer;
    using JniType = jobject;

    using Boxed = EZRDomainCustomer;

    ~EZRDomainCustomer();

    static CppType toCpp(JNIEnv *jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, const CppType &c);

private:
    EZRDomainCustomer();
    friend ::djinni::JniClass<EZRDomainCustomer>;

    const ::djinni::GlobalRef<jclass> clazz{::djinni::jniFindClass("com/ezored/domain/Customer")};
    const jmethodID jconstructor{::djinni::jniGetMethodID(clazz.get(), "<init>", "(JLjava/lang/String;Ljava/lang/String;Lcom/ezored/enumerator/CustomerStatusEnum;)V")};
    const jfieldID field_mId{::djinni::jniGetFieldID(clazz.get(), "mId", "J")};
    const jfieldID field_mName{::djinni::jniGetFieldID(clazz.get(), "mName", "Ljava/lang/String;")};
    const jfieldID field_mToken{::djinni::jniGetFieldID(clazz.get(), "mToken", "Ljava/lang/String;")};
    const jfieldID field_mStatus{::djinni::jniGetFieldID(clazz.get(), "mStatus", "Lcom/ezored/enumerator/CustomerStatusEnum;")};
};

} // namespace djinni_generated
