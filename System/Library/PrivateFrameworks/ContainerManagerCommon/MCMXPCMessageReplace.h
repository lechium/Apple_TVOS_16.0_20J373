//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageReplace
{
    MCMConcreteContainerIdentity *_containerIdentityOld;	// 8 = 0x8
    MCMConcreteContainerIdentity *_containerIdentityNew;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069680
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // @synthesize containerIdentityNew=_containerIdentityNew;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // @synthesize containerIdentityOld=_containerIdentityOld;
- (unsigned int)disposition;	// IMP=0x000000000006956f
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000006910e

@end

