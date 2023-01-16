//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchClientResolvedIntent : PBCodable
{
    NSString *_name;	// 8 = 0x8
    int _resolvedItemType;	// 16 = 0x10
    struct {
        unsigned int has_resolvedItemType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000a9fb7b
- (unsigned long long)hash;	// IMP=0x0000000000a9fb28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a9fa67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a9f9cf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a9f96b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a9f95c
- (id)jsonRepresentation;	// IMP=0x0000000000a9f6c7
- (id)dictionaryRepresentation;	// IMP=0x0000000000a9f5c1
- (id)description;	// IMP=0x0000000000a9f512

@end

