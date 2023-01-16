//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetPlacement, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIFlickingAssistantViewSupport
{
    UIPanGestureRecognizer *_panRecognizer;	// 32 = 0x20
    long long _position;	// 40 = 0x28
    long long _lastMinimizedPosition;	// 48 = 0x30
    long long _visualState;	// 56 = 0x38
    struct CGPoint _initalTouchPoint;	// 64 = 0x40
    _Bool _shouldNotifyCompletion;	// 80 = 0x50
    _Bool _isCompact;	// 81 = 0x51
    UIInputViewSetPlacement *_remotePlacement;	// 88 = 0x58
    long long _draggingState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000ab45fd
@property(nonatomic) long long draggingState; // @synthesize draggingState=_draggingState;
@property(retain, nonatomic) UIInputViewSetPlacement *remotePlacement; // @synthesize remotePlacement=_remotePlacement;
@property(nonatomic, setter=setCompact:) _Bool isCompact; // @synthesize isCompact=_isCompact;
- (void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect)arg1;	// IMP=0x0000000000ab45a0
- (void)didUpdateTransition;	// IMP=0x0000000000ab4416
- (struct CGRect)assistantFrame;	// IMP=0x0000000000ab42e0
- (unsigned long long)assistantPosition;	// IMP=0x0000000000ab4278
- (struct CGPoint)keyboardOriginFromAssistantViewPosition:(long long)arg1;	// IMP=0x0000000000ab3d5c
- (void)updateTransition:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ab3bb0
- (struct CGPoint)barOriginFromTouchPoint:(struct CGPoint)arg1;	// IMP=0x0000000000ab394f
- (struct CGPoint)projectedLandingPointForGestureRecognizerEnd:(id)arg1;	// IMP=0x0000000000ab3145
- (void)transitToDraggingVisualState:(long long)arg1 withTouchLocation:(struct CGPoint)arg2;	// IMP=0x0000000000ab3047
- (_Bool)isInputAssistantItemHidden;	// IMP=0x0000000000ab2fd2
- (void)panGestureHandler:(id)arg1;	// IMP=0x0000000000ab247c
- (void)_initalizePosition;	// IMP=0x0000000000ab230c
- (void)setPositionAndVisualStateByPersistentLocation:(_Bool)arg1 minimize:(_Bool)arg2;	// IMP=0x0000000000ab2235
- (void)_updatedController;	// IMP=0x0000000000ab208c
- (void)_connectController:(id)arg1;	// IMP=0x0000000000ab1f1d
- (void)_disconnectingController:(id)arg1;	// IMP=0x0000000000ab1e3b

@end
