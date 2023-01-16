//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCompoundPredicate
{
    NSString *_combinationOperation;	// 8 = 0x8
    NSArray *_predicates;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x00100000002a097b
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x00100000002a08f3
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x00100000002a086b
- (void).cxx_destruct;	// IMP=0x00000000002a1303
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00000000002a1122
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000002a0e9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a0d94
- (unsigned long long)hash;	// IMP=0x00000000002a0cff
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000000002a0b9d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a0b92

@end

