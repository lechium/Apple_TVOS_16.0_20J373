//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable
{
    unsigned long long _accountFlags;	// 8 = 0x8
    long long _lastWebActivityUTCMills;	// 16 = 0x10
    long long _photosWebAccessTimestamp;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    _Bool _corporateSharingEnabled;	// 40 = 0x28
    struct {
        unsigned int accountFlags:1;
        unsigned int lastWebActivityUTCMills:1;
        unsigned int photosWebAccessTimestamp:1;
        unsigned int corporateSharingEnabled:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000f9aad
@property(nonatomic) unsigned long long accountFlags; // @synthesize accountFlags=_accountFlags;
@property(nonatomic) long long photosWebAccessTimestamp; // @synthesize photosWebAccessTimestamp=_photosWebAccessTimestamp;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long lastWebActivityUTCMills; // @synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills;
@property(nonatomic) _Bool corporateSharingEnabled; // @synthesize corporateSharingEnabled=_corporateSharingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f9983
- (unsigned long long)hash;	// IMP=0x00000000000f98c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f977a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f968b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f95c9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f94f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f94ec
- (id)dictionaryRepresentation;	// IMP=0x00000000000f8f1b
- (id)description;	// IMP=0x00000000000f8e6c
@property(nonatomic) _Bool hasAccountFlags;
@property(nonatomic) _Bool hasPhotosWebAccessTimestamp;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasLastWebActivityUTCMills;
@property(nonatomic) _Bool hasCorporateSharingEnabled;

@end

