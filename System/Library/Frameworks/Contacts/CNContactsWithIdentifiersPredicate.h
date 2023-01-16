//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNContactsWithIdentifiersPredicate : CNPredicate
{
    NSMutableDictionary *_internalIdentifiers;	// 24 = 0x18
    NSArray *_identifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e24dd
- (void).cxx_destruct;	// IMP=0x00000000000e2d05
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (unsigned long long)hash;	// IMP=0x00000000000e2c3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2b06
- (id)description;	// IMP=0x00000000000e29ea
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000e2664
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e25e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e24e5
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000000e2414

@end
