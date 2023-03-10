//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, _UIPassthroughGateGestureRecognizer, _UIPassthroughScrollGestureRecognizer;
@protocol _UIPassthroughScrollInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollInteraction : NSObject
{
    _Bool _recognizeOnPrimaryButtonDown;	// 8 = 0x8
    _Bool _recognizeOnSecondaryButtonDown;	// 9 = 0x9
    _Bool _eatsTouches;	// 10 = 0xa
    _Bool _configuredForInactiveInteractionEventsOnly;	// 11 = 0xb
    UIView *_view;	// 16 = 0x10
    UIView *_touchFallbackView;	// 24 = 0x18
    _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer;	// 32 = 0x20
    _UIPassthroughGateGestureRecognizer *_gestureGate;	// 40 = 0x28
    id <_UIPassthroughScrollInteractionDelegate> _delegate;	// 48 = 0x30
}

+ (_Bool)_isPassthroughGestureRecognizer:(id)arg1;	// IMP=0x0010000001239d8e
+ (_Bool)_shouldEventBePassedThrough:(id)arg1;	// IMP=0x001000000123981c
- (void).cxx_destruct;	// IMP=0x000000000123a95b
@property(nonatomic) _Bool configuredForInactiveInteractionEventsOnly; // @synthesize configuredForInactiveInteractionEventsOnly=_configuredForInactiveInteractionEventsOnly;
@property(nonatomic) _Bool eatsTouches; // @synthesize eatsTouches=_eatsTouches;
@property(nonatomic) _Bool recognizeOnSecondaryButtonDown; // @synthesize recognizeOnSecondaryButtonDown=_recognizeOnSecondaryButtonDown;
@property(nonatomic) _Bool recognizeOnPrimaryButtonDown; // @synthesize recognizeOnPrimaryButtonDown=_recognizeOnPrimaryButtonDown;
@property(nonatomic) __weak id <_UIPassthroughScrollInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)_passthroughScrollGestureRecognizerShouldRequireFailureOfGestureRecognizer:(id)arg1;	// IMP=0x000000000123a5ca
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000123a5b3
- (_Bool)_passthroughGestureRecognizer:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x000000000123a4e0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000123a4c3
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000123a427
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000123a37d
- (_Bool)_delegateShouldInteractAtLocation:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000123a2c4
- (void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)arg1;	// IMP=0x000000000123a0db
- (void)__forciblyEndWithReason:(unsigned long long)arg1;	// IMP=0x000000000123a0c9
- (void)_handlePassthroughRecognizer:(id)arg1;	// IMP=0x000000000123a003
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000001239e98
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000001239e86
- (void)_tearDown;	// IMP=0x0000000001239dea
- (void)dealloc;	// IMP=0x0000000001239d50
- (void)_updateGesturesEatTouches;	// IMP=0x0000000001239c7b
- (void)_setUpForWindow:(id)arg1;	// IMP=0x0000000001239a95
@property(readonly, nonatomic) _UIPassthroughGateGestureRecognizer *_gestureGate; // @synthesize _gestureGate;
@property(readonly, nonatomic) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer; // @synthesize _passthroughScrollGestureRecognizer;
@property(readonly, nonatomic) UIView *_touchFallbackView; // @synthesize _touchFallbackView;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000012397e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

