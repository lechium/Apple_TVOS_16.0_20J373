//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24PlayerProfileInfoBarView : UIView
{
    MISSING_TYPE *centerContentInScrollView;	// 8 = 0x8
    MISSING_TYPE *state;	// 9 = 0x9
    MISSING_TYPE *infoItemPairs;	// 16 = 0x10
    MISSING_TYPE *separators;	// 24 = 0x18
    MISSING_TYPE *scrollView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000151a10
@property(nonatomic, readonly) NSArray *accessibilityInfoItemPairs;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000151470
- (void)layoutSubviews;	// IMP=0x0000000000150eb0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000000150a20
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000150520
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000150050
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000150020

@end
