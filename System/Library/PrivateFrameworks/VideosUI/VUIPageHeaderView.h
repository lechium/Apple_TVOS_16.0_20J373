//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIPageHeaderView : UIView
{
    NSString *_title;	// 8 = 0x8
    VUILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012036a
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x00000000001201c1
- (void)layoutSubviews;	// IMP=0x0000000000120110
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001200f9

@end

