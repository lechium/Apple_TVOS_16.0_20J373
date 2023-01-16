//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAEAGLLayer.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface GGLOpenGLESLayer : CAEAGLLayer
{
    id <GGLLayerDelegate> _delegate;	// 16 = 0x10
    shared_ptr_2063da68 _device;	// 24 = 0x18
    struct unique_ptr<ggl::OESContext, std::default_delete<ggl::OESContext>> _context;	// 40 = 0x28
    struct shared_ptr<ggl::RenderBuffer> _texture;	// 48 = 0x30
    struct CGSize _backingSize;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000093e8e1
- (void).cxx_destruct;	// IMP=0x000000000093e870
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property __weak id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (void)didEnterBackground;	// IMP=0x000000000093e800
- (void)setContentsScale:(double)arg1;	// IMP=0x000000000093e7ae
- (void)onTimerFired:(double)arg1;	// IMP=0x000000000093e66b
- (void)_deleteLayerRenderBuffer;	// IMP=0x000000000093e5b6
- (_Bool)_createLayerRenderBuffer;	// IMP=0x000000000093e444
- (void)_createTexture;	// IMP=0x000000000093e27f
- (void)layoutSublayers;	// IMP=0x000000000093e279
- (void)dealloc;	// IMP=0x000000000093e182
- (id)initWithDevice:(shared_ptr_2063da68)arg1;	// IMP=0x000000000093dda0
@property(readonly, nonatomic) void *texture;
@property(readonly) int backingFormat;

@end

