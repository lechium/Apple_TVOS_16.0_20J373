//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDUnlockSessionAuthToken : PBCodable
{
    NSData *_authToken;	// 8 = 0x8
    unsigned int _errorCode;	// 16 = 0x10
    unsigned int _sessionID;	// 20 = 0x14
    unsigned int _version;	// 24 = 0x18
    CDStruct_e173124d _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000161fa3
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *authToken; // @synthesize authToken=_authToken;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000161eab
- (unsigned long long)hash;	// IMP=0x0010000000161e0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000161cf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000161c24
- (void)copyTo:(id)arg1;	// IMP=0x0010000000161b81
- (void)writeTo:(id)arg1;	// IMP=0x0010000000161ad5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000161ac8
- (id)dictionaryRepresentation;	// IMP=0x00100000001615f5
- (id)description;	// IMP=0x0010000000161546
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasAuthToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

