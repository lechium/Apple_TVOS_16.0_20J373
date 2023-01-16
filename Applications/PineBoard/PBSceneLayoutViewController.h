//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, PBSceneHandle;
@protocol PBSceneLayoutElement, PBSceneLayoutViewControllerDisplayPublisherDelegate, PBSceneLayoutViewControllerDisplaySceneHandleDelegate;

@interface PBSceneLayoutViewController : UIViewController
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    NSMutableDictionary *_sceneIdentifierToSceneViewControllerDictionary;	// 16 = 0x10
    NSMutableOrderedSet *_mutableSceneLayoutElements;	// 24 = 0x18
    NSMapTable *_appearanceTransitionCompletionBlocks;	// 32 = 0x20
    UIViewController<PBSceneLayoutElement> *_focusedSceneLayoutElement;	// 40 = 0x28
    id <PBSceneLayoutViewControllerDisplaySceneHandleDelegate> _internalSceneHandleDelegate;	// 48 = 0x30
    id <PBSceneLayoutViewControllerDisplayPublisherDelegate> _internalDisplayPublisherDelegate;	// 56 = 0x38
}

+ (id)_displayIdentityToSceneLayoutViewControllerMap;	// IMP=0x00200000001ea11a
+ (id)sceneLayoutViewControllerForMainDisplay;	// IMP=0x00100000001e922d
+ (id)sceneLayoutViewControllerForDisplayIdentity:(id)arg1;	// IMP=0x00100000001e914c
- (void).cxx_destruct;	// IMP=0x00200000001eac6e
@property(nonatomic) __weak id <PBSceneLayoutViewControllerDisplayPublisherDelegate> internalDisplayPublisherDelegate; // @synthesize internalDisplayPublisherDelegate=_internalDisplayPublisherDelegate;
@property(nonatomic) __weak id <PBSceneLayoutViewControllerDisplaySceneHandleDelegate> internalSceneHandleDelegate; // @synthesize internalSceneHandleDelegate=_internalSceneHandleDelegate;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(readonly, nonatomic) UIViewController<PBSceneLayoutElement> *focusedSceneLayoutElement; // @synthesize focusedSceneLayoutElement=_focusedSceneLayoutElement;
@property(readonly, nonatomic) NSMapTable *appearanceTransitionCompletionBlocks; // @synthesize appearanceTransitionCompletionBlocks=_appearanceTransitionCompletionBlocks;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableSceneLayoutElements; // @synthesize mutableSceneLayoutElements=_mutableSceneLayoutElements;
@property(readonly, nonatomic) NSMutableDictionary *sceneIdentifierToSceneViewControllerDictionary; // @synthesize sceneIdentifierToSceneViewControllerDictionary=_sceneIdentifierToSceneViewControllerDictionary;
- (void)setFocusedSceneLayoutElement:(id)arg1;	// IMP=0x00100000001eaa6e
- (void)_addSceneLayoutElement:(id)arg1 animated:(_Bool)arg2 insertSceneLayoutElementBlock:(CDUnknownBlockType)arg3 insertSubviewBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000001ea6f5
- (void)_insertSceneLayoutElement:(id)arg1;	// IMP=0x00100000001ea68d
- (void)_insertSceneLayoutElement:(id)arg1 belowSceneLayoutElement:(id)arg2;	// IMP=0x00100000001ea5b1
- (void)_insertSceneLayoutElement:(id)arg1 aboveSceneLayoutElement:(id)arg2;	// IMP=0x00100000001ea4e6
- (void)_finishRemovingSceneLayoutElement:(id)arg1;	// IMP=0x00100000001ea321
- (void)_finishAddingSceneLayoutElement:(id)arg1;	// IMP=0x00100000001ea181
- (void);	// IMP=0x00100000001ea0db
- (void)_removeSceneLayoutElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001e9d75
- (void)_addSceneLayoutElement:(id)arg1 belowSceneLayoutElement:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001e9b50
- (void)_addSceneLayoutElement:(id)arg1 aboveSceneLayoutElement:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001e992b
- (void)_addSceneLayoutElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001e9465
- (void)removeApplicationLevelSceneLayoutElementForReason:(id)arg1;	// IMP=0x00100000001e9294
- (id)sceneLayoutElementForSceneIdentifier:(id)arg1;	// IMP=0x00100000001e911e
- (id)sceneLayoutElementsOfClass:(Class)arg1;	// IMP=0x00100000001e90a8
- (void)enumerateSceneLayoutElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8fff
- (id)sceneLayoutElementsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8edb
@property(readonly, nonatomic) PBSceneHandle *focusedSceneHandle;
@property(readonly, nonatomic) NSArray *sceneLayoutElements;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001e8e06
- (id)preferredFocusEnvironments;	// IMP=0x00100000001e8d8c
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)debugDescription;	// IMP=0x00100000001e8c10
- (void)setDisplayPublisherDelegate:(id)arg1;	// IMP=0x00100000001e8bb8
- (id)displayPublisherDelegate;	// IMP=0x00100000001e8b9e
- (void)setSceneHandleDelegate:(id)arg1;	// IMP=0x00100000001e8b46
- (id)sceneHandleDelegate;	// IMP=0x00100000001e8b2c
- (void)dealloc;	// IMP=0x00100000001e8aec
- (id)_init;	// IMP=0x00100000001e8a11

@end
