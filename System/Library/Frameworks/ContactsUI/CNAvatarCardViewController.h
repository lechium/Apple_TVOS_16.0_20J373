//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsViewController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;
@protocol CNAvatarCardActionList, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    _Bool _hasBackgroundColor;	// 9 = 0x9
    _Bool _hasHeader;	// 10 = 0xa
    _Bool _headerOnTop;	// 11 = 0xb
    CNAvatarCardController *_cardController;	// 16 = 0x10
    id <CNAvatarCardViewControllerDelegate> _delegate;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    UIView *_headerContainerView;	// 40 = 0x28
    CNAvatarCardActionsView *_legacyContactActionsView;	// 48 = 0x30
    CNContactActionsViewController *_actionsViewController;	// 56 = 0x38
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;	// 64 = 0x40
    UIView *_effectView;	// 72 = 0x48
    NSArray *_verticalConstraints;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000005f0f8
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // @synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint;
@property(retain, nonatomic) CNContactActionsViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // @synthesize legacyContactActionsView=_legacyContactActionsView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic) _Bool hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x000000000005ef25
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000000005e846
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005e832
- (id)viewControllerForCardActionsView:(id)arg1;	// IMP=0x000000000005e769
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;	// IMP=0x000000000005e710
- (void)cardActionsView:(id)arg1 willShowActions:(id)arg2;	// IMP=0x000000000005e666
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x000000000005e58a
- (void)refreshActions;	// IMP=0x000000000005e54d
- (void)_updatePreferredSize;	// IMP=0x000000000005e3f6
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000005e34c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005e309
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005e29f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005e1ea
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005e161
- (void)updateActionsControllerHeightConstraint;	// IMP=0x000000000005e0d6
- (void)didAddActionsViewToHierarchy;	// IMP=0x000000000005de51
- (void)willAddActionsViewToHierarchy;	// IMP=0x000000000005ddd5
@property(readonly, nonatomic) id <CNAvatarCardActionList> actionList;
- (id)actionsView;	// IMP=0x000000000005dccd
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (struct CGRect)_photoFrameInView:(id)arg1;	// IMP=0x000000000005da77
@property(nonatomic) _Bool dismissesBeforePerforming;
@property(nonatomic) _Bool actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000005d866
- (void)updateViewConstraints;	// IMP=0x000000000005d5c0
- (void)viewDidLoad;	// IMP=0x000000000005cc00
- (id)initWithContacts:(id)arg1;	// IMP=0x000000000005c976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;

@end

