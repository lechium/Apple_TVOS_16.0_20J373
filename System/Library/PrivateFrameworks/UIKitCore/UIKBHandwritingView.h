//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class NSMutableArray, NSMutableSet, NSString, UIBezierPath, UIDelayedAction, UIKBHandwritingBezierPathPointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingInputSpeedModel, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView, UIView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView
{
    _Bool _initialPointPosted;	// 8 = 0x8
    double _inkWidth;	// 16 = 0x10
    struct CGColor *_inkColor;	// 24 = 0x18
    struct CGImage *_inkMask;	// 32 = 0x20
    NSMutableArray *_interpolatedPoints;	// 40 = 0x28
    UIBezierPath *_currentPath;	// 48 = 0x30
    NSMutableArray *_currentPoints;	// 56 = 0x38
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;	// 64 = 0x40
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;	// 72 = 0x48
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;	// 80 = 0x50
    UIKBHandwritingBezierPathPointFIFO *_bezierPathFIFO;	// 88 = 0x58
    UIKBHandwritingStrokeView *_strokeView;	// 96 = 0x60
    UIView *_snapshotView;	// 104 = 0x68
    NSMutableSet *_activeTouches;	// 112 = 0x70
    double _pageOffset;	// 120 = 0x78
    UIDelayedAction *_nextPageTimer;	// 128 = 0x80
    UIKBHandwritingInputSpeedModel *_inputSpeedModel;	// 136 = 0x88
    CDStruct_23d8ee2f _previousPoint;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000008c9ddc
@property(retain, nonatomic) UIKBHandwritingInputSpeedModel *inputSpeedModel; // @synthesize inputSpeedModel=_inputSpeedModel;
@property(retain, nonatomic) UIDelayedAction *nextPageTimer; // @synthesize nextPageTimer=_nextPageTimer;
@property(nonatomic) double pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) CDStruct_19cde01f previousPoint; // @synthesize previousPoint=_previousPoint;
@property(nonatomic) _Bool initialPointPosted; // @synthesize initialPointPosted=_initialPointPosted;
@property(retain, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;
@property(retain, nonatomic) UIKBHandwritingBezierPathPointFIFO *bezierPathFIFO; // @synthesize bezierPathFIFO=_bezierPathFIFO;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(retain, nonatomic) NSMutableArray *currentPoints; // @synthesize currentPoints=_currentPoints;
@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSMutableArray *interpolatedPoints; // @synthesize interpolatedPoints=_interpolatedPoints;
@property(nonatomic) struct CGImage *inkMask; // @synthesize inkMask=_inkMask;
@property(nonatomic) struct CGColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) double inkWidth; // @synthesize inkWidth=_inkWidth;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c982b
- (_Bool)cancelTouchTracking;	// IMP=0x00000000008c96a3
- (void)clearTouches;	// IMP=0x00000000008c9652
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1;	// IMP=0x00000000008c9376
- (unsigned long long)numberOfStrokes;	// IMP=0x00000000008c92e5
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c921b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c9184
- (_Bool)endStrokeWithTouches:(id)arg1 event:(id)arg2;	// IMP=0x00000000008c8a82
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c857a
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c8375
- (void)addInkPoint:(struct CGPoint)arg1 value:(double)arg2;	// IMP=0x00000000008c822f
- (void)send;	// IMP=0x00000000008c808d
- (void)deleteStrokesAtIndexes:(id)arg1;	// IMP=0x00000000008c764c
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x00000000008c734c
- (void)updateInkColor;	// IMP=0x00000000008c71d8
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000008c71a8
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000008c7056
- (_Bool)shouldCache;	// IMP=0x00000000008c704e
- (void)startFadeOutAnimation;	// IMP=0x00000000008c6db7
- (void)didMoveToWindow;	// IMP=0x00000000008c6d49
- (void)pageOffsetTimerFired;	// IMP=0x00000000008c6904
- (void)cancelPageOffsetTimer;	// IMP=0x00000000008c6865
- (void)touchPageOffsetTimer;	// IMP=0x00000000008c6454
- (void)log;	// IMP=0x00000000008c5f4b
- (void)dealloc;	// IMP=0x00000000008c5ec0
- (void)layoutSubviews;	// IMP=0x00000000008c5cd8
- (void)displayLayer:(id)arg1;	// IMP=0x00000000008c5c67
- (id)layerForRenderFlags:(long long)arg1;	// IMP=0x00000000008c58d7
- (void)recreateInkMaskIfNeeded;	// IMP=0x00000000008c4cf1
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000008c3aa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
