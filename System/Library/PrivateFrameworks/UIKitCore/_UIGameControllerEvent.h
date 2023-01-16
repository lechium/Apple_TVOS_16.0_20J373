//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_a7a14e3b _previousState;	// 32 = 0x20
    unsigned long long _activeComponent;	// 264 = 0x108
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8ee5
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8e83
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8e21
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8dc6
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8ac8
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cd8289
- (struct CGPoint)_leftStickPosition;	// IMP=0x0000000000cd8270
- (void)_maybeConvertAndSendAsPressesEvent;	// IMP=0x0000000000cd7ef6
- (void)_reset;	// IMP=0x0000000000cd7e7a
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000cd7e5f
- (long long)subtype;	// IMP=0x0000000000cd7e57
- (long long)type;	// IMP=0x0000000000cd7e4c

@end
