//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLayoutFeedbackLoopDebugger : NSObject
{
    long long _debuggingState;	// 8 = 0x8
    UIView *_rootView;	// 16 = 0x10
    NSMutableSet *_viewsWithChangingGeometry;	// 24 = 0x18
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;	// 32 = 0x20
    NSMutableSet *_turningPointViews;	// 40 = 0x28
    NSMutableSet *_involvedViews;	// 48 = 0x30
    NSMutableArray *_layoutList;	// 56 = 0x38
    NSArray *_reducedLayoutList;	// 64 = 0x40
    _Bool _rootViewConfirmed;	// 72 = 0x48
    _Bool _feedbackLoopConfirmed;	// 73 = 0x49
    long long _rootViewLayoutCount;	// 80 = 0x50
    UIView *_currentLayoutView;	// 88 = 0x58
}

+ (id)layoutFeedbackLoopDebugger;	// IMP=0x00600000011ce22b
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;	// IMP=0x00600000011d108e
+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;	// IMP=0x00600000011d1046
- (void).cxx_destruct;	// IMP=0x00000000011d0fdc
@property(retain, nonatomic) UIView *currentLayoutView; // @synthesize currentLayoutView=_currentLayoutView;
- (id)topLevelViewHierarchyTrace;	// IMP=0x00000000011d0bed
- (id)description;	// IMP=0x00000000011cfec7
- (void)dumpInfoWithInfoCollectionSuccess:(_Bool)arg1;	// IMP=0x00000000011cfabf
- (void)didUpdateLayoutMargins:(struct UIEdgeInsets)arg1 ofView:(id)arg2;	// IMP=0x00000000011cf9e4
- (void)didUpdateSafeAreaInsets:(struct UIEdgeInsets)arg1 ofView:(id)arg2;	// IMP=0x00000000011cf909
- (void)willSendSetAnchorPoint:(struct CGPoint)arg1 toLayerOfView:(id)arg2;	// IMP=0x00000000011cf833
- (void)willSendSetFrame:(struct CGRect)arg1 toLayerOfView:(id)arg2;	// IMP=0x00000000011cf752
- (void)willSendSetPosition:(struct CGPoint)arg1 toLayerOfView:(id)arg2;	// IMP=0x00000000011cf680
- (void)willSendSetBounds:(struct CGRect)arg1 toLayerOfView:(id)arg2;	// IMP=0x00000000011cf59f
- (void)willChangeGeometryForLayerOfView:(id)arg1;	// IMP=0x00000000011cf4a8
- (id)viewsWithChangingGeometryCreateIfNecessary;	// IMP=0x00000000011cf46d
- (void)didSendSetNeedsLayoutToLayerOfView:(id)arg1;	// IMP=0x00000000011cf45b
- (void)willSendSetNeedsLayoutToLayerOfView:(id)arg1;	// IMP=0x00000000011cf449
- (void)_recordSetNeedsLayoutToLayerOfView:(id)arg1;	// IMP=0x00000000011cf0e4
- (id)turningPointViewsCreateIfNecessary;	// IMP=0x00000000011cf0a9
- (void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3;	// IMP=0x00000000011cefdd
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;	// IMP=0x00000000011cefa2
- (void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;	// IMP=0x00000000011cef84
- (void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;	// IMP=0x00000000011cef5c
- (void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;	// IMP=0x00000000011cef3e
- (void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;	// IMP=0x00000000011cef16
- (void)didSendLayoutSubviewsToView:(id)arg1;	// IMP=0x00000000011ceef8
- (void)willSendLayoutSubviewsToView:(id)arg1;	// IMP=0x00000000011ce588
- (void)willExitLayoutSublayersOfLayerForView:(id)arg1;	// IMP=0x00000000011ce525
- (void)didEnterLayoutSublayersOfLayerForView:(id)arg1;	// IMP=0x00000000011ce4c9

@end

