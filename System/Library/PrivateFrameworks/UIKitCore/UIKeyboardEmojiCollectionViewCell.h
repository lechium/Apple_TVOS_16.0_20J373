//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UIKeyboardEmoji, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell
{
    UILabel *_emojiLabel;	// 8 = 0x8
    _Bool _unreleasedHighlight;	// 16 = 0x10
    _Bool _noResultsCell;	// 17 = 0x11
    UILabel *_unreleasedBanner;	// 24 = 0x18
    UIKeyboardEmoji *_emoji;	// 32 = 0x20
    UIView *_navigationHighlightView;	// 40 = 0x28
    UILabel *_noResultsLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009d99e9
@property(retain, nonatomic) UILabel *noResultsLabel; // @synthesize noResultsLabel=_noResultsLabel;
@property(retain, nonatomic) UIView *navigationHighlightView; // @synthesize navigationHighlightView=_navigationHighlightView;
@property(nonatomic) _Bool noResultsCell; // @synthesize noResultsCell=_noResultsCell;
@property(nonatomic) _Bool unreleasedHighlight; // @synthesize unreleasedHighlight=_unreleasedHighlight;
@property(copy, nonatomic) UIKeyboardEmoji *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) UILabel *unreleasedBanner; // @synthesize unreleasedBanner=_unreleasedBanner;
- (id)debugDescription;	// IMP=0x00000000009d988f
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000009d93a1
@property(nonatomic) long long emojiFontSize;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009d8503

@end

