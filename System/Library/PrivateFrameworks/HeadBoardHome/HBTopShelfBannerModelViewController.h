//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfBannerModel, NSString;
@protocol HBTopShelfItemInteractingDelegate;

__attribute__((visibility("hidden")))
@interface HBTopShelfBannerModelViewController
{
    id <HBTopShelfItemInteractingDelegate> _interactionDelegate;	// 8 = 0x8
    HBTopShelfBannerModel *_model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000098722
@property(retain, nonatomic) HBTopShelfBannerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <HBTopShelfItemInteractingDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)_configureTextOverlayView:(id)arg1 withOverlayItem:(id)arg2;	// IMP=0x0000000000098548
- (void)_configureTextOverlayViewForImageStackView:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000984a4
- (void)_configureTextOverlayViewForLayeredImageContainerView:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000983fe
- (id)_placeholderForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000983a7
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x0000000000098339
- (void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000098231
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000098129
- (void)configureCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000978d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
