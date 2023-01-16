//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenUnregistrationRequest : PBRequest
{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0010000000248c99
- (void).cxx_destruct;	// IMP=0x0000000000249217
@property(retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody; // @synthesize tokenRegistrationBody=_tokenRegistrationBody;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000249195
- (unsigned long long)hash;	// IMP=0x0000000000249178
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002490de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000249066
- (void)copyTo:(id)arg1;	// IMP=0x000000000024903c
- (Class)responseClass;	// IMP=0x000000000024902b
- (unsigned int)requestTypeCode;	// IMP=0x0000000000249020
- (void)writeTo:(id)arg1;	// IMP=0x0000000000248ffc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000248fef
- (id)dictionaryRepresentation;	// IMP=0x0000000000248dad
- (id)description;	// IMP=0x0000000000248cfe
@property(readonly, nonatomic) _Bool hasTokenRegistrationBody;

@end

