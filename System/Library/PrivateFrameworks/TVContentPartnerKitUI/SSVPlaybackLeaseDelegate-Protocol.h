//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSError, SSVPlaybackLease, SSVPlaybackLeaseResponse;

@protocol SSVPlaybackLeaseDelegate <NSObject>

@optional
- (void)playbackLeaseAutomaticRefreshDidFinish:(SSVPlaybackLease *)arg1;
- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFailWithError:(NSError *)arg2;
- (void)playbackLease:(SSVPlaybackLease *)arg1 didEndWithReasonType:(unsigned long long)arg2;
- (void)playbackLeaseDidEnd:(SSVPlaybackLease *)arg1;
- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFinishWithResponse:(SSVPlaybackLeaseResponse *)arg2 error:(NSError *)arg3;
@end
