//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOBusinessResolutionResponse : PBCodable
{
    NSString *_businessName;	// 8 = 0x8
    unsigned long long _businessUID;	// 16 = 0x10
    int _status;	// 24 = 0x18
    struct {
        unsigned int has_businessUID:1;
        unsigned int has_status:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000e3491b
- (void).cxx_destruct;	// IMP=0x0000000000e352dc
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e35242
- (unsigned long long)hash;	// IMP=0x0000000000e351bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e35093
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e34fde
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e34f44
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e34eb7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e34b6e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e34915
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e34908
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e345c6
- (id)jsonRepresentation;	// IMP=0x0000000000e345bc
- (id)dictionaryRepresentation;	// IMP=0x0000000000e343a5
- (id)description;	// IMP=0x0000000000e342f6
@property(nonatomic) _Bool hasBusinessUID;
@property(nonatomic) unsigned long long businessUID;
@property(retain, nonatomic) NSString *businessName;
@property(readonly, nonatomic) _Bool hasBusinessName;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000e34108
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000e3402d
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;

@end

