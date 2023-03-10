//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable
{
    NSMutableArray *_recordVersions;	// 8 = 0x8
    _Bool _isDeleted;	// 16 = 0x10
    struct {
        unsigned int isDeleted:1;
    } _has;	// 20 = 0x14
}

+ (Class)recordVersionsType;	// IMP=0x0010000000133e4b
- (void).cxx_destruct;	// IMP=0x0000000000134afd
@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000134955
- (unsigned long long)hash;	// IMP=0x0000000000134908
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000134838
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013464b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000134566
- (void)writeTo:(id)arg1;	// IMP=0x0000000000134410
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000134403
- (id)dictionaryRepresentation;	// IMP=0x0000000000133f0b
- (id)description;	// IMP=0x0000000000133e5c
- (id)recordVersionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000133e2e
- (unsigned long long)recordVersionsCount;	// IMP=0x0000000000133e11
- (void)addRecordVersions:(id)arg1;	// IMP=0x0000000000133da7
- (void)clearRecordVersions;	// IMP=0x0000000000133d8a
@property(nonatomic) _Bool hasIsDeleted;

@end

