//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKMapAnnotationTrackingCameraController
{
    float _currentAnimationCompletedFraction;	// 196 = 0xc4
    _Bool _zooming;	// 200 = 0xc8
}

- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x00000000008de855
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3 isInitial:(_Bool)arg4;	// IMP=0x00000000008dc8f9
- (void)updateFramerate;	// IMP=0x00000000008dc886
- (struct VKEdgeInsets)_effectiveEdgeInsets;	// IMP=0x00000000008dc7b3
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x00000000008dc48a
- (double)_minTrackingCameraDistance:(_Bool)arg1;	// IMP=0x00000000008dbbc6
- (double)_zoomLevelForCameraPosition:(Matrix_6e1d3589)arg1;	// IMP=0x00000000008db9a2

@end
