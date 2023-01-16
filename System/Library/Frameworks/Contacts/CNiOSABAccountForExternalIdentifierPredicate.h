//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForExternalIdentifierPredicate : CNPredicate
{
    NSString *_externalIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008ae71
- (void).cxx_destruct;	// IMP=0x000000000008b06d
@property(readonly, copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000008afca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008af4d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008ae79
- (id)initWithAccountExternalIdentifier:(id)arg1;	// IMP=0x000000000008adbc
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000008ada8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
