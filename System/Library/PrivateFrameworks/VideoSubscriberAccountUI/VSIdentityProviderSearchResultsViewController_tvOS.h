//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel, VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter;
@protocol VSIdentityProviderSearchResultsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderSearchResultsViewController_tvOS : UIViewController
{
    id <VSIdentityProviderSearchResultsViewControllerDelegate> _delegate;	// 8 = 0x8
    VSIdentityProviderTableViewDataSource *_dataSource;	// 16 = 0x10
    VSOnboardingInfoCenter *_onboardingInfoCenter;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000584c6
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // @synthesize onboardingInfoCenter=_onboardingInfoCenter;
@property(retain, nonatomic) VSIdentityProviderTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VSIdentityProviderSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005823c
- (void)viewDidLoad;	// IMP=0x00000000000577e1
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x00000000000576c9
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000000000576ac
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000057558
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000574a5
- (void)_updateFooter;	// IMP=0x00000000000573bc
- (void)_didSelectStorefront:(id)arg1;	// IMP=0x0000000000057332
- (void)_didSelectAdditionalProviders;	// IMP=0x00000000000572c5
- (void)_didSelectProvider:(id)arg1;	// IMP=0x000000000005724b
- (void)dealloc;	// IMP=0x0000000000057215
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000571a6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057137
- (id)init;	// IMP=0x00000000000570c8
- (id)initWithIdentityProviderDataSource:(id)arg1;	// IMP=0x0000000000057004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

