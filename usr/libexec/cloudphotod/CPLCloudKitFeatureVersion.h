//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CPLCloudKitFeatureVersion : PBCodable
{
    long long _version;	// 8 = 0x8
    NSString *_etag;	// 16 = 0x10
    NSData *_serverToken;	// 24 = 0x18
    struct {
        unsigned int version:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000128398
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSData *serverToken; // @synthesize serverToken=_serverToken;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001282b9
- (unsigned long long)hash;	// IMP=0x001000000012823c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000128147
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000128085
- (void)copyTo:(id)arg1;	// IMP=0x0010000000128001
- (void)writeTo:(id)arg1;	// IMP=0x0010000000127f7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000127f72
- (id)dictionaryRepresentation;	// IMP=0x0010000000127c4e
- (id)description;	// IMP=0x0010000000127b9f
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasServerToken;
@property(nonatomic) _Bool hasVersion;

@end

