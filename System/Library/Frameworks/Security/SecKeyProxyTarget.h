//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject
{
    id _key;	// 8 = 0x8
    NSData *_certificate;	// 16 = 0x10
    SecKeyProxy *_publicKeyProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b6695
- (void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b647c
- (void)getPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b63b8
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6364
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b623d
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b61c1
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6155
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6101
- (void)initializeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b60ef
@property(readonly, nonatomic) struct __SecKey *key;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;	// IMP=0x00000000000b604c

@end
