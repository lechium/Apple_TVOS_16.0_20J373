//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColorMatrix : NSObject
{
    struct CAColorMatrix _colorMatrix;	// 8 = 0x8
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x001000000104b243
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x001000000104b189
+ (id)valueWithColorMatrix:(struct CAColorMatrix)arg1;	// IMP=0x0010000001048f65
@property(readonly, copy) NSString *debugDescription;
- (id)getValue;	// IMP=0x000000000104b10a
- (_Bool)isUndefined;	// IMP=0x000000000104ae7e
- (_Bool)isCompatibleWith:(id)arg1;	// IMP=0x000000000104ae76
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x000000000104ad2f
- (id)multiplyByVector:(id)arg1;	// IMP=0x000000000104acdb
- (id)multiplyByScalar:(double)arg1;	// IMP=0x000000000104ac29
- (id)addVector:(id)arg1;	// IMP=0x000000000104abd5
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x000000000104921f
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x00000000010490e5
- (void)reinitWithVector:(id)arg1;	// IMP=0x00000000010490b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001049021
- (id)initWithColorMatrix:(struct CAColorMatrix)arg1;	// IMP=0x0000000001048fc2

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
