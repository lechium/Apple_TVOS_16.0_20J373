//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol GKProfileService <NSObject>
- (oneway void)getFriendSupportPageURLWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getOcelotStateForCurrentAppWithHandler:(void (^)(_Bool))arg1;
- (oneway void)setOcelotStateForCurrentApp;
- (oneway void)getProfilesForPlayerIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

