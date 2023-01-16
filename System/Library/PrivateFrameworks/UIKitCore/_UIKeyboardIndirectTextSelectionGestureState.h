//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardIndirectTextSelectionGestureState : NSObject
{
    _Bool _isShiftKeyBeingHeld;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    unsigned long long _flickDirection;	// 32 = 0x20
    unsigned long long _touchCount;	// 40 = 0x28
    struct CGPoint _translation;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000037fed6
@property(nonatomic) unsigned long long touchCount; // @synthesize touchCount=_touchCount;
@property(nonatomic) _Bool isShiftKeyBeingHeld; // @synthesize isShiftKeyBeingHeld=_isShiftKeyBeingHeld;
@property(nonatomic) unsigned long long flickDirection; // @synthesize flickDirection=_flickDirection;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000380122
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000380019
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000037fede

@end

