// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import <Foundation/Foundation.h>

@protocol EZRSharedDataPlatformService

- (void)setString:(nonnull NSString *)groupName
              key:(nonnull NSString *)key
            value:(nonnull NSString *)value;

- (void)setInteger:(nonnull NSString *)groupName
               key:(nonnull NSString *)key
             value:(int32_t)value;

- (void)setLong:(nonnull NSString *)groupName
            key:(nonnull NSString *)key
          value:(int64_t)value;

- (void)setBool:(nonnull NSString *)groupName
            key:(nonnull NSString *)key
          value:(BOOL)value;

- (void)setFloat:(nonnull NSString *)groupName
             key:(nonnull NSString *)key
           value:(float)value;

- (void)setDouble:(nonnull NSString *)groupName
              key:(nonnull NSString *)key
            value:(double)value;

- (nonnull NSString *)getString:(nonnull NSString *)groupName
                            key:(nonnull NSString *)key;

- (int32_t)getInteger:(nonnull NSString *)groupName
                  key:(nonnull NSString *)key;

- (int64_t)getLong:(nonnull NSString *)groupName
               key:(nonnull NSString *)key;

- (BOOL)getBool:(nonnull NSString *)groupName
            key:(nonnull NSString *)key;

- (float)getFloat:(nonnull NSString *)groupName
              key:(nonnull NSString *)key;

- (double)getDouble:(nonnull NSString *)groupName
                key:(nonnull NSString *)key;

- (nonnull NSString *)getStringWithDefaultValue:(nonnull NSString *)groupName
                                            key:(nonnull NSString *)key
                                   defaultValue:(nonnull NSString *)defaultValue;

- (int32_t)getIntegerWithDefaultValue:(nonnull NSString *)groupName
                                  key:(nonnull NSString *)key
                         defaultValue:(int32_t)defaultValue;

- (int64_t)getLongWithDefaultValue:(nonnull NSString *)groupName
                               key:(nonnull NSString *)key
                      defaultValue:(int64_t)defaultValue;

- (BOOL)getBoolWithDefaultValue:(nonnull NSString *)groupName
                            key:(nonnull NSString *)key
                   defaultValue:(BOOL)defaultValue;

- (float)getFloatWithDefaultValue:(nonnull NSString *)groupName
                              key:(nonnull NSString *)key
                     defaultValue:(float)defaultValue;

- (double)getDoubleWithDefaultValue:(nonnull NSString *)groupName
                                key:(nonnull NSString *)key
                       defaultValue:(double)defaultValue;

- (BOOL)has:(nonnull NSString *)groupName
        key:(nonnull NSString *)key;

- (void)remove:(nonnull NSString *)groupName
           key:(nonnull NSString *)key;

- (void)clear:(nonnull NSString *)groupName;

@end
