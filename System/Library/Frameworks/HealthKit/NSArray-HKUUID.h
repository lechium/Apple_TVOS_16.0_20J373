//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (HKUUID)
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fbf54
+ (id)hk_arrayWithCount:(long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fa411
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x0010000000191dd4
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006b7fc
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b576
- (id)hk_splitWithBucketCount:(long long)arg1;	// IMP=0x00100000000fc600
- (id)hk_mutableSubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00100000000fc553
- (_Bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fc248
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc07c
- (id)hk_shuffled;	// IMP=0x00100000000fbf07
- (id)hk_reversed;	// IMP=0x00100000000fbeb7
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fbc9b
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fba63
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb7ee
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb78b
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fb4fb
- (_Bool)hk_allElementsEqual;	// IMP=0x00100000000fb48a
- (_Bool)hk_allElementsUnique;	// IMP=0x00100000000fb415
- (_Bool)hk_containsObjectsInArray:(id)arg1;	// IMP=0x00100000000fb372
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb1e7
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb034
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fae89
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fad23
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fab46
- (_Bool)hk_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000faa0d
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fa9da
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017f9c
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fa834
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017364
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000000fa547
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f332
- (id)_hk_featureAvailabilityRequirements;	// IMP=0x00100000001919d9
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000019241e
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191e56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

