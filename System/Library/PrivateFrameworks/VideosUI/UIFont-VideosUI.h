//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

@interface UIFont (VideosUI)
+ (id)uiFontTextStyleFromTextStyle:(long long)arg1;	// IMP=0x008000000002b46b
+ (id)_uiFontAttributesForFeature:(long long)arg1;	// IMP=0x008000000002b27a
+ (id)uifontWeightFromFontWeight:(long long)arg1;	// IMP=0x008000000002aed7
+ (id)_fontFromTextStyle:(long long)arg1 maximumContentSizeCategory:(id)arg2 fontWeight:(long long)arg3 fontSize:(double)arg4 symbolicTraits:(unsigned int)arg5 fontFeature:(long long)arg6;	// IMP=0x008000000002abc6
+ (id)vui_fontFromTextLayout:(id)arg1;	// IMP=0x008000000002a6bd
+ (id)vui_fontFromTextStyle:(long long)arg1 fontWeight:(long long)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;	// IMP=0x008000000002a662
- (double)topMarginToFont:(id)arg1 withBaselineMargin:(double)arg2 traitCollection:(id)arg3;	// IMP=0x001000000002b889
- (double)bottomMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;	// IMP=0x001000000002b82f
- (double)topMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;	// IMP=0x001000000002b7dd
- (double)baselineHeight;	// IMP=0x001000000002b7c6
@end

