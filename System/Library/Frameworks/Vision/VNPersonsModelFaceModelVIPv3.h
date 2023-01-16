//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModelVIPv3
{
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;	// 8 = 0x8
    shared_ptr_d8728072 _faceIDModel;	// 16 = 0x10
    unsigned long long _faceprintRequestRevision;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000027b115
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x006000000027b107
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x006000000027a296
+ (shared_ptr_099ccdd3)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr_099ccdd3)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(void *)arg4;	// IMP=0x0060000000279df8
- (id).cxx_construct;	// IMP=0x0000000000279b56
- (void).cxx_destruct;	// IMP=0x0000000000279b27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002798dc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002793e6
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000279204
- (id)faceCountsForAllPersons;	// IMP=0x00000000002791f7
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000002791ea
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002791e2
- (id)personUniqueIdentifiers;	// IMP=0x000000000027902d
- (unsigned long long)personCount;	// IMP=0x0000000000279010
- (unsigned long long)faceprintRequestRevision;	// IMP=0x0000000000278fff
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000278ce3
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller *)arg4 error:(id *)arg5;	// IMP=0x0000000000278856
- (_Bool)_getSerialNumber:(int *)arg1 forPersonUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002785c0
- (id)initWithFaceIDModel:(shared_ptr_d8728072)arg1 faceprintRequestRevision:(unsigned long long)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3;	// IMP=0x000000000027843c

@end

