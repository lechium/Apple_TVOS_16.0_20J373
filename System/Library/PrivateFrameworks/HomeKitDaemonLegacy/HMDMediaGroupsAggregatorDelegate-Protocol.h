//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDMediaGroupsAggregator, HMMediaGroup;

@protocol HMDMediaGroupsAggregatorDelegate <NSObject>
- (void)mediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1 didUpdateGroup:(HMMediaGroup *)arg2;
- (void)didStopMediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1;
@end

