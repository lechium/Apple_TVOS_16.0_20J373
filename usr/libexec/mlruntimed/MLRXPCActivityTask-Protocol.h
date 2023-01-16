//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol MLRXPCActivityTask <NSObject>
@property(nonatomic) _Bool activityDeferred;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property(readonly, nonatomic) NSString *identifier;
- (void)stop;
- (void)startTaskWithCompletion:(void (^)(NSError *))arg1;
- (NSObject<OS_xpc_object> *)criteria;
@end

