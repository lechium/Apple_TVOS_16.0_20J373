//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_tvOS : UIView
{
    NSArray *_apps;	// 8 = 0x8
    UILayoutGuide *_contentGuide;	// 16 = 0x10
    UIStackView *_contentStack;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIStackView *_logoStack;	// 40 = 0x28
    UILabel *_bodyLabel;	// 48 = 0x30
    UILabel *_secondaryBodyLabel;	// 56 = 0x38
    UIStackView *_seeAllButtonStack;	// 64 = 0x40
    UIStackView *_buttonStack;	// 72 = 0x48
    UIButton *_allowButton;	// 80 = 0x50
    UIButton *_disallowButton;	// 88 = 0x58
    UIButton *_nackButton;	// 96 = 0x60
    UIButton *_seeAllButton;	// 104 = 0x68
    _TVCarouselView *_carouselView;	// 112 = 0x70
    _Bool _didLayout;	// 120 = 0x78
}

+ (struct CGSize)iconSize;	// IMP=0x00100000000d1917
- (void).cxx_destruct;	// IMP=0x00000000000d3b55
- (id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2;	// IMP=0x00000000000d39e2
- (id)_buildButtonStack;	// IMP=0x00000000000d35cf
- (id)_buildSeeAllButtonStack;	// IMP=0x00000000000d34fd
- (id)_imageViewForIndex:(unsigned long long)arg1;	// IMP=0x00000000000d32f0
- (id)_buildLogoStack;	// IMP=0x00000000000d319f
- (id)_buildCarousel;	// IMP=0x00000000000d30a3
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000d2f10
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x00000000000d2ef3
- (void)layoutSubviews;	// IMP=0x00000000000d1dbf
- (void)showNackScreen;	// IMP=0x00000000000d1abc
- (void)setSecondaryBody:(id)arg1;	// IMP=0x00000000000d1a49
- (void)setBody:(id)arg1;	// IMP=0x00000000000d19e9
- (void)setTitle:(id)arg1;	// IMP=0x00000000000d1989
- (id)bodyScroll;	// IMP=0x00000000000d1981
- (id)nackButton;	// IMP=0x00000000000d196c
- (id)seeAllButton;	// IMP=0x00000000000d1957
- (id)disallowButton;	// IMP=0x00000000000d1942
- (id)allowButton;	// IMP=0x00000000000d192d
- (void)dealloc;	// IMP=0x00000000000d18cd
- (id)initWithApps:(id)arg1;	// IMP=0x00000000000d172e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

