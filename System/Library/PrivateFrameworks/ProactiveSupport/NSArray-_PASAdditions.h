//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (_PASAdditions)
+ (id)_pas_proxyArrayWithObject:(id)arg1 repetitions:(unsigned long long)arg2;	// IMP=0x008000000001e3cc
+ (id)_pas_proxyArrayUsingObjectAtIndexBlock:(CDUnknownBlockType)arg1 andCountBlock:(CDUnknownBlockType)arg2;	// IMP=0x008000000001e317
- (id)_pas_unproxy;	// IMP=0x001000000001de28
- (id)_pas_proxyArrayReversed;	// IMP=0x001000000001dd22
- (id)_pas_proxyArrayRevivingStrings;	// IMP=0x001000000001dcc3
- (id)_pas_proxyArrayDistillingStrings;	// IMP=0x001000000001dc64
- (id)_pas_proxyArrayWithRepetitions:(unsigned long long)arg1;	// IMP=0x001000000001db25
- (id)_pas_proxyArrayByAppendingArray:(id)arg1;	// IMP=0x001000000001d939
- (id)_pas_proxyArrayWithMapping:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d7c5
- (id)_pas_proxyArrayWithObjectsAtIndexes:(id)arg1;	// IMP=0x001000000001d486
- (id)_pas_proxySubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x001000000001d25a
- (id)_pas_ensureImmutable;	// IMP=0x001000000001d20d
- (id)_pas_proxyComponentsJoinedByString:(id)arg1;	// IMP=0x001000000001d084
- (id)_pas_componentsJoinedByString:(id)arg1;	// IMP=0x001000000001cfcb
- (void)_pas_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cd8b
- (id)_pas_shuffledArrayUsingRng:(id)arg1;	// IMP=0x001000000001cc37
- (id)_pas_rightFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cb02
- (id)_pas_rightFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c8ac
- (id)_pas_leftFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c777
- (id)_pas_leftFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c519
- (id)_pas_filteredArrayWithTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c400
- (id)_pas_filteredArrayWithIndexedTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c182
- (id)_pas_mappedArrayWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c069
- (id)_pas_mappedArrayWithIndexedTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000001bdcd
@end
