//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARSession, VKCameraController;
@protocol MDMapControllerDelegate, MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKScreenCanvas : NSObject
{
    void *_mapEngine;	// 8 = 0x8
    struct RunLoopController *_runLoopController;	// 16 = 0x10
    struct AnimationRunner *_animationRunner;	// 24 = 0x18
    shared_ptr_e963992e _taskContext;	// 32 = 0x20
    _retain_ptr_a171892e _vkCamera;	// 48 = 0x30
    shared_ptr_46708168 _camera;	// 72 = 0x48
    id <MDRenderTarget> _displayTarget;	// 88 = 0x58
    _Bool _userIsGesturing;	// 96 = 0x60
    VKCameraController *_cameraController;	// 104 = 0x68
    struct VKEdgeInsets _edgeInsets;	// 112 = 0x70
    struct VKEdgeInsets _fullyOccludedEdgeInsets;	// 128 = 0x80
    _Bool _deallocing;	// 144 = 0x90
    void *_mapRenderer;	// 152 = 0x98
    void *_layoutContext;	// 160 = 0xa0
    id <MDMapControllerDelegate> _mapDelegate;	// 168 = 0xa8
    struct PerspectiveView<double> _view;	// 176 = 0xb0
    ARSession *_arSession;	// 664 = 0x298
}

- (id).cxx_construct;	// IMP=0x0000000000127bf8
- (void).cxx_destruct;	// IMP=0x0000000000127b8f
@property(readonly, nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
@property(nonatomic) __weak id <MDMapControllerDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
@property(nonatomic) shared_ptr_46708168 camera; // @synthesize camera=_camera;
@property(nonatomic) _retain_ptr_a171892e vkCamera; // @synthesize vkCamera=_vkCamera;
- (long long)tileSize;	// IMP=0x0000000000127a63
- (void)didBecomeInActive;	// IMP=0x0000000000127a5d
- (void)didBecomeActive;	// IMP=0x0000000000127a57
- (void)transferStateFromCanvas:(id)arg1;	// IMP=0x00000000001277c8
- (void)didReceiveMemoryWarning:(_Bool)arg1 beAggressive:(_Bool)arg2;	// IMP=0x00000000001277c2
- (id)markerAtScreenPoint:(struct CGPoint)arg1 enableExtendedFeatureMarkers:(_Bool)arg2;	// IMP=0x00000000001277ba
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;	// IMP=0x000000000012775e
- (id)cameraController;	// IMP=0x0000000000127750
- (void)setCameraController:(id)arg1;	// IMP=0x000000000012745b
@property(nonatomic, getter=isGesturing) _Bool gesturing;
- (void)runAnimation:(id)arg1;	// IMP=0x00000000001273fd
- (void)setContentsScale:(double)arg1;	// IMP=0x00000000001273f7
- (void)updateCameraForFrameResize;	// IMP=0x00000000001273e1
- (void)didPresent;	// IMP=0x00000000001273db
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000127365
- (_Bool)wantsTimerTick;	// IMP=0x000000000012734f
- (void)dealloc;	// IMP=0x0000000000127305
- (id)initWithMapEngine:(void *)arg1 inBackground:(_Bool)arg2;	// IMP=0x000000000012721a

@end
