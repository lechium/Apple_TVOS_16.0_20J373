//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UIFocusSystem;

__attribute__((visibility("hidden")))
@interface _UIFocusEventDelivery : NSObject
{
    UIFocusSystem *_focusSystem;	// 8 = 0x8
    double _lastDeliveredTimestamp;	// 16 = 0x10
    long long _lastDeliveredMovement;	// 24 = 0x18
    NSMutableSet *_keyboardPressEventForwardingMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001245b68
@property(readonly, nonatomic) NSMutableSet *keyboardPressEventForwardingMap; // @synthesize keyboardPressEventForwardingMap=_keyboardPressEventForwardingMap;
- (void)willDeliverFocusKeyboardEvent:(id)arg1;	// IMP=0x0000000001245973
- (_Bool)shouldSkipKeyCommand:(id)arg1 whenDeliveringFocusKeyboardEvent:(id)arg2 toResponder:(id)arg3;	// IMP=0x000000000124587b
- (_Bool)shouldDeliverFocusKeyboardEvent:(id)arg1 toResponder:(id)arg2;	// IMP=0x00000000012456fe
- (_Bool)_movementParticipatesInCooldown:(long long)arg1;	// IMP=0x00000000012456e4
@property(readonly, nonatomic) UIFocusSystem *focusSystem;
- (id)initWithFocusSystem:(id)arg1;	// IMP=0x00000000012455d0
- (id)init;	// IMP=0x000000000124552f

@end
