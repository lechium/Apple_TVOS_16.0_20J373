//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class RBSXPCServiceIdentity;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity
{
    RBSXPCServiceIdentity *_serviceIdentity;	// 32 = 0x20
}

+ (_Bool)shouldManageExtensionWithExtensionPoint:(id)arg1;	// IMP=0x00600000000072a3
- (void).cxx_destruct;	// IMP=0x0000000000007ffe
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x0000000000007f77
- (_Bool)isEqualToIdentity:(id)arg1;	// IMP=0x0000000000007ef2
- (unsigned long long)hash;	// IMP=0x0000000000007ed5
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000007e1e
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000007db1
- (id)initWithDecodeFromJob:(id)arg1;	// IMP=0x00000000000079ef
- (id)encodeForJob;	// IMP=0x0000000000007783
- (_Bool)inheritsCoalitionBand;	// IMP=0x0000000000007710
- (_Bool)supportsLaunchingDirectly;	// IMP=0x0000000000007643
- (id)validationToken;	// IMP=0x0000000000007626
- (id)persona;	// IMP=0x0000000000007609
- (id)uuid;	// IMP=0x00000000000075ec
- (id)hostIdentifier;	// IMP=0x0000000000007591
- (id)hostIdentity;	// IMP=0x0000000000007536
- (id)xpcServiceIdentifier;	// IMP=0x00000000000074db
- (_Bool)isAnonymous;	// IMP=0x00000000000074d3
- (_Bool)isXPCService;	// IMP=0x00000000000074cb
- (unsigned char)defaultManageFlags;	// IMP=0x00000000000072ab
- (_Bool)isExtension;	// IMP=0x000000000000724f
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x0000000000007244

@end

