//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModel : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000169360
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001691fe
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001691ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001694e2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016943f
- (id)printCountsForAllEntities;	// IMP=0x0000000000169432
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000169425
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000016941d
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000169415
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016940d
- (id)entityUniqueIdentifiers;	// IMP=0x0000000000169400
- (unsigned long long)entityCount;	// IMP=0x00000000001693f8
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001693b4
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000169370
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x0000000000169368

@end
