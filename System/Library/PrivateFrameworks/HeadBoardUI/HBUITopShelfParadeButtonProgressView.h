//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeButtonProgressView : UIView
{
    float _progress;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x006000000000a236
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)tintColorDidChange;	// IMP=0x000000000000a474
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000a3a7
- (void)_updateParadeLayerColor;	// IMP=0x000000000000a322
- (void)_updateLayerContentsScale;	// IMP=0x000000000000a2a8
- (id)_progressLayer;	// IMP=0x000000000000a296
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000a1a3

@end

