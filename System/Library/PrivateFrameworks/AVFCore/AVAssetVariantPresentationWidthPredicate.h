//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSPredicateOperator;

__attribute__((visibility("hidden")))
@interface AVAssetVariantPresentationWidthPredicate : NSPredicate
{
    double _width;	// 16 = 0x10
    NSPredicateOperator *_operator;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000129c6d
- (void)dealloc;	// IMP=0x0000000000129ff2
- (id)description;	// IMP=0x0000000000129f96
- (id)predicateFormat;	// IMP=0x0000000000129f89
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000129f6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129f63
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;	// IMP=0x0000000000129ead
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000129d57
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000129c75
- (id)initWithPresentationWidth:(double)arg1 operatorType:(unsigned long long)arg2;	// IMP=0x0000000000129be4

@end

