//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, VSActivityIndicatorViewController, VSAutoAuthenticationView, VSAutoAuthenticationViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_tvOS : UIViewController <VSAutoAuthenticationViewDelegate>
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSAutoAuthenticationViewModel *_viewModel;	// 24 = 0x18
    VSAutoAuthenticationView *_autoAuthenticationView;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    VSActivityIndicatorViewController *_signingInIndicatorViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001bc9a
@property(retain, nonatomic) VSActivityIndicatorViewController *signingInIndicatorViewController; // @synthesize signingInIndicatorViewController=_signingInIndicatorViewController;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSAutoAuthenticationView *autoAuthenticationView; // @synthesize autoAuthenticationView=_autoAuthenticationView;
@property(retain, nonatomic) VSAutoAuthenticationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)_showAutoAuthenticationView;	// IMP=0x000000000001bb8e
- (void)_hideAutoAuthenticationView;	// IMP=0x000000000001bb4c
- (void)_hideSigningInIndicatorViewController;	// IMP=0x000000000001baac
- (void)_showSigningInIndicatorViewController;	// IMP=0x000000000001b894
- (void)_presentError:(id)arg1;	// IMP=0x000000000001b7fa
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x000000000001b7ae
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000001b735
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x000000000001b6b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001b1cd
- (void)autoAuthenticationViewDidSelectManualSignIn:(id)arg1;	// IMP=0x000000000001b190
- (void)autoAuthenticationViewDidSelectSignIn:(id)arg1;	// IMP=0x000000000001b14e
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001b00a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001afd1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001af98
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001af5f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001af26
- (void)viewDidLoad;	// IMP=0x000000000001ac13
- (void)dealloc;	// IMP=0x000000000001abca
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001ab30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
