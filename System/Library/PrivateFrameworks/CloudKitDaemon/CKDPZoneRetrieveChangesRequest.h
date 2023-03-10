//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest
{
    unsigned int _maxChangedZones;	// 8 = 0x8
    NSData *_syncContinuationToken;	// 16 = 0x10
    struct {
        unsigned int maxChangedZones:1;
    } _has;	// 24 = 0x18
}

+ (id)options;	// IMP=0x001000000032aead
- (void).cxx_destruct;	// IMP=0x000000000032b608
@property(nonatomic) unsigned int maxChangedZones; // @synthesize maxChangedZones=_maxChangedZones;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032b570
- (unsigned long long)hash;	// IMP=0x000000000032b51e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032b45d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032b3c5
- (void)copyTo:(id)arg1;	// IMP=0x000000000032b362
- (Class)responseClass;	// IMP=0x000000000032b351
- (unsigned int)requestTypeCode;	// IMP=0x000000000032b346
- (void)writeTo:(id)arg1;	// IMP=0x000000000032b2e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000032b2d5
- (id)dictionaryRepresentation;	// IMP=0x000000000032b006
- (id)description;	// IMP=0x000000000032af57
@property(nonatomic) _Bool hasMaxChangedZones;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;

@end

