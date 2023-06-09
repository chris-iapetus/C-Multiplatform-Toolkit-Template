// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.util;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Logger {
    public abstract void setPlatformService(LoggerPlatformService ps);

    public abstract LoggerPlatformService getPlatformService();

    public abstract boolean hasPlatformService();

    public abstract boolean allowedLevel(LoggerLevel level);

    public abstract void setLevel(LoggerLevel level);

    public static Logger shared()
    {
        return CppProxy.shared();
    }

    public static void v(String message)
    {
        CppProxy.v(message);
    }

    public static void d(String message)
    {
        CppProxy.d(message);
    }

    public static void i(String message)
    {
        CppProxy.i(message);
    }

    public static void w(String message)
    {
        CppProxy.w(message);
    }

    public static void e(String message)
    {
        CppProxy.e(message);
    }

    public static void setGroup(String group)
    {
        CppProxy.setGroup(group);
    }

    private static final class CppProxy extends Logger
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
        public void setPlatformService(LoggerPlatformService ps)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setPlatformService(this.nativeRef, ps);
        }
        private native void native_setPlatformService(long _nativeRef, LoggerPlatformService ps);

        @Override
        public LoggerPlatformService getPlatformService()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPlatformService(this.nativeRef);
        }
        private native LoggerPlatformService native_getPlatformService(long _nativeRef);

        @Override
        public boolean hasPlatformService()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_hasPlatformService(this.nativeRef);
        }
        private native boolean native_hasPlatformService(long _nativeRef);

        @Override
        public boolean allowedLevel(LoggerLevel level)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_allowedLevel(this.nativeRef, level);
        }
        private native boolean native_allowedLevel(long _nativeRef, LoggerLevel level);

        @Override
        public void setLevel(LoggerLevel level)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setLevel(this.nativeRef, level);
        }
        private native void native_setLevel(long _nativeRef, LoggerLevel level);

        public static native Logger shared();

        public static native void v(String message);

        public static native void d(String message);

        public static native void i(String message);

        public static native void w(String message);

        public static native void e(String message);

        public static native void setGroup(String group);
    }
}
