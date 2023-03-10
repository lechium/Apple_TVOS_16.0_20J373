//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedApp : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_alternateAppAdamIds;	// 24 = 0x18
    NSString *_preferredAppAdamId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateAppAdamIds:1;
        unsigned int read_preferredAppAdamId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)associatedAppForPlaceData:(id)arg1;	// IMP=0x0010000000a42e1b
- (void).cxx_destruct;	// IMP=0x0000000000b45ae4
- (unsigned long long)hash;	// IMP=0x0000000000b45a8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b459ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b456c5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b45415
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b45406
- (id)jsonRepresentation;	// IMP=0x0000000000b45085
- (id)dictionaryRepresentation;	// IMP=0x0000000000b44e75
- (id)description;	// IMP=0x0000000000b44dc6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b44597
- (id)init;	// IMP=0x0000000000b4453b

@end

