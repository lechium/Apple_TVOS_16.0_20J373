//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TVSettingsLockdownPairingsFacade : NSObject
{
    NSObject<OS_dispatch_queue> *_lockdown_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000a03b4
- (void).cxx_destruct;	// IMP=0x00200000000a0467
- (void)setLockdownPairingEnabled:(_Bool)arg1;	// IMP=0x00100000000a0461
- (id)init;	// IMP=0x00100000000a0409

@end

