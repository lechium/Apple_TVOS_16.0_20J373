//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, SecKeyP256Public;

__attribute__((visibility("hidden")))
@interface SecKeyP256Private : NSObject
{
    id _privateKey;	// 8 = 0x8
    NSData *_privateKeyBlob;	// 16 = 0x10
    SecKeyP256Public *_publicKey;	// 24 = 0x18
}

+ (id)generateWithAccessControl:(struct __CFString *)arg1;	// IMP=0x001000000000e6fe
+ (id)generate;	// IMP=0x001000000000e6cd
+ (const struct __CFString *)defaultProtectionClassForPlatform;	// IMP=0x001000000000e6bd
- (void).cxx_destruct;	// IMP=0x000000000000f299
@property(retain, nonatomic) SecKeyP256Public *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSData *privateKeyBlob; // @synthesize privateKeyBlob=_privateKeyBlob;
@property(readonly, nonatomic) id privateKey; // @synthesize privateKey=_privateKey;
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000f07c
- (id)keychainData;	// IMP=0x000000000000f06a
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ef08
- (id)keyAgreement:(id)arg1 error:(id *)arg2 isRetry:(_Bool)arg3;	// IMP=0x000000000000ecd1
- (id)keyAgreement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ecbc
- (id)getPrivateKeyRefWithError:(id *)arg1;	// IMP=0x000000000000eb42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

