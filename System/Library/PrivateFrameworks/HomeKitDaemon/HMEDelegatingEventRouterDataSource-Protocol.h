//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMEDelegatingEventRouter, NSArray, NSSet, NSString;
@protocol HMESynchronousSubscriptionProviding;

@protocol HMEDelegatingEventRouterDataSource <NSObject>
- (NSSet *)delegatingRouter:(HMEDelegatingEventRouter *)arg1 upstreamTopicsFor:(NSString *)arg2;
- (NSArray *)delegatingRouter:(HMEDelegatingEventRouter *)arg1 filteredTopics:(NSArray *)arg2 forRouter:(id <HMESynchronousSubscriptionProviding>)arg3;
@end

