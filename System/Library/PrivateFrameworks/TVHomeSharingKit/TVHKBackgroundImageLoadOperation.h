//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class TVHKImageColors, TVImageProxy, UIImage;

__attribute__((visibility("hidden")))
@interface TVHKBackgroundImageLoadOperation : TVHKAsynchronousOperation
{
    TVImageProxy *_imageProxy;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    TVHKImageColors *_imageColors;	// 24 = 0x18
}

+ (id)new;	// IMP=0x006000000007b28a
- (void).cxx_destruct;	// IMP=0x000000000007b9d4
@property(retain, nonatomic) TVHKImageColors *imageColors; // @synthesize imageColors=_imageColors;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void)_imageProxyLoadDidComplete:(id)arg1;	// IMP=0x000000000007b837
- (void)_completeWithImage:(id)arg1 imageColors:(id)arg2;	// IMP=0x000000000007b72f
- (void)cancel;	// IMP=0x000000000007b6b1
- (void)executionDidBegin;	// IMP=0x000000000007b396
- (id)initWithImageProxy:(id)arg1;	// IMP=0x000000000007b328
- (id)init;	// IMP=0x000000000007b2b9

@end

