//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrandTrigger : PBCodable
{
    double _relevance;	// 8 = 0x8
    NSString *_trigger;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000129c780
- (unsigned long long)hash;	// IMP=0x000000000129c65a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000129c5aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000129c520
- (void)writeTo:(id)arg1;	// IMP=0x000000000129c4bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000129c4b0
- (id)jsonRepresentation;	// IMP=0x000000000129c282
- (id)dictionaryRepresentation;	// IMP=0x000000000129c1b8
- (id)description;	// IMP=0x000000000129c109

@end

