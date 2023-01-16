//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSettingsIPEntryView, UILabel;
@protocol TVSettingsIPEntryViewControllerDelegate;

@interface TVSettingsIPEntryViewController : UIViewController
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    TVSettingsIPEntryView *_ipEntryView;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    id <TVSettingsIPEntryViewControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d6a8c
@property(nonatomic) __weak id <TVSettingsIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (id)_ipEntryView;	// IMP=0x00100000000d69dd
- (void)ipEntryViewDidFinishEditing:(id)arg1;	// IMP=0x00100000000d6940
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;	// IMP=0x00100000000d67c0
- (id)preferredFocusEnvironments;	// IMP=0x00100000000d671b
- (_Bool)becomeFirstResponder;	// IMP=0x00100000000d66fe
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000d645d
- (void)loadView;	// IMP=0x00100000000d60e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
