//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackResponse : PBCodable
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000722cd9
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000723048
- (unsigned long long)hash;	// IMP=0x000000000072302e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000722fac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000722f73
- (void)copyTo:(id)arg1;	// IMP=0x0000000000722f5f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000722f59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000722e16
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000722cd3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000722cc6
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000722c76
- (id)jsonRepresentation;	// IMP=0x0000000000722c6c
- (id)dictionaryRepresentation;	// IMP=0x0000000000722c15
- (id)description;	// IMP=0x0000000000722b66

@end

