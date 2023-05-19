// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#include "ezored/net/http/HttpServer.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class EZRHttpServer;

namespace djinni_generated
{

class HttpServer
{
public:
    using CppType = std::shared_ptr<::ezored::net::http::HttpServer>;
    using CppOptType = std::shared_ptr<::ezored::net::http::HttpServer>;
    using ObjcType = ::EZRHttpServer *;

    using Boxed = HttpServer;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType &cpp);
    static ObjcType fromCpp(const CppType &cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated
