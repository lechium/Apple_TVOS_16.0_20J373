//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable
{
    CKDPUserAlias *_alias;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    CKDPIdentifier *_identifier;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    CKDPProtectionInfo *_protectionInfo;	// 40 = 0x28
    _Bool _isInNetwork;	// 48 = 0x30
    struct {
        unsigned int isInNetwork:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000001990ab
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000198ec1
- (unsigned long long)hash;	// IMP=0x0000000000198df2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198c55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000198b1d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000198a3a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000198961
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000198954
- (id)dictionaryRepresentation;	// IMP=0x0000000000198436
- (id)description;	// IMP=0x0000000000198387
@property(nonatomic) _Bool hasIsInNetwork;
@property(nonatomic) _Bool isInNetwork; // @synthesize isInNetwork=_isInNetwork;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasAlias;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

