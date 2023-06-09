// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.net.http;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class HttpClientPlatformService {
    public abstract HttpResponse doRequest(HttpRequest request);

    private static final class CppProxy extends HttpClientPlatformService
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        @SuppressWarnings("deprecation")
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        @Override
        public HttpResponse doRequest(HttpRequest request)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_doRequest(this.nativeRef, request);
        }
        private native HttpResponse native_doRequest(long _nativeRef, HttpRequest request);
    }
}
