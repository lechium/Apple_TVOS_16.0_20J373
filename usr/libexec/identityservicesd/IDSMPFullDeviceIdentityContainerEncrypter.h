//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSRegistrationKeyManager, NSString;

@interface IDSMPFullDeviceIdentityContainerEncrypter : NSObject
{
    IDSRegistrationKeyManager *_registrationKeyManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000570c0
@property(readonly, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
- (_Bool)verifySignedData:(id)arg1 matchesData:(id)arg2 withSecPublicDeviceIdentity:(struct __SecKey *)arg3 diversifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000056d70
- (_Bool)verifySignedData:(id)arg1 matchesData:(id)arg2 forType:(long long)arg3 withPublicDeviceIdentity:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000056ac0
- (id)batchSignDatas:(id)arg1 withType:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000567b0
- (id)signData:(id)arg1 usingApplicationKeyIndex:(unsigned short)arg2 diversifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000055b50
- (id)signData:(id)arg1 withSignatureType:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000055850
- (id)_validateParametersWithFullIdentityToUse:(id)arg1 fullIdentity:(id)arg2 publicIdentity:(id)arg3 inputData:(id)arg4 identifier:(id)arg5 forDecryption:(_Bool)arg6;	// IMP=0x0010000000055500
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(_Bool)arg4;	// IMP=0x0010000000054410
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id *)arg3 usingIdentifier:(id)arg4 isRetry:(_Bool)arg5;	// IMP=0x0010000000053780
- (id)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 withPublicDeviceIdentityContainer:(id)arg3 usedIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x0010000000052af0
- (id)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 withPublicDeviceIdentityContainer:(id)arg3 usingIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000052000
- (id)initWithRegistrationKeyManager:(id)arg1;	// IMP=0x0010000000051f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

