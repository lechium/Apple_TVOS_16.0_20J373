//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionCollectionViewCell : UICollectionViewCell
{
    _Bool _isDefault;	// 8 = 0x8
    CDUnknownBlockType _selectEventHandler;	// 16 = 0x10
    UIButton *_suggestionButton;	// 24 = 0x18
    NSString *_suggestion;	// 32 = 0x20
    UIImage *_iconImage;	// 40 = 0x28
    NSString *_searchString;	// 48 = 0x30
    NSString *_suggestionAccessibilityIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000010ea9c5
@property(retain, nonatomic) NSString *suggestionAccessibilityIdentifier; // @synthesize suggestionAccessibilityIdentifier=_suggestionAccessibilityIdentifier;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) UIButton *suggestionButton; // @synthesize suggestionButton=_suggestionButton;
@property(copy, nonatomic) CDUnknownBlockType selectEventHandler; // @synthesize selectEventHandler=_selectEventHandler;
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000010ea86d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000010ea784
- (void)prepareForReuse;	// IMP=0x00000000010ea5ce
- (void)didSelectButton:(id)arg1;	// IMP=0x00000000010ea541
@property(readonly, nonatomic) struct CGSize fittingSize;
- (id)attributedSuggestionStringWithFont:(id)arg1 searchStringColor:(id)arg2 autofillColor:(id)arg3 highlight:(_Bool)arg4;	// IMP=0x00000000010ea191
- (void)_updateButton;	// IMP=0x00000000010e9afb
- (void)updateWithSuggestion:(id)arg1 iconImage:(id)arg2 currentSearchString:(id)arg3 isDefault:(_Bool)arg4 suggestionAccessibilityIdentifier:(id)arg5;	// IMP=0x00000000010e9a24
- (id)preferredFocusEnvironments;	// IMP=0x00000000010e9999
- (void)commonInit;	// IMP=0x00000000010e93c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010e9367
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010e931b

@end

