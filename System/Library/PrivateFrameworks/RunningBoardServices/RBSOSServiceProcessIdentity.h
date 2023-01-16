//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSOSServiceProcessIdentity : RBSProcessIdentity
{
    NSString *_jobLabel;	// 32 = 0x20
    unsigned char _type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000018e28
- (_Bool)treatedAsAnAppByFrontBoard:(id *)arg1;	// IMP=0x0000000000018db1
- (void)setOsServiceType:(unsigned char)arg1;	// IMP=0x0000000000018d9b
- (unsigned char)osServiceType;	// IMP=0x0000000000018d8a
- (_Bool)hasConsistentLaunchdJob;	// IMP=0x0000000000018d82
- (_Bool)supportsLaunchingDirectly;	// IMP=0x0000000000018d7a
- (_Bool)isAnonymous;	// IMP=0x0000000000018d72
- (_Bool)isDaemon;	// IMP=0x0000000000018d6a
- (_Bool)isAngel;	// IMP=0x0000000000018d62
- (id)consistentLaunchdJobLabel;	// IMP=0x0000000000018d3d
- (id)angelJobLabel;	// IMP=0x0000000000018d18
- (id)daemonJobLabel;	// IMP=0x0000000000018cf3
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000018c1c
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000018b7b
- (id)debugDescription;	// IMP=0x0000000000018a34
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x000000000001899f
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x0000000000018994
- (id)_initUnknownOSServiceWithJobLabel:(id)arg1;	// IMP=0x0000000000018977
- (id)_initDaemonWithJobLabel:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3;	// IMP=0x000000000001895f
- (id)_initAngelWithJobLabel:(id)arg1;	// IMP=0x0000000000018942
- (id)_initServiceWithJobLabel:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3 type:(unsigned char)arg4;	// IMP=0x00000000000187c5

@end

