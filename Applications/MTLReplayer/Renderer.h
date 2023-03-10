//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTMTLTextureRenderEncoder, GTMTLTextureRenderer, NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface Renderer : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    GTMTLTextureRenderEncoder *_encoder;	// 24 = 0x18
    GTMTLTextureRenderer *_textureRenderer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004ed1a
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;	// IMP=0x001000000004ed05
- (void)drawInMTKView:(id)arg1;	// IMP=0x001000000004ebfc
- (void)setDisplayTextureEncoder:(id)arg1;	// IMP=0x001000000004eb53
- (void)setDevice:(id)arg1;	// IMP=0x001000000004eac8
- (id)initWithMetalKitView:(id)arg1;	// IMP=0x001000000004ea33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

