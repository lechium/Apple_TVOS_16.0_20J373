//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFConversation, MISSING_TYPE, NSString, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController
{
    AFConversation *_conversation;	// 8 = 0x8
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000daec
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000dab5
- (MISSING_TYPE *)suggestionsViewIsInTextInputMode: /* Error: Ran out of types for this method. */;	// IMP=0x001000000000da2f
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x001000000000d9d8
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x001000000000d944
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x001000000000d8ed
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x001000000000d86d
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x001000000000d7e3
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000d7dd
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x001000000000d7d7
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x001000000000d7d1
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000d7cb
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000d7c5
- (void)keyboardHeightDidChange;	// IMP=0x001000000000d7bf
- (void)_createGuideController;	// IMP=0x001000000000d6e0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000d65f
- (void)animateOut;	// IMP=0x001000000000d5b2
- (void)showRootGuide;	// IMP=0x001000000000d5ac
- (void)showGuideStart;	// IMP=0x001000000000d5a6
- (_Bool)isShowingGuide;	// IMP=0x001000000000d563
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x001000000000d55d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000d4a2
- (void)hideAcousticIDSpinner;	// IMP=0x001000000000d465
- (void)showAcousticIDSpinner;	// IMP=0x001000000000d428
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x001000000000d2c6
- (void)showEmptyView;	// IMP=0x001000000000d26d
- (_Bool)isShowingUserNudge;	// IMP=0x001000000000d191
- (void)showUserNudge;	// IMP=0x001000000000d10b
- (void)showGreeting;	// IMP=0x001000000000d06c
- (void)showUnavailable;	// IMP=0x001000000000cf2a
- (id)_nudgeHeaderText;	// IMP=0x001000000000ce59
- (id)_initialHeaderText;	// IMP=0x001000000000cd88
- (void)loadView;	// IMP=0x001000000000ccbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

