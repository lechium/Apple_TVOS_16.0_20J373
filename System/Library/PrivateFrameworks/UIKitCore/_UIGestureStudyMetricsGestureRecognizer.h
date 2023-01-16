//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSString, UITouch;

__attribute__((visibility("hidden")))
@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer
{
    long long _observedTouchCount;	// 16 = 0x10
    double _startTimestamp;	// 24 = 0x18
    double _allowableMovement;	// 32 = 0x20
    UITouch *_primaryTouch;	// 40 = 0x28
    struct CGPoint _originalPosition;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b87764
@property(retain, nonatomic) UITouch *primaryTouch; // @synthesize primaryTouch=_primaryTouch;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) long long observedTouchCount; // @synthesize observedTouchCount=_observedTouchCount;
@property(readonly, nonatomic) double movement;
@property(readonly, nonatomic) double duration;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x0000000000b874fe
@property(readonly, nonatomic) NSString *eventName;
- (_Bool)_affectedByGesture:(id)arg1;	// IMP=0x0000000000b874e9
- (void)reset;	// IMP=0x0000000000b87486
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b873ea
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b8734e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b87348
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b8723f
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x0000000000b871b7
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000b8711f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

