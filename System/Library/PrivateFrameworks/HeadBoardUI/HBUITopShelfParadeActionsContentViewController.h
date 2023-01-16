//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HBUITopShelfParadeActionsView, NSString;
@protocol HBUITopShelfParadeAction, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeActionsContentViewController : UIViewController
{
    id <HBUITopShelfParadeItem> _paradeItem;	// 8 = 0x8
    id <HBUITopShelfParadeContentViewControllerDelegate> _delegate;	// 16 = 0x10
    HBUITopShelfParadeActionsView *_actionsView;	// 24 = 0x18
    id <HBUITopShelfParadeAction> _primaryAction;	// 32 = 0x20
    id <HBUITopShelfParadeAction> _secondaryAction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000038aa
@property(retain, nonatomic) id <HBUITopShelfParadeAction> secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) id <HBUITopShelfParadeAction> primaryAction; // @synthesize primaryAction=_primaryAction;
@property(readonly, nonatomic) HBUITopShelfParadeActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) __weak id <HBUITopShelfParadeContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
- (void)paradeItemSecondaryActionDidChange:(id)arg1;	// IMP=0x0000000000003674
- (void)paradeItemPrimaryActionDidChange:(id)arg1;	// IMP=0x00000000000034d7
- (id)preferredFocusEnvironments;	// IMP=0x000000000000342e
- (void)_secondaryActionDidChange;	// IMP=0x00000000000031c3
- (void)_primaryActionDidChange;	// IMP=0x0000000000002fc4
- (void)_notifyDelegateDidSelectAction:(id)arg1;	// IMP=0x0000000000002f43
- (void)_secondaryActionButtonSelected;	// IMP=0x0000000000002f26
- (void)_primaryActionButtonSelected;	// IMP=0x0000000000002f09
- (void)viewDidLoad;	// IMP=0x0000000000002b7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
