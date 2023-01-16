//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPRecordResolveTokenRequest : PBRequest
{
    NSString *_participantId;	// 8 = 0x8
    NSMutableArray *_rootRecordDesiredKeys;	// 16 = 0x10
    NSString *_routingKey;	// 24 = 0x18
    NSData *_shortTokenHash;	// 32 = 0x20
    _Bool _forceFetch;	// 40 = 0x28
    _Bool _shouldFetchRootRecord;	// 41 = 0x29
    struct {
        unsigned int forceFetch:1;
        unsigned int shouldFetchRootRecord:1;
    } _has;	// 44 = 0x2c
}

+ (Class)rootRecordDesiredKeysType;	// IMP=0x00100000000e3a4c
+ (id)options;	// IMP=0x00100000000e3860
- (void).cxx_destruct;	// IMP=0x00000000000e4b1b
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) NSMutableArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property(nonatomic) _Bool forceFetch; // @synthesize forceFetch=_forceFetch;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e487f
- (unsigned long long)hash;	// IMP=0x00000000000e4798
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e45f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e437b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e4211
- (Class)responseClass;	// IMP=0x00000000000e4200
- (unsigned int)requestTypeCode;	// IMP=0x00000000000e41f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e4015
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e4008
- (id)dictionaryRepresentation;	// IMP=0x00000000000e3b21
- (id)description;	// IMP=0x00000000000e3a72
@property(readonly, nonatomic) _Bool hasParticipantId;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3a2f
- (unsigned long long)rootRecordDesiredKeysCount;	// IMP=0x00000000000e3a12
- (void)addRootRecordDesiredKeys:(id)arg1;	// IMP=0x00000000000e39a8
- (void)clearRootRecordDesiredKeys;	// IMP=0x00000000000e398b
@property(nonatomic) _Bool hasShouldFetchRootRecord;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(nonatomic) _Bool hasForceFetch;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end
