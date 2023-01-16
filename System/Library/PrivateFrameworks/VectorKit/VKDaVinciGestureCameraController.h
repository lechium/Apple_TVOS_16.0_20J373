//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKDaVinciGestureCameraController
{
    void *_cameraManager;	// 176 = 0xb0
    double _beganDoublePanPitch;	// 184 = 0xb8
    double _currentDoublePanPitch;	// 192 = 0xc0
    _Bool _isPitchIncreasing;	// 200 = 0xc8
}

- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000560086
- (_Bool)isPitchIncreasing;	// IMP=0x0000000000560076
- (void)endPitch:(struct CGPoint)arg1;	// IMP=0x0000000000560000
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x000000000055fd9b
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x000000000055fb34
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x000000000055f9fb
- (void)endRotate:(struct CGPoint)arg1;	// IMP=0x000000000055f988
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000055f8f1
- (void)beginRotate:(struct CGPoint)arg1;	// IMP=0x000000000055f860
- (void)endPan:(struct CGPoint)arg1;	// IMP=0x000000000055f7ed
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000055f77b
- (void)beginPan:(struct CGPoint)arg1;	// IMP=0x000000000055f6e2
- (void)endZoom:(struct CGPoint)arg1;	// IMP=0x000000000055f66c
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x000000000055f5b3
- (void)beginZoom:(struct CGPoint)arg1;	// IMP=0x000000000055f506
- (id)initWithCameraController:(id)arg1 cameraManager:(void *)arg2;	// IMP=0x000000000055f4bb

@end

