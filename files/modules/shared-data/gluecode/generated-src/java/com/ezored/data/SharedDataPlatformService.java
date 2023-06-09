// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.data;

public abstract class SharedDataPlatformService {
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
}
