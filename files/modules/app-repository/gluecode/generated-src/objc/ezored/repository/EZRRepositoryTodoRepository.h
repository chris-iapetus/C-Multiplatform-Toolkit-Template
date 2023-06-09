// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#import "ezored/domain/EZRDomainTodo.h"
#import <Foundation/Foundation.h>

@interface EZRRepositoryTodoRepository : NSObject

+ (void)truncate;

+ (nonnull EZRDomainTodo *)findById:(int64_t)id;

+ (nonnull NSArray<EZRDomainTodo *> *)findAllOrderByCreatedAtDesc;

+ (nonnull NSArray<EZRDomainTodo *> *)findByTitle:(nonnull NSString *)title;

+ (BOOL)removeById:(int64_t)id;

+ (int64_t)update:(int64_t)id
             todo:(nonnull EZRDomainTodo *)todo;

+ (int64_t)insert:(nonnull EZRDomainTodo *)todo;

+ (int64_t)add:(nonnull EZRDomainTodo *)todo;

+ (BOOL)setDoneById:(int64_t)id
               done:(BOOL)done;

+ (int64_t)count;

@end
