//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSString, _AVDetachedSwipeGestureRecognizer, _AVPermissiveSwipeGestureDelegate;

__attribute__((visibility("hidden")))
@interface AVPermissiveSwipeGestureRecognizer : UIGestureRecognizer
{
    unsigned int _numberOfTouchMovedEventsReceived;	// 8 = 0x8
    _Bool _ignoringActiveTouch;	// 12 = 0xc
    _Bool _requiresStartFromEdge;	// 13 = 0xd
    _Bool _transportBarVisible;	// 14 = 0xe
    _Bool _transportBarVisibleAtTouchesBegan;	// 15 = 0xf
    _Bool _swipeGestureActive;	// 16 = 0x10
    _Bool _swipeGestureRecognizedOrFailed;	// 17 = 0x11
    double _minimumRestTimeBeforeSwipe;	// 24 = 0x18
    double _maximumSwipeDuration;	// 32 = 0x20
    double _timeSinceTouchesBegan;	// 40 = 0x28
    _AVDetachedSwipeGestureRecognizer *_swipeGestureRecognizer;	// 48 = 0x30
    _AVPermissiveSwipeGestureDelegate *_permissiveDelegate;	// 56 = 0x38
    double _timeTouchesBegan;	// 64 = 0x40
    struct CGPoint _currentTouchLocation;	// 72 = 0x48
    struct CGPoint _currentDigitizerLocation;	// 88 = 0x58
    struct CGPoint _startingDigitizerLocation;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000701d2
@property(nonatomic) double timeTouchesBegan; // @synthesize timeTouchesBegan=_timeTouchesBegan;
@property(retain, nonatomic) _AVPermissiveSwipeGestureDelegate *permissiveDelegate; // @synthesize permissiveDelegate=_permissiveDelegate;
@property(nonatomic) struct CGPoint startingDigitizerLocation; // @synthesize startingDigitizerLocation=_startingDigitizerLocation;
@property(nonatomic) struct CGPoint currentDigitizerLocation; // @synthesize currentDigitizerLocation=_currentDigitizerLocation;
@property(nonatomic) struct CGPoint currentTouchLocation; // @synthesize currentTouchLocation=_currentTouchLocation;
@property(nonatomic, getter=isSwipeGestureRecognizedOrFailed) _Bool swipeGestureRecognizedOrFailed; // @synthesize swipeGestureRecognizedOrFailed=_swipeGestureRecognizedOrFailed;
@property(nonatomic, getter=isSwipeGestureActive) _Bool swipeGestureActive; // @synthesize swipeGestureActive=_swipeGestureActive;
@property(readonly, nonatomic) _AVDetachedSwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(readonly, nonatomic) double timeSinceTouchesBegan; // @synthesize timeSinceTouchesBegan=_timeSinceTouchesBegan;
@property(readonly, nonatomic) _Bool transportBarVisibleAtTouchesBegan; // @synthesize transportBarVisibleAtTouchesBegan=_transportBarVisibleAtTouchesBegan;
@property(nonatomic, getter=isTransportBarVisible) _Bool transportBarVisible; // @synthesize transportBarVisible=_transportBarVisible;
@property(nonatomic) _Bool requiresStartFromEdge; // @synthesize requiresStartFromEdge=_requiresStartFromEdge;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) double minimumRestTimeBeforeSwipe; // @synthesize minimumRestTimeBeforeSwipe=_minimumRestTimeBeforeSwipe;
- (void)disableRecognitionOfCurrentTouch;	// IMP=0x000000000006ff1b
- (void)_scheduleTouchRestTimeout;	// IMP=0x000000000006fe69
- (void)_fireTouchRestTimeout;	// IMP=0x000000000006fd1d
- (void)_cancelTouchRestTimeout;	// IMP=0x000000000006fcf7
@property(nonatomic) unsigned long long direction;
- (void)didHideTransportBarAnimated:(_Bool)arg1;	// IMP=0x000000000006fc61
- (void)willHideTransportBarAnimated:(_Bool)arg1;	// IMP=0x000000000006fc4d
- (void)didShowTransportBarAnimated:(_Bool)arg1;	// IMP=0x000000000006fc47
- (void)willShowTransportBarAnimated:(_Bool)arg1;	// IMP=0x000000000006fc30
- (void)swipeGestureWasRecognized:(id)arg1;	// IMP=0x000000000006f9c0
- (void)setState:(long long)arg1;	// IMP=0x000000000006f940
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000006f938
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000006f930
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006f7b4
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006f5ca
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006f23e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006efde
- (void)reset;	// IMP=0x000000000006efa1
- (_Bool)_shouldSwipeStartFromDigitizerLocation:(struct CGPoint)arg1;	// IMP=0x000000000006ee03
@property(nonatomic) double minimumPrimaryMovement; // @dynamic minimumPrimaryMovement;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000006ec3e
@property(readonly, nonatomic) long long avTouchPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
