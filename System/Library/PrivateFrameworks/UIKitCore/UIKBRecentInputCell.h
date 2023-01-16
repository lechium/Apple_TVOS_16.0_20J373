//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputCell : UICollectionViewCell
{
    UILabel *_label;	// 8 = 0x8
}

+ (id)titleAttributesForRenderConfig:(id)arg1;	// IMP=0x00600000008de3e5
+ (id)textColorForRenderConfig:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x00600000008de360
- (void).cxx_destruct;	// IMP=0x00000000008de585
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setInputText:(id)arg1;	// IMP=0x00000000008de1a0
- (void)layoutSubviews;	// IMP=0x00000000008de0da
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000008de007
- (_Bool)isFocused;	// IMP=0x00000000008ddff5
- (_Bool)_canFocusProgrammatically;	// IMP=0x00000000008ddfed
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008ddf8b

@end

