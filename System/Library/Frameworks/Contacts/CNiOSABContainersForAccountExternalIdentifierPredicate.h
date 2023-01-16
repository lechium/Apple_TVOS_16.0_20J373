//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate
{
    NSString *_accountExternalIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d0752
- (void).cxx_destruct;	// IMP=0x00000000000d09bc
@property(readonly, copy, nonatomic) NSString *accountExternalIdentifier; // @synthesize accountExternalIdentifier=_accountExternalIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x00000000000d08d2
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000d08ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d082e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d075a
- (id)initWithAccountExternalIdentifier:(id)arg1;	// IMP=0x00000000000d0698
- (id)initWithPredicate:(id)arg1;	// IMP=0x00000000000d0684

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

