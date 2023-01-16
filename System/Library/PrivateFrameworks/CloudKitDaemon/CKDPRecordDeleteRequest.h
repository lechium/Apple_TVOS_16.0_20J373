//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPRecordDeleteRequest : PBRequest
{
    NSString *_etag;	// 8 = 0x8
    NSMutableArray *_pluginFields;	// 16 = 0x10
    NSMutableArray *_publicKeys;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    _Bool _participantKeyLost;	// 40 = 0x28
    struct {
        unsigned int participantKeyLost:1;
    } _has;	// 44 = 0x2c
}

+ (Class)publicKeysType;	// IMP=0x001000000016eec2
+ (Class)pluginFieldsType;	// IMP=0x001000000016edab
+ (id)options;	// IMP=0x001000000016ec70
- (void).cxx_destruct;	// IMP=0x0000000000170320
@property(retain, nonatomic) NSMutableArray *publicKeys; // @synthesize publicKeys=_publicKeys;
@property(nonatomic) _Bool participantKeyLost; // @synthesize participantKeyLost=_participantKeyLost;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016ffbe
- (unsigned long long)hash;	// IMP=0x000000000016ff10
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016fdac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016fa4d
- (void)copyTo:(id)arg1;	// IMP=0x000000000016f883
- (Class)responseClass;	// IMP=0x000000000016f872
- (unsigned int)requestTypeCode;	// IMP=0x000000000016f867
- (void)writeTo:(id)arg1;	// IMP=0x000000000016f5f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016f5e4
- (id)dictionaryRepresentation;	// IMP=0x000000000016ef82
- (id)description;	// IMP=0x000000000016eed3
- (id)publicKeysAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016eea5
- (unsigned long long)publicKeysCount;	// IMP=0x000000000016ee88
- (void)addPublicKeys:(id)arg1;	// IMP=0x000000000016ee1e
- (void)clearPublicKeys;	// IMP=0x000000000016ee01
@property(nonatomic) _Bool hasParticipantKeyLost;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016ed8e
- (unsigned long long)pluginFieldsCount;	// IMP=0x000000000016ed71
- (void)addPluginFields:(id)arg1;	// IMP=0x000000000016ed07
- (void)clearPluginFields;	// IMP=0x000000000016ecea
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end
