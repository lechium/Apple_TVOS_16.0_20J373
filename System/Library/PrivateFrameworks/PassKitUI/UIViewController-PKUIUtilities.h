//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PKUIUtilities)
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00600000000e9d12
- (id)pkui_frontMostViewController;	// IMP=0x00600000000e9c3d
- (void)_pk_presentViewController:(id)arg1 animated:(_Bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x006000000012ae51
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x006000000012ae24
- (void)pk_presentViewController:(id)arg1 animated:(_Bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x006000000012adfc
- (void)pk_paymentSetupPreflight:(CDUnknownBlockType)arg1;	// IMP=0x006000000012ad90
- (void)pk_paymentSetupSetHideSetupLaterButton:(_Bool)arg1;	// IMP=0x006000000012ad4e
- (void)presentModalViewController:(id)arg1 withPaymentSetupContext:(long long)arg2;	// IMP=0x006000000017add3
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00600000001b95db
- (id)pk_childrenForAppearance;	// IMP=0x00600000001b94f2
@end

