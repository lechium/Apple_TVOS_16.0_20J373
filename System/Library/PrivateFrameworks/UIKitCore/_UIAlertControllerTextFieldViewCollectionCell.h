//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UITapGestureRecognizer, _UIAlertControllerTextFieldView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell
{
    _UIAlertControllerTextFieldView *_textField;	// 176 = 0xb0
    UITapGestureRecognizer *_selectButtonGesture;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000004a600
- (id)preferredFocusedView;	// IMP=0x000000000004a5e3
- (void)_selectButton:(id)arg1;	// IMP=0x000000000004a556
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000004a47d
- (void)prepareForReuse;	// IMP=0x000000000004a412
@property(readonly, nonatomic) _UIAlertControllerTextFieldView *textField;
- (void)setTextField:(id)arg1 horizontalMargin:(double)arg2;	// IMP=0x000000000004a215
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004a110

@end

