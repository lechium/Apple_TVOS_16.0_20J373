//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogPredicateMapper : NSObject
{
    int _pass;	// 8 = 0x8
    NSMutableArray *_validationErrors;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    NSMutableArray *_stack;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001ff4e
@property(readonly, nonatomic) NSArray *validationErrors; // @synthesize validationErrors=_validationErrors;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) NSPredicate *mappedPredicate; // @synthesize mappedPredicate=_predicate;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000001fee1
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000001fec6
- (void)validateExpression:(id)arg1;	// IMP=0x000000000001fcab
- (void)processCompoundPredicate:(id)arg1;	// IMP=0x000000000001fb53
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x000000000001fa09
- (void)mapLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;	// IMP=0x000000000001f6a4
- (id)mapSignpostTypeExpression:(id)arg1;	// IMP=0x000000000001f629
- (id)mapSignpostScopeExpression:(id)arg1;	// IMP=0x000000000001f5ae
- (id)mapMessageTypeExpression:(id)arg1;	// IMP=0x000000000001f533
- (id)mapEventTypeExpression:(id)arg1;	// IMP=0x000000000001f4b8
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;	// IMP=0x000000000001f236
@property(readonly, nonatomic) NSMutableSet *validKeyPaths;
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000001f17d
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000001f16b
- (id)initWithPredicate:(id)arg1 andValidate:(_Bool)arg2;	// IMP=0x000000000001f054

@end

