//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMDAccountIdentifier.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier
{
    NSString *_identifierString;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001edf88
+ (id)namespace;	// IMP=0x00600000001edf58
- (void).cxx_destruct;	// IMP=0x00000000001edf45
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ede94
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eddf9
- (id)senderCorrelationIdentifier;	// IMP=0x00000000001edde4
- (_Bool)isAuthenticated;	// IMP=0x00000000001edddc
- (id)kind;	// IMP=0x00000000001eddcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001edcfb
- (id)initWithIdentifierString:(id)arg1;	// IMP=0x00000000001edbcc
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001edb16

@end

