//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSMemoryStorePredicateRemapper : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
}

+ (id)defaultInstance;	// IMP=0x001000000005da4a
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000005dd22
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000005dd1c
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000005dba7
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000005daed
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x000000000005dad9
- (void)dealloc;	// IMP=0x000000000005da9e
- (id)init;	// IMP=0x000000000005da6f

@end

