//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFocusRegion.h"

__attribute__((visibility("hidden")))
@interface _UIFocusSpeedBumpRegion : _UIFocusRegion
{
    unsigned long long _speedBumpEdges;	// 8 = 0x8
}

@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;	// IMP=0x0000000000618bde
- (_Bool)_shouldCropRegionToSearchArea;	// IMP=0x0000000000618bd6
- (_Bool)_canBeOccludedByRegionsAbove;	// IMP=0x0000000000618bce
- (_Bool)_canOccludeRegionsBelow;	// IMP=0x0000000000618bc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000618b5a
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000618afa
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 speedBumpEdges:(unsigned long long)arg3;	// IMP=0x0000000000618aa5
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000618a8e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000618a3a

@end

