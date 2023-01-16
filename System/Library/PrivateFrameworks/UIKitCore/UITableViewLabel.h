//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSAttributedString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewLabel : UILabel
{
    long long _savedNumberOfLines;	// 176 = 0xb0
    double _firstParagraphFirstLineHeadIndent;	// 184 = 0xb8
    NSAttributedString *_shadowAttributedText;	// 192 = 0xc0
    _Bool _usingDefaultFont;	// 200 = 0xc8
    UITableViewCell *_tableCell;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000deedfc
@property(readonly, nonatomic) _Bool usingDefaultFont; // @synthesize usingDefaultFont=_usingDefaultFont;
@property(nonatomic) __weak UITableViewCell *tableCell; // @synthesize tableCell=_tableCell;
- (void)setFont:(id)arg1;	// IMP=0x0000000000deed85
- (void)_setDefaultFont:(id)arg1;	// IMP=0x0000000000deecff
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000deea4a
- (void)_setFirstParagraphFirstLineHeadIndent:(double)arg1;	// IMP=0x0000000000dee9a5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000dee67d
- (id)_disabledFontColor;	// IMP=0x0000000000dee593
- (void)setText:(id)arg1;	// IMP=0x0000000000dee340
- (_Bool)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1;	// IMP=0x0000000000dee2a8
- (void)_cleanupErrantFirstLineHeadIndent;	// IMP=0x0000000000dee0b9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000dee014
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000dedf97
- (void)_setNumberOfLinesForAXLayoutIfNecessary;	// IMP=0x0000000000dede9e
- (void)_restoreNumberOfLines;	// IMP=0x0000000000dede69
- (void)_clearNumberOfLines;	// IMP=0x0000000000dede2e

@end

