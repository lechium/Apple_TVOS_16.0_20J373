//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI15TitleHeaderView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 0 = 0x0
    MISSING_TYPE *accessoryView;	// 1667719007 = 0x63675f5f
    MISSING_TYPE *iconArtworkView;	// 1953523043 = 0x74706563
    MISSING_TYPE *accessory;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *accessoryAction;	// 0 = 0x0
    MISSING_TYPE *separatorLineView;	// 3723600 = 0x38d150
    MISSING_TYPE *separatorInset;	// 3820 = 0xeec
    MISSING_TYPE *allowsAccessibilityLayouts;	// 3723600 = 0x38d150
    MISSING_TYPE *avoidanceRegion;	// 0 = 0x0
    MISSING_TYPE *state;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001b4510
@property(nonatomic, readonly) UIView *accessibilityAccessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x00000000001b3a70
- (void)layoutSubviews;	// IMP=0x00000000001b3360
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001b1c30
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x00000000001b18b0
@property(nonatomic, retain) _TtC12GameCenterUI11ArtworkView *iconArtworkView; // @synthesize iconArtworkView;
@property(nonatomic, retain) UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x00000000001b1240
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b1220
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b11f0

@end

