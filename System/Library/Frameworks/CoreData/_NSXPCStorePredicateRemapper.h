//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCStorePredicateRemapper : NSObject
{
}

+ (id)defaultInstance;	// IMP=0x001000000005ee13
+ (void)initialize;	// IMP=0x001000000005edd8
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000005eefb
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000005eef5
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000005eeef
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000005eedd
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x000000000005ee96
- (void)dealloc;	// IMP=0x000000000005ee67
- (id)init;	// IMP=0x000000000005ee38

@end

