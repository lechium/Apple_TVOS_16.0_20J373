//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPInternalTestConfig : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001f3c
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000001e8f
- (unsigned long long)hash;	// IMP=0x0000000000001e42
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001d7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001cdc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000001c79
- (void)writeTo:(id)arg1;	// IMP=0x0000000000001c1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000001c0f
- (id)dictionaryRepresentation;	// IMP=0x00000000000019f8
- (id)description;	// IMP=0x0000000000001949
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

