//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSString, UIScenePresentationContext, UIView, _UIScenePresentationView, _UIScenePresenterOwner;
@protocol NSCopying, NSCopying><_UIComparable, UIScenePresentation;

__attribute__((visibility("hidden")))
@interface _UIScenePresenter : NSObject
{
    _UIScenePresenterOwner *_owner;	// 8 = 0x8
    UIScenePresentationContext *_presentationContext;	// 16 = 0x10
    double _initializeTime;	// 24 = 0x18
    id <NSCopying><_UIComparable> _sortContext;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    _Bool _visibilityPropagationEnabled;	// 49 = 0x31
    _UIScenePresentationView *_view;	// 56 = 0x38
    _Bool _enabled;	// 64 = 0x40
    _Bool _hosting;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x00000000006a1e0a
@property(nonatomic, getter=isVisibilityPropagationEnabled) _Bool visibilityPropagationEnabled; // @synthesize visibilityPropagationEnabled=_visibilityPropagationEnabled;
@property(nonatomic, getter=isHosting) _Bool hosting; // @synthesize hosting=_hosting;
@property(nonatomic, getter=isActive) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) UIScenePresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, copy, nonatomic) id <NSCopying> sortContext; // @synthesize sortContext=_sortContext;
@property(nonatomic) double _initializeTime; // @synthesize _initializeTime;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006a1daa
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006a1d5a
- (id)succinctDescriptionBuilder;	// IMP=0x00000000006a1cad
- (id)succinctDescription;	// IMP=0x00000000006a1c5d
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
- (id)newSnapshotPresentationView;	// IMP=0x00000000006a1b50
- (id)newSnapshotContext;	// IMP=0x00000000006a1a2e
- (id)newSnapshot;	// IMP=0x00000000006a199c
- (void)modifyPresentationContext:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a160d
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)invalidate;	// IMP=0x00000000006a14ae
- (void)deactivate;	// IMP=0x00000000006a142c
- (void)activate;	// IMP=0x00000000006a13f6
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (long long)compare:(id)arg1;	// IMP=0x00000000006a1347
- (void)dealloc;	// IMP=0x00000000006a12a0
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3;	// IMP=0x00000000006a1175
- (id)init;	// IMP=0x00000000006a10dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
