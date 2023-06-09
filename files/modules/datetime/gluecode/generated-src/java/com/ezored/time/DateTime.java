// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.time;

import java.util.Date;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class DateTime {
    public static Date getDateTimeFromString(String value)
    {
        return CppProxy.getDateTimeFromString(value);
    }

    public static String getStringFromDateTime(Date value)
    {
        return CppProxy.getStringFromDateTime(value);
    }

    public static String getCurrentDateTimeAsString()
    {
        return CppProxy.getCurrentDateTimeAsString();
    }

    public static Date getCurrentDateTime()
    {
        return CppProxy.getCurrentDateTime();
    }

    public static Date getDateTimeFromSeconds(long value)
    {
        return CppProxy.getDateTimeFromSeconds(value);
    }

    public static Date getDateTimeFromMilliseconds(long value)
    {
        return CppProxy.getDateTimeFromMilliseconds(value);
    }

    public static long getTimestampInMillisecondsFromDateTime(Date value)
    {
        return CppProxy.getTimestampInMillisecondsFromDateTime(value);
    }

    public static long getTimestampInSecondsFromDateTime(Date value)
    {
        return CppProxy.getTimestampInSecondsFromDateTime(value);
    }

    public static String getCurrentTimestampInSecondsAsString()
    {
        return CppProxy.getCurrentTimestampInSecondsAsString();
    }

    public static long getCurrentTimestampInSeconds()
    {
        return CppProxy.getCurrentTimestampInSeconds();
    }

    public static String getCurrentTimestampInMillisecondsAsString()
    {
        return CppProxy.getCurrentTimestampInMillisecondsAsString();
    }

    public static long getCurrentTimestampInMilliseconds()
    {
        return CppProxy.getCurrentTimestampInMilliseconds();
    }

    private static final class CppProxy extends DateTime
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

        public static native Date getDateTimeFromString(String value);

        public static native String getStringFromDateTime(Date value);

        public static native String getCurrentDateTimeAsString();

        public static native Date getCurrentDateTime();

        public static native Date getDateTimeFromSeconds(long value);

        public static native Date getDateTimeFromMilliseconds(long value);

        public static native long getTimestampInMillisecondsFromDateTime(Date value);

        public static native long getTimestampInSecondsFromDateTime(Date value);

        public static native String getCurrentTimestampInSecondsAsString();

        public static native long getCurrentTimestampInSeconds();

        public static native String getCurrentTimestampInMillisecondsAsString();

        public static native long getCurrentTimestampInMilliseconds();
    }
}
