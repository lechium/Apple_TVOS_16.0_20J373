//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RMDeviceIdentity : NSObject
{
    NSObject *_identityLock;	// 8 = 0x8
    struct __SecKey *_privateKey;	// 16 = 0x10
    NSArray *_certificates;	// 24 = 0x18
}

+ (id)deviceIdentityForTesting;	// IMP=0x002000000002b554
+ (id)sharedDeviceIdentity;	// IMP=0x001000000002b4ff
- (void).cxx_destruct;	// IMP=0x002000000002c28d
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (void)_persistIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 fileName:(id)arg3 isBAA:(_Bool)arg4;	// IMP=0x001000000002c0e0
- (void)_copyPersistedIdentityWithFileName:(id)arg1 isBAA:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002bf58
- (void)_fetchOrCreateSelfSignedCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bc9a
- (void)_issueDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bc26
- (void)_fetchDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bc14
- (void)deviceIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b81e
- (void)_cachePrivateKey:(struct __SecKey *)arg1 certificates:(id)arg2;	// IMP=0x001000000002b6e8
- (_Bool)_validDeviceIdentityCache;	// IMP=0x001000000002b5dc
- (id)init;	// IMP=0x001000000002b56d

@end

