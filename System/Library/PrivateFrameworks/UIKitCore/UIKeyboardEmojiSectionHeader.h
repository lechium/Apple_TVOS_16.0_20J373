//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionReusableView.h"

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView
{
    UILabel *_emojiSectionHeader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009d9fa6
@property(nonatomic) _Bool useVibrantBlend;
@property(nonatomic) double headerOpacity;
@property(nonatomic) double headerFontSize;
@property(copy, nonatomic) UIColor *headerTextColor;
@property(copy, nonatomic) NSString *headerName;
- (void)layoutSubviews;	// IMP=0x00000000009d9b57
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009d9a4d

@end

