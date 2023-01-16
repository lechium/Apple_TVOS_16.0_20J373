//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAtomicSignal, FBScene, NSString, PBUIDebugContainerView;

@interface PBUIDebugRootViewController : UIViewController
{
    BSAtomicSignal *_invalidationSignal;	// 8 = 0x8
    FBScene *_trackedCurrentApplicationScene;	// 16 = 0x10
}

+ (_Bool)_showExternalControlDebug;	// IMP=0x00200000001efbfa
+ (_Bool)_showUIDebug;	// IMP=0x00100000001efba8
- (void).cxx_destruct;	// IMP=0x00200000001efc6e
@property(readonly, nonatomic) FBScene *trackedCurrentApplicationScene; // @synthesize trackedCurrentApplicationScene=_trackedCurrentApplicationScene;
@property(readonly, nonatomic) BSAtomicSignal *invalidationSignal; // @synthesize invalidationSignal=_invalidationSignal;
- (void)_updateVisibilityAndContent;	// IMP=0x00100000001efb61
- (void)_updateVisibility;	// IMP=0x00100000001ef98e
- (void)_updateExternalControlInfo;	// IMP=0x00100000001ef772
- (void)_updateSceneInfo;	// IMP=0x00100000001ef5c8
- (void)_updateLayoutLevelsInfo;	// IMP=0x00100000001ef4bf
- (void)systemGestureManager:(id)arg1 didActivateHandleOfSystemGesture:(unsigned long long)arg2;	// IMP=0x00100000001ef448
- (void)systemGestureManager:(id)arg1 didInvokeHandleOfSystemGesture:(unsigned long long)arg2 deferringFrom:(unsigned long long)arg3;	// IMP=0x00100000001ef3c9
- (void)systemGestureManager:(id)arg1 didInvokeHandleOfSystemGesture:(unsigned long long)arg2;	// IMP=0x00100000001ef352
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x00100000001ef33f
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x00100000001ef230
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001ef163
- (void)invalidate;	// IMP=0x00100000001eef5e
- (void)viewDidLoad;	// IMP=0x00100000001eef1d
- (void)loadView;	// IMP=0x00100000001eeee3
- (void)dealloc;	// IMP=0x00100000001eed49
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001eea97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) PBUIDebugContainerView *view; // @dynamic view;

@end
