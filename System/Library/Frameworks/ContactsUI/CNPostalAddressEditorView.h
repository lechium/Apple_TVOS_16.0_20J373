//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CNMutablePostalAddress, CNPostalAddress, CNPostalAddressEditorTableView, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorView : UIControl
{
    CNMutablePostalAddress *_address;	// 8 = 0x8
    NSDictionary *_valueTextAttributes;	// 16 = 0x10
    id <CNPresenterDelegate> _delegate;	// 24 = 0x18
    CNPostalAddressEditorTableView *_tableView;	// 32 = 0x20
    NSDictionary *_addressFormats;	// 40 = 0x28
    NSArray *_cellsLayout;	// 48 = 0x30
    NSMutableDictionary *_textFields;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000076455
@property(copy, nonatomic) NSMutableDictionary *textFields; // @synthesize textFields=_textFields;
@property(copy, nonatomic) NSArray *cellsLayout; // @synthesize cellsLayout=_cellsLayout;
@property(copy, nonatomic) NSDictionary *addressFormats; // @synthesize addressFormats=_addressFormats;
@property(retain, nonatomic) CNPostalAddressEditorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_cellsLayoutForCountryCode:(id)arg1;	// IMP=0x0000000000075d0c
- (id)_normalizeCountryCodeToISO:(id)arg1;	// IMP=0x0000000000075c1d
- (id)_countryCode;	// IMP=0x0000000000075b9d
- (id)_addressPlaceholderForKey:(id)arg1;	// IMP=0x0000000000075a2a
- (id)_addressValueForKey:(id)arg1;	// IMP=0x00000000000758bd
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000756e8
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000075654
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000000754cb
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000007535d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000074bf4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000074be2
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;	// IMP=0x0000000000074acb
- (void)countryPickerDidCancel:(id)arg1;	// IMP=0x0000000000074a56
- (void)layoutMarginsDidChange;	// IMP=0x000000000007474e
- (void)textFieldChanged:(id)arg1;	// IMP=0x00000000000744eb
- (void)_invalidateCellsLayout;	// IMP=0x00000000000743be
@property(copy, nonatomic) CNPostalAddress *address;
@property(copy, nonatomic) UIColor *separatorColor;
@property(copy, nonatomic) NSDictionary *ab_textAttributes;
@property(copy, nonatomic) NSString *ab_text;
@property(readonly, nonatomic) long long lineCount;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000073eb2
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000073de2
- (_Bool)isFirstResponder;	// IMP=0x0000000000073c81
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000073bfe
- (void)dealloc;	// IMP=0x0000000000073b89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000737cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

