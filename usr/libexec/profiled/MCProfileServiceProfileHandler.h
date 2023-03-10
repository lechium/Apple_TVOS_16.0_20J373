//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MCProfileServiceProfileHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
    NSData *_persistentID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000006b2e8
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000006b1e7
- (void)unsetAside;	// IMP=0x001000000006b103
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000006b01f
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000006ad93
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000006aba4
- (id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id *)arg2 outError:(id *)arg3;	// IMP=0x0010000000069db8
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0010000000069ce1
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0010000000069c0a
- (id)_badIdentityError;	// IMP=0x0010000000069b89
- (void)dealloc;	// IMP=0x0010000000069b43
- (id)initWithProfile:(id)arg1;	// IMP=0x0010000000069a70

@end

