//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLRSchedulerRecord : NSObject
{
    long long _wakeUpPeriodInSeconds;	// 8 = 0x8
}

@property(readonly, nonatomic) long long wakeUpPeriodInSeconds; // @synthesize wakeUpPeriodInSeconds=_wakeUpPeriodInSeconds;
- (void)updateWakeUpPeriodInSeconds;	// IMP=0x001000000000cd8c
- (id)fetchAllPluginIDs;	// IMP=0x001000000000cd35
- (id)description;	// IMP=0x001000000000ccc3
- (id)init;	// IMP=0x001000000000cc0b

@end

