//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLFallModelSelector : NSObject
{
    NSMutableDictionary *fSelectionFeatures;	// 8 = 0x8
    struct FallModel fTripFallModel;	// 16 = 0x10
    struct FallModel fSlipFallModel;	// 812 = 0x32c
    struct FallModel fOtherFallModel;	// 1608 = 0x648
    struct FallThresholds fThresholds;	// 2404 = 0x964
}

- (id).cxx_construct;	// IMP=0x002000000014bf90
- (_Bool)fillFallThresholds:(struct FallThresholds *)arg1;	// IMP=0x001000000014bf62
- (_Bool)fillOtherFallModel:(struct FallModel *)arg1;	// IMP=0x001000000014bd33
- (_Bool)fillSlipFallModel:(struct FallModel *)arg1;	// IMP=0x001000000014bb04
- (_Bool)fillTripFallModel:(struct FallModel *)arg1;	// IMP=0x001000000014b8ed
- (_Bool)selectModels;	// IMP=0x0010000000149b24
- (_Bool)setSelectionFeatureValue:(id)arg1 value:(id)arg2;	// IMP=0x0010000000149b02
- (void)dealloc;	// IMP=0x0010000000149ac7
- (id)init;	// IMP=0x0010000000149a7e

@end
