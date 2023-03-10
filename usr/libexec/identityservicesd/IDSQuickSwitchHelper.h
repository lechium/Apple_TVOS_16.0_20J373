//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSQuickSwitchHelper : NSObject
{
    _Bool _isQuickSwitchingToAnotherDevice;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _isQuickSwitchingMutex;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000167e90
- (void)_resetCommunicationStateBeforeQuickSwitchDeactivatePairedDevices:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000169080
- (void)resetCommunicationStateBeforeQuickSwitchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000169020
- (void)initiateQuickSwitchToDeviceWithCBUUID:(id)arg1 force:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001681c0
- (void)_setIsQuickSwitchingToAnotherDevice:(_Bool)arg1;	// IMP=0x0010000000168090
- (_Bool)isQuickSwitchingToAnotherDevice;	// IMP=0x0010000000168040
- (void)dealloc;	// IMP=0x0010000000167ff0
- (id)init;	// IMP=0x0010000000167f50

@end

