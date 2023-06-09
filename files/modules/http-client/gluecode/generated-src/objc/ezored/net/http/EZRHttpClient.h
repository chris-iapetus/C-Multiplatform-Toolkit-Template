// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "ezored/net/http/EZRHttpRequest.h"
#import "ezored/net/http/EZRHttpResponse.h"
#import <Foundation/Foundation.h>
@class EZRHttpClient;
@class EZRHttpClientLogger;
@protocol EZRHttpClientPlatformService;

@interface EZRHttpClient : NSObject

+ (nullable EZRHttpClient *)shared;

- (void)setPlatformService:(nullable id<EZRHttpClientPlatformService>)ps;

- (nullable id<EZRHttpClientPlatformService>)getPlatformService;

- (BOOL)hasPlatformService;

- (nonnull EZRHttpResponse *)doRequest:(nonnull EZRHttpRequest *)request;

- (void)setLogger:(nullable EZRHttpClientLogger *)logger;

- (nullable EZRHttpClientLogger *)getLogger;

- (BOOL)hasLogger;

@end
