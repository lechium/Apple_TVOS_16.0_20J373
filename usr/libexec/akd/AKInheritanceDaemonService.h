//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFService.h>

@class NSString;

@interface AKInheritanceDaemonService : AAFService
{
}

- (void)_executeRequestWithContext:(id)arg1 urlBagKey:(id)arg2 shouldSignWithIdentityToken:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x002000000007ea98
- (void)_setupBeneficiaryAliasWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e7e4
- (void)updateBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e684
- (void)removeBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e524
- (void)setupBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e316
- (void)fetchManifestOptionsWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e1de
- (void)configureExportedInterface:(id)arg1;	// IMP=0x001000000007de6e
- (id)exportedProtocol;	// IMP=0x001000000007de5d
- (id)exportedObject;	// IMP=0x001000000007de54
- (id)serviceName;	// IMP=0x001000000007de40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
