//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _ADPBDeviceStringKeyValuePair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002c212c
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000002c207f
- (unsigned long long)hash;	// IMP=0x00100000002c2032
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002c1f6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002c1ecc
- (void)copyTo:(id)arg1;	// IMP=0x00100000002c1e69
- (void)writeTo:(id)arg1;	// IMP=0x00100000002c1e0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002c1dff
- (id)dictionaryRepresentation;	// IMP=0x00100000002c1be8
- (id)description;	// IMP=0x00100000002c1b39
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

