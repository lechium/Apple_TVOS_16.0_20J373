//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c4104
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c32cc
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000c2a70
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00900000000c278d
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;	// IMP=0x00900000000c1bef
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1 conformsToMultiUserRestrictions:(_Bool)arg2;	// IMP=0x00900000000c0b9f
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00900000000c0b25
- (id)_gkAllCredentials;	// IMP=0x00900000000c0af7
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00900000000c0541
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000c04e2
- (id)_gkCredentialForAltDSID:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000c0038
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00900000000be4bf
@end

