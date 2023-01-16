//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/NSObject-Protocol.h>

@class HMHome, HMRoom;

@protocol ANAnnounceReachabilityManagerDelegate <NSObject>
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoom:(HMRoom *)arg2 inHome:(HMHome *)arg3;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHome:(HMHome *)arg2;
@end

