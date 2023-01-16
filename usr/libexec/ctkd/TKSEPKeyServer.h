//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TKSEPKey;

@interface TKSEPKeyServer : NSObject
{
    TKSEPKey *_cachedKey;	// 8 = 0x8
    TKSEPKey *_cachedSystemKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000a2f0
- (void)lifetimeControlKey:(id)arg1 type:(long long)arg2 authContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a20b
- (void)attestWithKey:(id)arg1 keyToAttest:(id)arg2 nonce:(id)arg3 authContext:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a082
- (void)recryptWithKey:(id)arg1 data:(id)arg2 attributes:(id)arg3 authContext:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009f70
- (void)computeSharedSecretWithKey:(id)arg1 publicKey:(id)arg2 authContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009e70
- (void)signWithKey:(id)arg1 digest:(id)arg2 authContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009d70
- (void)deleteKey:(id)arg1 authContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009c93
- (void)getAttributesOfKey:(id)arg1 authContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009ba8
- (id)keyForObjectID:(id)arg1 authContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000992c
- (void)generateKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(id)arg3 options:(id)arg4 authContext:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000009713
- (id)serverAttributesOfKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000009514

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

