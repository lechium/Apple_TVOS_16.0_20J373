//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSData, NSDictionary, NSString;

@interface IDSAuthenticateMessage : IDSBaseMessage
{
    NSString *_realm;	// 232 = 0xe8
    NSData *_csr;	// 240 = 0xf0
    NSDictionary *_authenticationInfo;	// 248 = 0xf8
    NSString *_userID;	// 256 = 0x100
    NSData *_responseCertificate;	// 264 = 0x108
    NSString *_responseUserID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000090650
@property(copy) NSString *responseUserID; // @synthesize responseUserID=_responseUserID;
@property(copy) NSData *responseCertificate; // @synthesize responseCertificate=_responseCertificate;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSDictionary *authenticationInfo; // @synthesize authenticationInfo=_authenticationInfo;
@property(copy) NSData *csr; // @synthesize csr=_csr;
@property(copy) NSString *realm; // @synthesize realm=_realm;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000090250
- (_Bool)requiresPushTokenKeys;	// IMP=0x0010000000090230
- (_Bool)allowsServerProvidedLenientAnisetteTimeout;	// IMP=0x00100000000901d0
- (double)anisetteHeadersTimeout;	// IMP=0x00100000000901b0
- (id)additionalMessageHeaders;	// IMP=0x001000000008ffe0
- (id)messageBody;	// IMP=0x001000000008fd90
- (id)requiredKeys;	// IMP=0x001000000008fce0
- (id)bagKey;	// IMP=0x001000000008fc50
- (long long)responseCommand;	// IMP=0x001000000008fc30
- (long long)command;	// IMP=0x001000000008fc10
- (_Bool)wantsBinaryPush;	// IMP=0x001000000008fbf0
- (_Bool)wantsCompressedBody;	// IMP=0x001000000008fbd0
- (_Bool)wantsHTTPHeaders;	// IMP=0x001000000008fbb0
- (_Bool)wantsBagKey;	// IMP=0x001000000008fb90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008f970
- (id)init;	// IMP=0x001000000008f840

@end

