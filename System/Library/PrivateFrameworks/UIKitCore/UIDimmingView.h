//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, UIColor, UIEvent, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView
{
    UIBarButtonItem *_highlightedBarButtonItem;	// 176 = 0xb0
    UIImageView *_highlightedImageView;	// 184 = 0xb8
    UIImageView *_backgroundGlow;	// 192 = 0xc0
    NSArray *_passthroughViews;	// 200 = 0xc8
    _Bool _ignoresTouches;	// 208 = 0xd0
    _Bool _inPassthroughHitTest;	// 209 = 0xd1
    UIColor *_dimmingColor;	// 216 = 0xd8
    UITapGestureRecognizer *_singleFingerTapRecognizer;	// 224 = 0xe0
    UIEvent *_observedEventForAdditionalGestures;	// 232 = 0xe8
    NSMutableSet *_additionalEventGestureRecognizers;	// 240 = 0xf0
    _Bool _suppressesBackdrops;	// 248 = 0xf8
    id <UIDimmingViewDelegate> _delegate;	// 256 = 0x100
    double _percentDisplayed;	// 264 = 0x108
    double _percentLightened;	// 272 = 0x110
    NSArray *_lowerWindowDismissalGestureViews;	// 280 = 0x118
}

+ (id)defaultDimmingColor;	// IMP=0x0010000001130389
- (void).cxx_destruct;	// IMP=0x0000000001132534
@property(copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // @synthesize lowerWindowDismissalGestureViews=_lowerWindowDismissalGestureViews;
@property(nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property(nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x00000000011323ed
- (void)_clearAdditionalEventGestures;	// IMP=0x000000000113239d
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;	// IMP=0x00000000011321fd
- (void)_sendDelegateDimmingViewWasTapped;	// IMP=0x0000000001132173
- (void)_simulateTap;	// IMP=0x0000000001132152
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001132119
- (void)handleSingleTap:(id)arg1;	// IMP=0x00000000011320dd
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000001132054
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000001131c80
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000113146a
- (void)mouseUp:(struct __GSEvent *)arg1;	// IMP=0x0000000001131458
- (void)updateBackgroundColor;	// IMP=0x000000000113112b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001131094
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;	// IMP=0x0000000001130e1e
- (void)display:(_Bool)arg1;	// IMP=0x0000000001130c35
@property(readonly, nonatomic) _Bool displayed;
- (id)_backdropViewsToAnimate;	// IMP=0x00000000011309c3
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;	// IMP=0x0000000001130567
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000113055c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000113051b
- (void)dealloc;	// IMP=0x00000000011304d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011303a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

