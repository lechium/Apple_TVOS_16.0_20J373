//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class HFNumberValueConstraints, NSString;

@interface HMCharacteristicMetadata (HFDebugging)
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00200000000a9420
- (id)hf_percentageForCharacteristicValue:(id)arg1;	// IMP=0x00200000001a494e
- (id)hf_characteristicValueForPercentage:(double)arg1;	// IMP=0x00200000001a473f
@property(readonly, nonatomic) _Bool hf_isNumeric;
- (_Bool)hf_isInteger;	// IMP=0x00200000001a4515
- (_Bool)hf_isValidValue:(id)arg1;	// IMP=0x00200000001a4349
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;	// IMP=0x00200000001a427f
- (id)hf_normalizedValueForValue:(id)arg1;	// IMP=0x00200000001a41b5
- (_Bool)hf_isEqualToMetadata:(id)arg1;	// IMP=0x00200000001a3d25
@property(readonly, nonatomic) HFNumberValueConstraints *hf_numericValueConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

