//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/NSObject-Protocol.h>

@protocol TSXKernelClockClientProtocol <NSObject>
- (void)changedClockMaster;
- (void)resetClock;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;
- (void)updateLockState:(int)arg1;
@end

