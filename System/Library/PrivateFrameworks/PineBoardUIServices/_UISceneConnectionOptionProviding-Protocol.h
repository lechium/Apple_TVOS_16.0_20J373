//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardUIServices/NSObject-Protocol.h>

@class FBSScene, FBSSceneTransitionContext, NSSet, UISceneSession, _UISceneConnectionOptionsContext;

@protocol _UISceneConnectionOptionProviding <NSObject>

@optional
- (_UISceneConnectionOptionsContext *)_launchOptionsFromActions:(NSSet *)arg1 forFBSScene:(FBSScene *)arg2 uiSceneSession:(UISceneSession *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
@end

