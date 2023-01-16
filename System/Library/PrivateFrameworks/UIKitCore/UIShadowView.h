//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView : UIView
{
    UIImage *_image;	// 8 = 0x8
}

+ (id)bottomShadowImage;	// IMP=0x0060000000e3c06b
+ (id)topShadowImage;	// IMP=0x0060000000e3c05a
- (void).cxx_destruct;	// IMP=0x0000000000e3c07c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000e3c005
- (void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(_Bool)arg3;	// IMP=0x0000000000e3bef1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e3be7b

@end
