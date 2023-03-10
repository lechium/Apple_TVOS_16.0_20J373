//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    _Bool _selected;	// 176 = 0xb0
    UILabel *_badgeTextLabel;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000e18cee
@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;	// IMP=0x0000000000e18c65
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000e18c19
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;	// IMP=0x0000000000e1887b
- (void)_sizeToFit;	// IMP=0x0000000000e1878d
- (double)minHeight;	// IMP=0x0000000000e1877f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e18711
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e1865c

@end

