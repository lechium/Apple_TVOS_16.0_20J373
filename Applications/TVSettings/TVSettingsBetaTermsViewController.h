//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITapGestureRecognizer;
@protocol TVSettingsBetaTermsViewControllerDelegate;

@interface TVSettingsBetaTermsViewController : UIViewController
{
    _Bool _termTextVisible;	// 8 = 0x8
    id <TVSettingsBetaTermsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_terms;	// 24 = 0x18
    UIViewController *_currentChildViewController;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    unsigned long long _currentTermIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000017a93
@property(nonatomic) _Bool termTextVisible; // @synthesize termTextVisible=_termTextVisible;
@property(nonatomic) unsigned long long currentTermIndex; // @synthesize currentTermIndex=_currentTermIndex;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property(copy, nonatomic) NSArray *terms; // @synthesize terms=_terms;
@property(nonatomic) __weak id <TVSettingsBetaTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_transitionToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000175bb
- (void)_completeWithResult:(_Bool)arg1;	// IMP=0x0010000000017512
- (void)_showTermText;	// IMP=0x001000000001750c
- (void)_showButtons;	// IMP=0x0010000000017506
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00100000000174be
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x001000000001744e
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0010000000017423
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00100000000173f5
- (id)preferredFocusEnvironments;	// IMP=0x00100000000173a5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000172f8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001722b
- (void)viewDidLoad;	// IMP=0x00100000000171ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

