//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNGenerateFaceSegmentsRequestConfiguration
{
    float _faceBoundingBoxExpansionRatio;	// 8 = 0x8
}

+ (_Bool)expansionRatioWithinValidRange:(float)arg1;	// IMP=0x00400000001d9f2f
+ (float)defaultFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001d9f21
+ (float)endRangeFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001d9f13
+ (float)beginRangeFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001d9f05
@property(nonatomic) float faceBoundingBoxExpansionRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d9e3e
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001d9dab

@end
