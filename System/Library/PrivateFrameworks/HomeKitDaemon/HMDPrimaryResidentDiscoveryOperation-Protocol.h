//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDResidentDevice, HMFFuture, NSError;

@protocol HMDPrimaryResidentDiscoveryOperation <NSObject>
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly) NSError *error;
@property(readonly) HMDResidentDevice *currentPrimaryResident;
@property(readonly) HMFFuture *completionFuture;
- (void)cancel;
- (void)run;
@end
