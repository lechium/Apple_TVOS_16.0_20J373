//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKCameraRegionRestriction;

__attribute__((visibility("hidden")))
@interface VKGlobeAnnotationTrackingCameraController
{
    void *_globeView;	// 200 = 0xc8
    void *_anchor;	// 208 = 0xd0
    CDStruct_071ac149 _currentAnimationStartCoordinate;	// 216 = 0xd8
    CDStruct_2c43369c _currentAnimationPresentationStartCoordinate;	// 240 = 0xf0
    CDStruct_2c43369c _currentAnimationPresentationEndCoordinate;	// 256 = 0x100
    CDStruct_2c43369c _currentAnimationEndCoordinate;	// 272 = 0x110
    VKCameraRegionRestriction *_regionRestriction;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000077cdbf
@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000077c57b
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3 isInitial:(_Bool)arg4;	// IMP=0x000000000077ae3f
- (Matrix_443f5d51)_centerCursor;	// IMP=0x000000000077ac94
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x000000000077ac49
- (struct VKEdgeInsets)_effectiveEdgeInsets;	// IMP=0x000000000077ab76
- (Matrix_443f5d51)_nonOffsetCenterCursor;	// IMP=0x000000000077aa27
- (void)dealloc;	// IMP=0x000000000077a9bb
- (id)init;	// IMP=0x000000000077a974

@end

