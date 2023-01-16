//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKImage;

__attribute__((visibility("hidden")))
@interface VKRoadSignArtwork : NSObject
{
    struct __CTLine *_line;	// 8 = 0x8
    struct __CTFrame *_frame;	// 16 = 0x10
    struct __CTFramesetter *_framesetter;	// 24 = 0x18
    struct RoadSignMetrics _signMetrics;	// 32 = 0x20
    struct RoadSignTextMetrics _textMetrics;	// 192 = 0xc0
    struct RoadSignGeneratedMetrics _generatedMetrics;	// 336 = 0x150
    struct RoadSignColoring _signColoring;	// 1376 = 0x560
    struct shared_ptr<md::LabelIcon> _glyph;	// 1648 = 0x670
    struct CGImage *_cgGlyph;	// 1664 = 0x680
    struct vector<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> _debugPoints;	// 1672 = 0x688
    struct vector<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> _debugRects;	// 1696 = 0x6a0
    struct mutex _imageLock;	// 1720 = 0x6b8
    struct _retain_ptr<VKImage *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKImage *_obj;
        struct _retain_objc_arc _retain;
        struct _release_objc_arc _release;
    } _image;	// 1784 = 0x6f8
}

- (id).cxx_construct;	// IMP=0x00000000004967eb
- (void).cxx_destruct;	// IMP=0x000000000049671f
- (void)addDebugRect:(struct CGRect)arg1 color:(Color_b7a9e7da)arg2;	// IMP=0x000000000049658f
- (void)addDebugPoint:(struct CGPoint)arg1 color:(Color_b7a9e7da)arg2;	// IMP=0x0000000000496435
- (const void *)textMetrics;	// IMP=0x0000000000496428
- (const struct RoadSignGeneratedMetrics *)generatedMetrics;	// IMP=0x000000000049641b
- (Box_3fb92e00)localCollisionBounds;	// IMP=0x00000000004963b0
- (Box_3fb92e00)localSignBounds;	// IMP=0x00000000004962f0
- (Box_3fb92e00)localRenderBounds;	// IMP=0x00000000004962be
- (Matrix_8746f91e)offsetPixelForPixel:(Matrix_8746f91e)arg1;	// IMP=0x0000000000496267
- (const void *)glyph;	// IMP=0x000000000049625a
- (id)image;	// IMP=0x0000000000495a50
- (void)dealloc;	// IMP=0x00000000004959af
- (id)initWithLine:(struct __CTLine *)arg1 signMetrics:(struct RoadSignMetrics)arg2 textMetrics:(struct RoadSignTextMetrics)arg3 signColoring:(struct RoadSignColoring)arg4 glyph:(const void *)arg5 cgGlyph:(struct CGImage *)arg6;	// IMP=0x00000000004956c9
- (id)initWithFramesetter:(struct __CTFramesetter *)arg1 signMetrics:(struct RoadSignMetrics)arg2 textMetrics:(struct RoadSignTextMetrics)arg3 signColoring:(struct RoadSignColoring)arg4 glyph:(const void *)arg5 cgGlyph:(struct CGImage *)arg6;	// IMP=0x00000000004953de

@end
