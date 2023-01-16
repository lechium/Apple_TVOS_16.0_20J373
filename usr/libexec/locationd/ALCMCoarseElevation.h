//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface ALCMCoarseElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003bb4b3
- (unsigned long long)hash;	// IMP=0x00100000003bb477
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003bb409
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003bb39a
- (void)copyTo:(id)arg1;	// IMP=0x00100000003bb369
- (void)writeTo:(id)arg1;	// IMP=0x00100000003bb318
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003bb30b
- (id)dictionaryRepresentation;	// IMP=0x00100000003bafc3
- (id)description;	// IMP=0x00100000003baf4c
- (int)StringAsSource:(id)arg1;	// IMP=0x00100000003baf05
- (MISSING_TYPE *)sourceAsString: /* Error: Ran out of types for this method. */;	// IMP=0x00100000003baec6
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end
