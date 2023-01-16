//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVSMAnalyticsElementInfo, UIViewController;
@protocol TVSMModuleContentViewController, TVSMModuleDelegate, TVSMModuleExpandedContentViewController, TVSMModuleOverlayContentViewController;

@interface TVSMPeoplePickerAddUserModule : NSObject
{
    id <TVSMModuleDelegate> _delegate;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    UIViewController<TVSMModuleContentViewController> *_contentViewController;	// 40 = 0x28
}

+ (id)availableStyles;	// IMP=0x0010000000003a30
- (void).cxx_destruct;	// IMP=0x0000000000003f70
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <TVSMModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contentModuleViewControllerDidTriggerAction:(id)arg1;	// IMP=0x0000000000003da0
@property(readonly, nonatomic) TVSMAnalyticsElementInfo *analyticsElementInfo;
@property(readonly, nonatomic) NSString *analyticsActionType;
@property(readonly, nonatomic) UIViewController<TVSMModuleContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) NSString *accessibilityIdentifierSuffix;
- (id)init;	// IMP=0x0000000000003a50

// Remaining properties
@property(readonly, nonatomic) NSArray *childModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController<TVSMModuleExpandedContentViewController> *expandedContentViewController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIViewController<TVSMModuleOverlayContentViewController> *overlayContentViewController;
@property(readonly) Class superclass;

@end
