//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI23TVStandardBrickItemCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 6864920 = 0x68c018
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *tvArtworkView;	// 0 = 0x0
    MISSING_TYPE *captionLabel;	// 0 = 0x0
    MISSING_TYPE *titleLabel;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *subtitleLabel;	// 1769300575 = 0x6975625f
}

- (void).cxx_destruct;	// IMP=0x00000000000761c0
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000075ee0
- (void)prepareForReuse;	// IMP=0x0000000000075e00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075de0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000075db0

@end

