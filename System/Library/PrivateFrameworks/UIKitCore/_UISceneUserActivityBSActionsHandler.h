//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UICanvasUserActivityManager;

__attribute__((visibility("hidden")))
@interface _UISceneUserActivityBSActionsHandler : NSObject
{
    _UICanvasUserActivityManager *_canvasUserActivityManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b96672
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x0000000000b961df
- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000b95c49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

