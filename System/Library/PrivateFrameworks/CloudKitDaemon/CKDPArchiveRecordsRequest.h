//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest
{
    NSMutableArray *_idsToArchives;	// 8 = 0x8
}

+ (Class)idsToArchiveType;	// IMP=0x001000000004fa74
+ (id)options;	// IMP=0x001000000004f963
- (void).cxx_destruct;	// IMP=0x0000000000050500
@property(retain, nonatomic) NSMutableArray *idsToArchives; // @synthesize idsToArchives=_idsToArchives;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000503a6
- (unsigned long long)hash;	// IMP=0x0000000000050389
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000502ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005012c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000050065
- (void)writeTo:(id)arg1;	// IMP=0x000000000004ff35
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004ff28
- (id)dictionaryRepresentation;	// IMP=0x000000000004fb34
- (id)description;	// IMP=0x000000000004fa85
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004fa57
- (unsigned long long)idsToArchivesCount;	// IMP=0x000000000004fa3a
- (void)addIdsToArchive:(id)arg1;	// IMP=0x000000000004f9d0
- (void)clearIdsToArchives;	// IMP=0x000000000004f9b3

@end

