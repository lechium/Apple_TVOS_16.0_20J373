//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKCDPCodeServiceRequestServiceClientConfig;

@interface CKCDPCodeServiceRequestClientConfig : PBCodable
{
    CKCDPCodeServiceRequestServiceClientConfig *_config;	// 8 = 0x8
    int _serviceType;	// 16 = 0x10
    struct {
        unsigned int serviceType:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000030e81b
@property(retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config; // @synthesize config=_config;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000030e779
- (unsigned long long)hash;	// IMP=0x000000000030e72c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030e667
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030e5d7
- (void)copyTo:(id)arg1;	// IMP=0x000000000030e574
- (void)writeTo:(id)arg1;	// IMP=0x000000000030e510
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030e503
- (id)dictionaryRepresentation;	// IMP=0x000000000030e1a3
- (id)description;	// IMP=0x000000000030e0f4
@property(readonly, nonatomic) _Bool hasConfig;
- (int)StringAsServiceType:(id)arg1;	// IMP=0x000000000030dfea
- (id)serviceTypeAsString:(int)arg1;	// IMP=0x000000000030df9f
@property(nonatomic) _Bool hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;

@end

