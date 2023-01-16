//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSDate, NSNumber, NSString;

@interface IDSProvisionTemporaryPhoneMessage : FTIDSMessage
{
    NSString *_profileID;	// 232 = 0xe8
    NSString *_authToken;	// 240 = 0xf0
    NSString *_countryCode;	// 248 = 0xf8
    NSString *_networkCode;	// 256 = 0x100
    NSNumber *_responseStatus;	// 264 = 0x108
    NSData *_responseCertificate;	// 272 = 0x110
    NSDate *_responseCertificateExpiration;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0020000000207de0
@property(copy) NSDate *responseCertificateExpiration; // @synthesize responseCertificateExpiration=_responseCertificateExpiration;
@property(copy) NSData *responseCertificate; // @synthesize responseCertificate=_responseCertificate;
@property(copy) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy) NSString *profileID; // @synthesize profileID=_profileID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000002075a0
- (id)additionalMessageHeaders;	// IMP=0x0010000000207380
- (id)messageBody;	// IMP=0x00100000002070b0
- (id)requiredKeys;	// IMP=0x0010000000207010
- (id)bagKey;	// IMP=0x0010000000206ff0
- (long long)responseCommand;	// IMP=0x0010000000206fd0
- (long long)command;	// IMP=0x0010000000206fb0
- (_Bool)wantsBinaryPush;	// IMP=0x0010000000206f90
- (_Bool)wantsCompressedBody;	// IMP=0x0010000000206f70
- (_Bool)wantsHTTPHeaders;	// IMP=0x0010000000206f50
- (_Bool)wantsBagKey;	// IMP=0x0010000000206f30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000206d20
- (void)addPhoneAuthenticationCertificate:(id)arg1 withUserID:(id)arg2;	// IMP=0x0010000000206c20
- (id)init;	// IMP=0x0010000000206af0

@end

