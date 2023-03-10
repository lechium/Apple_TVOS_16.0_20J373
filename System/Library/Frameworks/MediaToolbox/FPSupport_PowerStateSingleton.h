//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_PowerStateSingleton : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQ;	// 8 = 0x8
}

+ (id)sharedFPSupportPowerStateSingleton;	// IMP=0x00600000001dce3d
- (void)dealloc;	// IMP=0x00000000001dcfcb
- (id)init;	// IMP=0x00000000001dcf3d
- (void)postNotification;	// IMP=0x00000000001dcec4
- (void)_didChangePowerState:(id)arg1;	// IMP=0x00000000001dceb2

@end

