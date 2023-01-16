//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainersForAccountPredicate : CNPredicate
{
    _Bool _includesDisabledContainers;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000055e15
- (void).cxx_destruct;	// IMP=0x0000000000056299
@property(readonly, nonatomic) _Bool includesDisabledContainers; // @synthesize includesDisabledContainers=_includesDisabledContainers;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000055fb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055f17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055e1d
- (id)initWithAccountIdentifier:(id)arg1 includingDisabledContainers:(_Bool)arg2;	// IMP=0x0000000000055d4e
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000055d38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

