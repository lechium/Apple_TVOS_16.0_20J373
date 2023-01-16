//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIPanGestureRecognizer, UIView, _UIDynamicAnimationGroup;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplaneCoordinator : NSObject
{
    double _prevResizingOffset;	// 8 = 0x8
    double _resizingOffset;	// 16 = 0x10
    double _foregroundOpacity;	// 24 = 0x18
    _UIDynamicAnimationGroup *_resizingAnimationGroup;	// 32 = 0x20
    UIView *_grabber;	// 40 = 0x28
    UIColor *_grabberColor;	// 48 = 0x30
    _Bool _isResizing;	// 56 = 0x38
    id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;	// 64 = 0x40
    UIPanGestureRecognizer *_gestureRecognizer;	// 72 = 0x48
}

+ (double)savedResizingOffset;	// IMP=0x0010000000f92468
- (void).cxx_destruct;	// IMP=0x0000000000f931e3
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property(nonatomic) __weak id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(_Bool)arg2;	// IMP=0x0000000000f93136
- (void)handleResizeGesture:(id)arg1;	// IMP=0x0000000000f92aa3
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f92970
- (void)stopResizing;	// IMP=0x0000000000f9294d
- (void)uninstallGestureRecognizers;	// IMP=0x0000000000f928d7
- (void)updateGestureRecognizers;	// IMP=0x0000000000f92769
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000f9256e
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000f924f1
@property(readonly, nonatomic) _Bool isResizing;
- (void)saveResizingStopIndex:(unsigned long long)arg1;	// IMP=0x0000000000f9245b
- (void)reloadResizingOffset;	// IMP=0x0000000000f9242c
- (void)updateGrabber;	// IMP=0x0000000000f92148
- (id)init;	// IMP=0x0000000000f92106

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
