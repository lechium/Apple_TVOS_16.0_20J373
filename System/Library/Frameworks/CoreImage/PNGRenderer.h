//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PNGRenderer
{
    struct __CFURL *fullURL;	// 40 = 0x28
    struct CGColor *background;	// 48 = 0x30
    struct CGColorSpace *colorSpace;	// 56 = 0x38
}

- (struct CGImage *)cgimage;	// IMP=0x00000000000a8da1
- (void)flushRender;	// IMP=0x00000000000a8d30
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000a8bad
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000a8b78
- (void)dealloc;	// IMP=0x00000000000a8b27
- (id)init;	// IMP=0x00000000000a8ac6

@end

