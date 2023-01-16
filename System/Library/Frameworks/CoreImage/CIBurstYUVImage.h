//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstYUVImage : NSObject
{
    char *Ybuffer;	// 8 = 0x8
    char *Cbuffer;	// 16 = 0x10
    int width;	// 24 = 0x18
    int height;	// 28 = 0x1c
    int bytesPerRow;	// 32 = 0x20
    struct __CFData *dataPtr;	// 40 = 0x28
    struct __CVBuffer *pixelBuffer;	// 48 = 0x30
    struct __IOSurface *ioSurf;	// 56 = 0x38
}

@property int bytesPerRow; // @synthesize bytesPerRow;
@property char *Cbuffer; // @synthesize Cbuffer;
@property char *Ybuffer; // @synthesize Ybuffer;
@property int height; // @synthesize height;
@property int width; // @synthesize width;
- (struct __CVBuffer *)pixelBuffer;	// IMP=0x0000000000038e2f
- (void)dealloc;	// IMP=0x0000000000038dbf
- (id)initWithIOSurface:(struct __IOSurface *)arg1 maxDimension:(int)arg2;	// IMP=0x0000000000038b11
- (id)initWithCGImage:(struct CGImage *)arg1 maxDimension:(int)arg2;	// IMP=0x0000000000038952
- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;	// IMP=0x00000000000384d2

@end

