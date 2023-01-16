//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap, NSMutableDictionary, NSString, PBDisplayLayoutElementHandle, PBPresentationElementFocusCoordinator, PBSceneLayoutDebugWindow, PBUIDebugWindow, UIWindow;

@interface PBWindowManager : NSObject
{
    PBPresentationElementFocusCoordinator *_focusCoordinator;	// 8 = 0x8
    long long _activeLayoutLevel;	// 16 = 0x10
    PBDisplayLayoutElementHandle *_pipDisplayLayoutElementHandle;	// 24 = 0x18
    BSMutableIntegerMap *_layoutLevelToWindow;	// 32 = 0x20
    BSMutableIntegerMap *_layoutLevelToPresentationElement;	// 40 = 0x28
    NSMutableDictionary *_identifierToDisplayElementAssertions;	// 48 = 0x30
    NSMutableDictionary *_identifierToDisplayTransitionAssertions;	// 56 = 0x38
    PBUIDebugWindow *_uiDebugWindow;	// 64 = 0x40
    PBSceneLayoutDebugWindow *_uiLayoutDebugWindow;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x002000000006f977
+ (id)dependencyDescription;	// IMP=0x001000000006f8e8
- (void).cxx_destruct;	// IMP=0x002000000007368f
@property(readonly, nonatomic) PBSceneLayoutDebugWindow *uiLayoutDebugWindow; // @synthesize uiLayoutDebugWindow=_uiLayoutDebugWindow;
@property(readonly, nonatomic) PBUIDebugWindow *uiDebugWindow; // @synthesize uiDebugWindow=_uiDebugWindow;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayTransitionAssertions; // @synthesize identifierToDisplayTransitionAssertions=_identifierToDisplayTransitionAssertions;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayElementAssertions; // @synthesize identifierToDisplayElementAssertions=_identifierToDisplayElementAssertions;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToPresentationElement; // @synthesize layoutLevelToPresentationElement=_layoutLevelToPresentationElement;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToWindow; // @synthesize layoutLevelToWindow=_layoutLevelToWindow;
@property(readonly, nonatomic) PBDisplayLayoutElementHandle *pipDisplayLayoutElementHandle; // @synthesize pipDisplayLayoutElementHandle=_pipDisplayLayoutElementHandle;
@property(nonatomic) long long activeLayoutLevel; // @synthesize activeLayoutLevel=_activeLayoutLevel;
@property(readonly, nonatomic) PBPresentationElementFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
- (void)_updateUILayoutDebugWindow;	// IMP=0x00100000000734c8
- (void)_updateUIDebugWindow;	// IMP=0x001000000007334b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000073269
- (void)prepareDebugWindows;	// IMP=0x0010000000073148
- (void)_setNeedsRemoteEventDeferringRuleComparisonForWindow:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000073058
- (id)_windowForLayoutLevel:(long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000072302
- (void)_handleDisplayElementUpdate;	// IMP=0x0010000000071e9c
- (void)_removeDisplayLayoutElementWithIdentifier:(id)arg1;	// IMP=0x0010000000071dcf
- (void)_addDisplayLayoutElement:(id)arg1;	// IMP=0x0010000000071b7c
- (id)_displayLayoutElementForOverlayLevel:(long long)arg1;	// IMP=0x0010000000071aa9
- (id)_displayLayoutElementForSceneLayoutElement:(id)arg1;	// IMP=0x0010000000071929
- (void)invalidateSystemUIAtLevel:(long long)arg1;	// IMP=0x001000000007167c
- (void)unhideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000071304
- (void)hideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000070e4b
- (void)dismissSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000007098f
- (void)presentSystemUI:(id)arg1 withContext:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000704ae
- (void)displayLayoutElementHandle:(id)arg1 didUpdateElement:(id)arg2 withReason:(id)arg3;	// IMP=0x00100000000702db
- (void)sceneLayoutViewController:(id)arg1 didEndTransitionForTransitionElement:(id)arg2 forReason:(id)arg3;	// IMP=0x0010000000070252
- (void);	// IMP=0x00100000000700f9
- (void)sceneLayoutViewController:(id)arg1 didRemoveTransitionElement:(id)arg2;	// IMP=0x001000000006ffd1
- (void)sceneLayoutViewController:(id)arg1 didAddTransitionElement:(id)arg2;	// IMP=0x001000000006ff81
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x001000000006fe6d
@property(readonly, nonatomic, getter=isShowingWallpaperOnly) _Bool showingWallpaperOnly;
@property(readonly, nonatomic, getter=isShowingBaseUIOnly) _Bool showingBaseUIOnly;
- (id)windowForLayoutLevel:(long long)arg1;	// IMP=0x001000000006fd6d
- (void)presentSceneLayoutWindow;	// IMP=0x001000000006fcb7
@property(readonly, nonatomic) UIWindow *activeWindow;
- (_Bool)shouldForwardSystemAppEvent;	// IMP=0x001000000006fbf6
- (void)dealloc;	// IMP=0x001000000006faf0
- (id)init;	// IMP=0x001000000006fa05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
