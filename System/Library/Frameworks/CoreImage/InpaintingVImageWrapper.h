//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingVImageWrapper : NSObject
{
    struct vImage_Buffer *_image;	// 8 = 0x8
    _Bool freeWhenDone;	// 16 = 0x10
    int _bpp;	// 20 = 0x14
}

+ (id)createVImageWrapperForProcessorInput:(id)arg1 thatMatchesOutput:(id)arg2;	// IMP=0x0060000000236ff7
+ (id)vImageWrapperByCroppingWrapper:(id)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0060000000236f22
@property(readonly) struct vImage_Buffer *image; // @synthesize image=_image;
- (void)dealloc;	// IMP=0x000000000023739e
- (void)free;	// IMP=0x0000000000237374
@property(readonly, getter=getData) void *data;
@property(readonly, getter=getBytesPerRow) int bytesPerRow;
@property(readonly, getter=getBytesPerPixel) int bytesPerPixel;
@property(readonly, getter=getHeight) int height;
@property(readonly, getter=getWidth) int width;
- (id)initWithShapeOf:(id)arg1;	// IMP=0x0000000000236eb4
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3;	// IMP=0x0000000000236e5a
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bytes:(void *)arg4 freeBytesWhenDone:(_Bool)arg5;	// IMP=0x0000000000236e32
- (id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bpr:(int)arg4 bytes:(void *)arg5 freeBytesWhenDone:(_Bool)arg6;	// IMP=0x0000000000236da6

@end

