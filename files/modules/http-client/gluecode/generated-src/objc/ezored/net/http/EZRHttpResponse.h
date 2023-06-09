// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "ezored/net/http/EZRHttpHeader.h"
#import <Foundation/Foundation.h>

@interface EZRHttpResponse : NSObject
- (nonnull instancetype)initWithCode:(int32_t)code
                                body:(nonnull NSString *)body
                                 url:(nonnull NSString *)url
                             headers:(nonnull NSArray<EZRHttpHeader *> *)headers;
+ (nonnull instancetype)httpResponseWithCode:(int32_t)code
                                        body:(nonnull NSString *)body
                                         url:(nonnull NSString *)url
                                     headers:(nonnull NSArray<EZRHttpHeader *> *)headers;

@property(nonatomic, readonly) int32_t code;

@property(nonatomic, readonly, nonnull) NSString *body;

@property(nonatomic, readonly, nonnull) NSString *url;

@property(nonatomic, readonly, nonnull) NSArray<EZRHttpHeader *> *headers;

@end
