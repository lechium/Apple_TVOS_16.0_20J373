//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/UISDisplayContext.h>

@class FBSDisplayConfiguration, NSString;
@protocol _UIDisplayInfoShape;

@interface UISDisplayContext (ForPreviewsOnly)
+ (id)_loadedInitialContext;	// IMP=0x001000000020e505
@property(readonly, nonatomic) double systemMinimumMargin;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;

// Remaining properties
@property(readonly, nonatomic) unsigned long long artworkSubtype;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) id <_UIDisplayInfoShape> exclusionArea; // @dynamic exclusionArea;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
