//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton
{
    NSString *_title;	// 400 = 0x190
    NSString *_pressedTitle;	// 408 = 0x198
    NSSet *_possibleTitles;	// 416 = 0x1a0
}

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001247b3
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000124546
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000124508
- (void)layoutSubviews;	// IMP=0x000000000012426f
- (void)_setPressed:(_Bool)arg1;	// IMP=0x00000000001241b9
- (void)dealloc;	// IMP=0x0000000000124153
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000124006
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;	// IMP=0x0000000000123d55

@end

