// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.data;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class SharedData {
    public abstract void setPlatformService(SharedDataPlatformService ps);

    public abstract SharedDataPlatformService getPlatformService();

    public abstract boolean hasPlatformService();

    public abstract void setString(String groupName, String key, String value);

    public abstract void setInteger(String groupName, String key, int value);

    public abstract void setLong(String groupName, String key, long value);

    public abstract void setBool(String groupName, String key, boolean value);

    public abstract void setFloat(String groupName, String key, float value);

    public abstract void setDouble(String groupName, String key, double value);

    public abstract String getString(String groupName, String key);

    public abstract int getInteger(String groupName, String key);

    public abstract long getLong(String groupName, String key);

    public abstract boolean getBool(String groupName, String key);

    public abstract float getFloat(String groupName, String key);

    public abstract double getDouble(String groupName, String key);

    public abstract String getStringWithDefaultValue(String groupName, String key, String defaultValue);

    public abstract int getIntegerWithDefaultValue(String groupName, String key, int defaultValue);

    public abstract long getLongWithDefaultValue(String groupName, String key, long defaultValue);

    public abstract boolean getBoolWithDefaultValue(String groupName, String key, boolean defaultValue);

    public abstract float getFloatWithDefaultValue(String groupName, String key, float defaultValue);

    public abstract double getDoubleWithDefaultValue(String groupName, String key, double defaultValue);

    public abstract boolean has(String groupName, String key);

    public abstract void remove(String groupName, String key);

    public abstract void clear(String groupName);

    public static SharedData shared()
    {
        return CppProxy.shared();
    }

    private static final class CppProxy extends SharedData
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
        public void setPlatformService(SharedDataPlatformService ps)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setPlatformService(this.nativeRef, ps);
        }
        private native void native_setPlatformService(long _nativeRef, SharedDataPlatformService ps);

        @Override
        public SharedDataPlatformService getPlatformService()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPlatformService(this.nativeRef);
        }
        private native SharedDataPlatformService native_getPlatformService(long _nativeRef);

        @Override
        public boolean hasPlatformService()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_hasPlatformService(this.nativeRef);
        }
        private native boolean native_hasPlatformService(long _nativeRef);

        @Override
        public void setString(String groupName, String key, String value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setString(this.nativeRef, groupName, key, value);
        }
        private native void native_setString(long _nativeRef, String groupName, String key, String value);

        @Override
        public void setInteger(String groupName, String key, int value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setInteger(this.nativeRef, groupName, key, value);
        }
        private native void native_setInteger(long _nativeRef, String groupName, String key, int value);

        @Override
        public void setLong(String groupName, String key, long value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setLong(this.nativeRef, groupName, key, value);
        }
        private native void native_setLong(long _nativeRef, String groupName, String key, long value);

        @Override
        public void setBool(String groupName, String key, boolean value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setBool(this.nativeRef, groupName, key, value);
        }
        private native void native_setBool(long _nativeRef, String groupName, String key, boolean value);

        @Override
        public void setFloat(String groupName, String key, float value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setFloat(this.nativeRef, groupName, key, value);
        }
        private native void native_setFloat(long _nativeRef, String groupName, String key, float value);

        @Override
        public void setDouble(String groupName, String key, double value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setDouble(this.nativeRef, groupName, key, value);
        }
        private native void native_setDouble(long _nativeRef, String groupName, String key, double value);

        @Override
        public String getString(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getString(this.nativeRef, groupName, key);
        }
        private native String native_getString(long _nativeRef, String groupName, String key);

        @Override
        public int getInteger(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getInteger(this.nativeRef, groupName, key);
        }
        private native int native_getInteger(long _nativeRef, String groupName, String key);

        @Override
        public long getLong(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLong(this.nativeRef, groupName, key);
        }
        private native long native_getLong(long _nativeRef, String groupName, String key);

        @Override
        public boolean getBool(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBool(this.nativeRef, groupName, key);
        }
        private native boolean native_getBool(long _nativeRef, String groupName, String key);

        @Override
        public float getFloat(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getFloat(this.nativeRef, groupName, key);
        }
        private native float native_getFloat(long _nativeRef, String groupName, String key);

        @Override
        public double getDouble(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDouble(this.nativeRef, groupName, key);
        }
        private native double native_getDouble(long _nativeRef, String groupName, String key);

        @Override
        public String getStringWithDefaultValue(String groupName, String key, String defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getStringWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native String native_getStringWithDefaultValue(long _nativeRef, String groupName, String key, String defaultValue);

        @Override
        public int getIntegerWithDefaultValue(String groupName, String key, int defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getIntegerWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native int native_getIntegerWithDefaultValue(long _nativeRef, String groupName, String key, int defaultValue);

        @Override
        public long getLongWithDefaultValue(String groupName, String key, long defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLongWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native long native_getLongWithDefaultValue(long _nativeRef, String groupName, String key, long defaultValue);

        @Override
        public boolean getBoolWithDefaultValue(String groupName, String key, boolean defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBoolWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native boolean native_getBoolWithDefaultValue(long _nativeRef, String groupName, String key, boolean defaultValue);

        @Override
        public float getFloatWithDefaultValue(String groupName, String key, float defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getFloatWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native float native_getFloatWithDefaultValue(long _nativeRef, String groupName, String key, float defaultValue);

        @Override
        public double getDoubleWithDefaultValue(String groupName, String key, double defaultValue)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDoubleWithDefaultValue(this.nativeRef, groupName, key, defaultValue);
        }
        private native double native_getDoubleWithDefaultValue(long _nativeRef, String groupName, String key, double defaultValue);

        @Override
        public boolean has(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_has(this.nativeRef, groupName, key);
        }
        private native boolean native_has(long _nativeRef, String groupName, String key);

        @Override
        public void remove(String groupName, String key)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_remove(this.nativeRef, groupName, key);
        }
        private native void native_remove(long _nativeRef, String groupName, String key);

        @Override
        public void clear(String groupName)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_clear(this.nativeRef, groupName);
        }
        private native void native_clear(long _nativeRef, String groupName);

        public static native SharedData shared();
    }
}