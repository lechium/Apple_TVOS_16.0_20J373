//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl
{
    id <RBSProcessIdentifier> _identifier;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0060000000033f08
- (void).cxx_destruct;	// IMP=0x0000000000033fe3
@property(readonly, nonatomic) id <RBSProcessIdentifier> identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000033f3a
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000033f10
- (id)description;	// IMP=0x0000000000033e84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033dff
- (unsigned long long)hash;	// IMP=0x0000000000033da9
- (id)processPredicate;	// IMP=0x0000000000033d8d
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000033d70
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000033c87

@end

