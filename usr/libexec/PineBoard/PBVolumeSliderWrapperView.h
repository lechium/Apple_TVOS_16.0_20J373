//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PBVolumeSlider, PBVolumeSliderBackgroundView;

@interface PBVolumeSliderWrapperView : UIView
{
    UIView *_sliderWrapperView;	// 8 = 0x8
    PBVolumeSliderBackgroundView *_backgroundView;	// 16 = 0x10
    PBVolumeSlider *_sliderView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007c991
@property(readonly, nonatomic) PBVolumeSlider *sliderView; // @synthesize sliderView=_sliderView;
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x001000000007c8b8
- (void)layoutSubviews;	// IMP=0x001000000007c7ee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000007c26c

@end
