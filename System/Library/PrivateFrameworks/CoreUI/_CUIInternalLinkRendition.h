//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition
{
    unsigned int _nimages;	// 216 = 0xd8
    struct CGRect _imageRect[16];	// 224 = 0xe0
    struct CGImage *_image[16];	// 736 = 0x2e0
    struct CGImage *_unslicedImage;	// 864 = 0x360
    CUIRenditionMetrics *_renditionMetrics;	// 872 = 0x368
    CUIRenditionSliceInformation *_sliceInformation;	// 880 = 0x370
    struct CGRect _frame;	// 888 = 0x378
    CUIStructuredThemeStore *_sourceProvider;	// 920 = 0x398
    CUIRenditionKey *_referenceKey;	// 928 = 0x3a0
    struct CGSize _originalUncroppedSize;	// 936 = 0x3a8
    struct CGRect _alphaCroppedFrame;	// 952 = 0x3b8
}

- (void).cxx_destruct;	// IMP=0x0000000000071385
- (struct CGRect)alphaCroppedRect;	// IMP=0x0000000000071365
- (struct CGSize)originalUncroppedSize;	// IMP=0x000000000007134d
- (_Bool)edgesOnly;	// IMP=0x0000000000071303
- (_Bool)isTiled;	// IMP=0x0000000000071248
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x0000000000071112
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x00000000000710dd
- (id)properties;	// IMP=0x0000000000070f7e
- (id)data;	// IMP=0x0000000000070f53
- (struct CGImage *)unslicedImage;	// IMP=0x0000000000070ced
- (id)_sourceRendition;	// IMP=0x0000000000070c9d
- (_Bool)isScaled;	// IMP=0x0000000000070c2c
- (id)metrics;	// IMP=0x0000000000070c0e
- (id)sliceInformation;	// IMP=0x0000000000070bfd
- (struct CGSize)unslicedSize;	// IMP=0x0000000000070b86
- (struct CGRect)_destinationFrame;	// IMP=0x0000000000070b66
- (id)linkingToRendition;	// IMP=0x0000000000070b55
- (_Bool)isInternalLink;	// IMP=0x0000000000070b4d
- (int)pixelFormat;	// IMP=0x0000000000070b22
- (_Bool)isOpaque;	// IMP=0x0000000000070af7
- (int)bitmapEncoding;	// IMP=0x0000000000070acc
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006ff7a
- (void)_setStructuredThemeStore:(id)arg1;	// IMP=0x000000000006ff66
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006ff54
- (void)dealloc;	// IMP=0x000000000006feaa

@end

