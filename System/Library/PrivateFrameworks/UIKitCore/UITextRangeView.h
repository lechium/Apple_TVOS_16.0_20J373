//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIResponder, UISelectionGrabber, UISelectionGrabberCustomPath, UITextRangeAdjustmentInteraction, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;	// 176 = 0xb0
    UIResponder<UITextInput> *m_container;	// 184 = 0xb8
    int m_mode;	// 192 = 0xc0
    NSArray *m_rects;	// 200 = 0xc8
    NSMutableArray *m_rectViews;	// 208 = 0xd0
    UITouch *m_activeTouch;	// 216 = 0xd8
    struct CGRect m_startEdge;	// 224 = 0xe0
    struct CGRect m_endEdge;	// 256 = 0x100
    UIView *m_rectContainerView;	// 288 = 0x120
    UISelectionGrabber *m_startGrabber;	// 296 = 0x128
    UISelectionGrabber *m_endGrabber;	// 304 = 0x130
    _Bool m_animateUpdate;	// 312 = 0x138
    _Bool m_commandsWereShowing;	// 313 = 0x139
    _Bool m_willBeginMagnifying;	// 314 = 0x13a
    _Bool m_inGesture;	// 315 = 0x13b
    _Bool m_magnifying;	// 316 = 0x13c
    _Bool m_scrolling;	// 317 = 0x13d
    _Bool m_scaling;	// 318 = 0x13e
    _Bool m_rotating;	// 319 = 0x13f
    _Bool m_inputViewIsChanging;	// 320 = 0x140
    _Bool m_isClearingRange;	// 321 = 0x141
    _Bool m_shouldStayVisible;	// 322 = 0x142
    UITextRangeAdjustmentInteraction *_adjustmentInteraction;	// 328 = 0x148
    UISelectionGrabberCustomPath *_startCustomPath;	// 336 = 0x150
    UISelectionGrabberCustomPath *_endCustomPath;	// 344 = 0x158
    struct CGPoint m_basePoint;	// 352 = 0x160
    struct CGPoint m_extentPoint;	// 368 = 0x170
    struct CGPoint m_initialExtentPoint;	// 384 = 0x180
    struct CGPoint _activeTouchPoint;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000f33194
@property(retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath; // @synthesize endCustomPath=_endCustomPath;
@property(retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath; // @synthesize startCustomPath=_startCustomPath;
@property(retain, nonatomic) UITextRangeAdjustmentInteraction *adjustmentInteraction; // @synthesize adjustmentInteraction=_adjustmentInteraction;
@property(readonly, nonatomic) struct CGPoint activeTouchPoint; // @synthesize activeTouchPoint=_activeTouchPoint;
@property(nonatomic) _Bool shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property(nonatomic) _Bool isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property(nonatomic) _Bool inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) _Bool rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) _Bool scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) _Bool inGesture; // @synthesize inGesture=m_inGesture;
@property(nonatomic) _Bool magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) _Bool willBeginMagnifying; // @synthesize willBeginMagnifying=m_willBeginMagnifying;
@property(nonatomic) _Bool commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property(nonatomic) _Bool animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property(readonly, nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property(readonly, nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
@property(readonly, nonatomic) _Bool areSelectionRectsVisible;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f32c7d
- (struct CGPoint)magnifierPoint;	// IMP=0x0000000000f32a5a
- (void)_cancelGrabberTransitionOutAnimations:(id)arg1;	// IMP=0x0000000000f3296b
- (void)updateGrabbers;	// IMP=0x0000000000f317ab
- (_Bool)shouldShowGrabbers;	// IMP=0x0000000000f31793
- (_Bool)shouldHitTestGrabbers;	// IMP=0x0000000000f31759
- (_Bool)_endIsHorizontal;	// IMP=0x0000000000f31702
- (_Bool)_startIsHorizontal;	// IMP=0x0000000000f316ab
- (void)updateRectViews;	// IMP=0x0000000000f30936
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000f308b2
- (void)beginMagnifying;	// IMP=0x0000000000f3084d
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;	// IMP=0x0000000000f305f6
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x0000000000f30077
- (void)animateHighlighterExpanderAnimation;	// IMP=0x0000000000f2fa15
@property(readonly, nonatomic) _Bool autoscrolled;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;	// IMP=0x0000000000f2f990
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x0000000000f2f950
- (void)cancelDelayedActions;	// IMP=0x0000000000f2f934
- (void)_updateGrabbersVisibility:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000f2f7f5
- (void)stopAnimating;	// IMP=0x0000000000f2f770
- (void)startAnimating;	// IMP=0x0000000000f2f6e5
- (void)updateDots;	// IMP=0x0000000000f2f608
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x0000000000f2f358
- (void)inputViewDidChange;	// IMP=0x0000000000f2f328
- (void)inputViewWillChange;	// IMP=0x0000000000f2f2f5
- (void)didRotate;	// IMP=0x0000000000f2f2b9
- (void)willRotate;	// IMP=0x0000000000f2f286
- (void)scaleDidChange;	// IMP=0x0000000000f2f256
- (void)scaleWillChange;	// IMP=0x0000000000f2f223
- (void)didScroll;	// IMP=0x0000000000f2f1f3
- (void)willScroll;	// IMP=0x0000000000f2f1c0
- (void)doneMagnifying;	// IMP=0x0000000000f2f119
- (void)prepareForMagnification;	// IMP=0x0000000000f2f075
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x0000000000f2f058
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f2ef3c
@property(nonatomic) _Bool baseIsStart;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f2eea4
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (void)updateEdges;	// IMP=0x0000000000f2e220
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)updateAfterEffectiveModeChange;	// IMP=0x0000000000f2e15b
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x0000000000f2e0d1
- (struct CGRect)caretRectForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x0000000000f2e029
- (void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;	// IMP=0x0000000000f2df8d
- (void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000f2def3
- (void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(struct CGPoint)arg2 withTouchPoint:(struct CGPoint)arg3;	// IMP=0x0000000000f2de64
- (void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000f2dd03
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f2db69
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;	// IMP=0x0000000000f2db57
- (void)setMagnifierOrientation;	// IMP=0x0000000000f2dad9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f2da10
- (struct CGRect)_endEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x0000000000f2d981
- (struct CGRect)_startEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x0000000000f2d8f2
- (struct CGRect)_edgeHitRectForEdgeRect:(struct CGRect)arg1 grabber:(id)arg2 precision:(unsigned long long)arg3;	// IMP=0x0000000000f2d62c
- (void)removeFromSuperview;	// IMP=0x0000000000f2d4e4
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;	// IMP=0x0000000000f2d2d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

