//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIScenePresentationContext, UIView;

@protocol _UISceneLayerHostContainerViewDataSource <NSObject>
- (UIScenePresentationContext *)presentationContextForSceneLayerHostContainerView;
- (UIView *)backgroundView;
- (NSString *)identifier;
@end
