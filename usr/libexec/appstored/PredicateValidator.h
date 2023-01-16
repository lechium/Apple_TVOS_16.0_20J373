//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PredicateValidator : NSObject
{
    _Bool _acceptableExpressionTypes[32];	// 8 = 0x8
    NSArray *_acceptableKeyPaths;	// 40 = 0x28
    NSMutableArray *_errors;	// 48 = 0x30
    _Bool _valid;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000011037b
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0010000000110375
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0010000000110201
- (void)visitPredicate:(id)arg1;	// IMP=0x00100000001101fb
- (_Bool)validatePredicate:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000011006b
- (void)setAcceptableKeyPaths:(id)arg1;	// IMP=0x0010000000110035
- (void)setAcceptableExpressionTypes:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000110017
- (id)init;	// IMP=0x001000000010ffd8

@end
