//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, NSMutableDictionary, NSString;

@interface BKTouchDeliveryGenericGestureFocusObserver : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_destinationPerDisplayUUID;	// 16 = 0x10
    BKHIDSystemInterface *_HIDSystem;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000003f57d
- (void).cxx_destruct;	// IMP=0x002000000003f555
@property(retain, nonatomic) BKHIDSystemInterface *HIDSystem; // @synthesize HIDSystem=_HIDSystem;
- (void)postEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000003f3f5
- (void)postEvent:(struct __IOHIDEvent *)arg1 toDestination:(id)arg2;	// IMP=0x001000000003f3df
- (id)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 overrideSenderDescriptor:(id)arg3;	// IMP=0x001000000003f193
- (id)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000003f17e
- (void)setEventDestination:(id)arg1 forDisplayUUID:(id)arg2;	// IMP=0x001000000003f03e
- (id)eventDestinationForDisplayUUID:(id)arg1;	// IMP=0x001000000003ef6b
- (id)initWithHIDSystem:(id)arg1;	// IMP=0x001000000003eedf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

