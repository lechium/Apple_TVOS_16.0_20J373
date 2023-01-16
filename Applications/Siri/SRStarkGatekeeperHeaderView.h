//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, SRCarPlayHeaderButton, SRStarkCancelButton, SRUIFCachedPreferences, UIFocusContainerGuide;
@protocol SRStarkGatekeeperHeaderViewDelegate, UIFocusItem;

@interface SRStarkGatekeeperHeaderView : UIView
{
    id <UIFocusItem> userFocusedItem;	// 8 = 0x8
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 16 = 0x10
    id <SRStarkGatekeeperHeaderViewDelegate> _delegate;	// 24 = 0x18
    UIFocusContainerGuide *_gatekeeperHeaderViewFocusContainerGuide;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    SRStarkCancelButton *_cancelButton;	// 48 = 0x30
    SRCarPlayHeaderButton *_trailingButton;	// 56 = 0x38
}

+ (Class)_carPlayHeaderButtonClassForHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0020000000014f6c
+ (unsigned long long)_carPlayHeaderButtonTypeForDirectActionEvent:(long long)arg1;	// IMP=0x0010000000014f50
+ (unsigned long long)_carPlayHeaderButtonTypeForAceObject:(id)arg1;	// IMP=0x0010000000014d69
+ (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;	// IMP=0x0010000000014330
+ (id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00100000000136a2
+ (id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000001355e
- (void).cxx_destruct;	// IMP=0x002000000001515c
@property(readonly, nonatomic) SRCarPlayHeaderButton *trailingButton; // @synthesize trailingButton=_trailingButton;
- (id)cancelButton;	// IMP=0x001000000001513a
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *gatekeeperHeaderViewFocusContainerGuide; // @synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide;
@property(nonatomic) __weak id <SRStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem;
- (id)accessibilityIdentifier;	// IMP=0x0010000000015079
- (void)_announceButtonTapped:(id)arg1;	// IMP=0x0010000000014f9a
- (id)_trailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0010000000014d61
- (void)_updateTrailingButton:(id)arg1;	// IMP=0x0010000000014ccd
- (void)_updateTrailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0010000000014c81
- (void)_updateTrailingButtonForDirectActionEvent:(long long)arg1;	// IMP=0x0010000000014bca
- (void)_updateTrailingButtonForAceObject:(id)arg1;	// IMP=0x0010000000014afe
- (void)_updateAppBundleIdentifier:(id)arg1;	// IMP=0x0010000000014aa3
- (void)cachedPreferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x0010000000014a9d
- (_Bool)viewContainsFocusItem:(id)arg1;	// IMP=0x00100000000149d1
- (id)updatedFocusItemForCurrentFocusItem:(id)arg1;	// IMP=0x00100000000148a6
- (id)preferredFocusEnvironments;	// IMP=0x00100000000147d1
- (void)layoutSubviews;	// IMP=0x00100000000143da
- (void)_logGatekeeperDismissedManually;	// IMP=0x00100000000141fa
- (void)logGatekeeperAppeared;	// IMP=0x00100000000140c4
- (void)_dismissalButtonTapped:(id)arg1;	// IMP=0x0010000000013e0c
@property(readonly, nonatomic) SRUIFCachedPreferences *cachedPreferences;
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013d56
- (id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013cab
- (id)_initWithAppBundleIdentifier:(id)arg1 directActionEvent:(long long)arg2 aceObject:(id)arg3 currentTurnContext:(id)arg4;	// IMP=0x0010000000013a41
- (void)updateForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000001399c
- (void)updateForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
