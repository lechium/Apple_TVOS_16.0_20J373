//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView
{
    _Bool _isPresentedInFormSheet;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    double _containerHeight;	// 24 = 0x18
    NSArray *_featureViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000039b8f
@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(nonatomic) _Bool isPresentedInFormSheet; // @synthesize isPresentedInFormSheet=_isPresentedInFormSheet;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateContentSize;	// IMP=0x00000000000395b3
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000039561
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003936f
- (void)adjustedContentInsetDidChange;	// IMP=0x0000000000039319
- (void)layoutSubviews;	// IMP=0x0000000000038d70
- (id)initWithFeatures:(id)arg1;	// IMP=0x0000000000038984

@end

