//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject
{
    long long _state;	// 8 = 0x8
    struct CGPoint _digitizerLocation;	// 16 = 0x10
    struct CGPoint _velocity;	// 32 = 0x20
}

@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property(nonatomic) long long state; // @synthesize state=_state;
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x00000000005db723
- (struct CGPoint)_digitizerLocation;	// IMP=0x00000000005db711

@end

