//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, LPContactsBadgeStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPContactsBadgeView
{
    LPContactsBadgeStyle *_style;	// 8 = 0x8
    UIView *_avatarView;	// 16 = 0x10
    UIImageView *_highlightIndicatorView;	// 24 = 0x18
    UIView *_highlightShadowView;	// 32 = 0x20
    CAShapeLayer *_maskLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000071ebe
- (struct CGRect)layoutExclusionRect;	// IMP=0x0000000000071d8c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000071c95
- (void)layoutComponentView;	// IMP=0x0000000000071897
- (id)initWithHost:(id)arg1 contacts:(id)arg2 highlighted:(_Bool)arg3 style:(id)arg4;	// IMP=0x000000000007131a
- (id)initWithHost:(id)arg1;	// IMP=0x000000000007130c

@end

