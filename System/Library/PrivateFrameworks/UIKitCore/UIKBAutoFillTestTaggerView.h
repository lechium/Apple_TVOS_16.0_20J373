//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIBarButtonItem, UIKBAutoFillTestTagRequest, UILabel, UIPickerView, UIToolbar, UIVisualEffectView;
@protocol UIKBAutoFillTestTaggerViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTaggerView : UIView
{
    UIKBAutoFillTestTagRequest *_currentRequest;	// 8 = 0x8
    UIPickerView *_pickerView;	// 16 = 0x10
    UIToolbar *_toolbar;	// 24 = 0x18
    UIBarButtonItem *_nextBarButtoItem;	// 32 = 0x20
    UIBarButtonItem *_previousBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_doneBarButtonItem;	// 48 = 0x30
    UIVisualEffectView *_visualEffectView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    id <UIKBAutoFillTestTaggerViewDelegate> _delegate;	// 72 = 0x48
    NSArray *_tagRequests;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000007ff321
@property(copy, nonatomic) NSArray *tagRequests; // @synthesize tagRequests=_tagRequests;
@property(nonatomic) __weak id <UIKBAutoFillTestTaggerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doneBarButtonAction:(id)arg1;	// IMP=0x00000000007ff28c
- (void)_previousBarButtonAction:(id)arg1;	// IMP=0x00000000007ff218
- (void)_nextBarButtonAction:(id)arg1;	// IMP=0x00000000007ff184
- (void)_updateTitle;	// IMP=0x00000000007ff113
- (void)_updateToolbarButtons;	// IMP=0x00000000007fefeb
- (void)_performTagRequest:(id)arg1;	// IMP=0x00000000007fedd3
- (id)_textFieldTypes;	// IMP=0x00000000007fed99
- (id)_formTypes;	// IMP=0x00000000007fed5f
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000007febee
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x00000000007febe0
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000000007fe9ca
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000007fe94d
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000007fe942
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007fd9b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

