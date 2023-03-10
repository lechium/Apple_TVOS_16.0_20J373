//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression *_assignmentVariable;	// 24 = 0x18
    NSExpression *_subexpression;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000597535
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000597d06
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000597c5d
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000597b88
- (unsigned long long)hash;	// IMP=0x0000000000597b34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000597a83
- (id)predicateFormat;	// IMP=0x00000000005979c9
- (id)subexpression;	// IMP=0x00000000005979b8
- (id)variable;	// IMP=0x000000000059799b
- (id)assignmentVariable;	// IMP=0x000000000059798a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000597901
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005976c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005975c5
- (void)allowEvaluation;	// IMP=0x000000000059753d
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;	// IMP=0x000000000059749b
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;	// IMP=0x0000000000597416
- (void)dealloc;	// IMP=0x000000000059739b

@end

