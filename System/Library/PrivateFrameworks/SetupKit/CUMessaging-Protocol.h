//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupKit/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CUMessaging <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)sendRequestID:(NSString *)arg1 requestMessage:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)deregisterRequestID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 requestHandler:(void (^)(NSString *, NSDictionary *, NSDictionary *, void (^)(NSDictionary *, NSDictionary *, NSError *, void (^)(NSError *))))arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)sendEventID:(NSString *)arg1 eventMessage:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)deregisterEventID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerEventID:(NSString *)arg1 options:(NSDictionary *)arg2 eventHandler:(void (^)(NSString *, NSDictionary *, NSDictionary *))arg3 completionHandler:(void (^)(NSError *))arg4;
@end

