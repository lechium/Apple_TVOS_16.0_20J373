//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenForm : PBCodable
{
    NSString *_value;	// 8 = 0x8
    int _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011474db
- (unsigned long long)hash;	// IMP=0x000000000114749c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011473f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000114736e
- (void)writeTo:(id)arg1;	// IMP=0x000000000114730f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001147300
- (id)jsonRepresentation;	// IMP=0x00000000011472f6
- (id)dictionaryRepresentation;	// IMP=0x0000000001147219
- (id)description;	// IMP=0x000000000114716a

@end

