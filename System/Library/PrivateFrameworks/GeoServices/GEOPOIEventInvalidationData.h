//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPOIEventInvalidationData : PBCodable
{
    NSData *_cacheInvalidationData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001108c06
- (unsigned long long)hash;	// IMP=0x0000000001108be9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001108b4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001108ad7
- (void)writeTo:(id)arg1;	// IMP=0x0000000001108ab3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011088eb
- (id)jsonRepresentation;	// IMP=0x00000000011088dc
- (id)dictionaryRepresentation;	// IMP=0x00000000011087fe
- (id)description;	// IMP=0x000000000110874f

@end

