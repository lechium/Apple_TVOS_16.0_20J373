//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI38MultiAppInstallAppSelectViewController : UIViewController
{
    MISSING_TYPE *localizationManager;	// 8 = 0x8
    MISSING_TYPE *appsTableView;	// 16 = 0x10
    MISSING_TYPE *topHorizontalStackView;	// 24 = 0x18
    MISSING_TYPE *actionVerticalStackView;	// 32 = 0x20
    MISSING_TYPE *appsDownloadInfoLabel;	// 40 = 0x28
    MISSING_TYPE *installSelectedAppsButton;	// 48 = 0x30
    MISSING_TYPE *cancelButton;	// 56 = 0x38
    MISSING_TYPE *tableFocusGuide;	// 64 = 0x40
    MISSING_TYPE *buttonsFocusGuide;	// 72 = 0x48
    MISSING_TYPE *startFocusOnAppList;	// 80 = 0x50
    MISSING_TYPE *shouldShowSupportedAppsDisclaimerText;	// 81 = 0x51
    MISSING_TYPE *selectedAppsCompletion;	// 88 = 0x58
    MISSING_TYPE *appsList;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000592c20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000592bc0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000592930
- (void)viewWillLayoutSubviews;	// IMP=0x00000000005925f0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000590000
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000058ff00
- (void)didTapCancel;	// IMP=0x000000000058fd40
- (void)didTapInstallSelectedApps;	// IMP=0x000000000058fc70
- (void)viewDidLoad;	// IMP=0x000000000058fc40

@end
