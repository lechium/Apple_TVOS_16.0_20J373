//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLTexture;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderMDL
{
    MDLTexture *_texture;	// 8 = 0x8
    struct MTLPixelFormatInfo _pixelFormatInfo;	// 16 = 0x10
}

- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;	// IMP=0x0000000000008dd5
- (_Bool)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000008c1e
- (void)dealloc;	// IMP=0x0000000000008bd0
- (id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000896d

@end

