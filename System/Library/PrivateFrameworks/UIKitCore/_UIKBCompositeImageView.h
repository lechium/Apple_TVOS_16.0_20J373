//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIKBCompositeImageView : UIView
{
    NSArray *_imageViews;	// 8 = 0x8
    struct CGSize _imageSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009efd21
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)layoutSubviews;	// IMP=0x00000000009efab5

@end

