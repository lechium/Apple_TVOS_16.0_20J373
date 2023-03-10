//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedDevice : PBCodable
{
    NSData *_pushToken;	// 8 = 0x8
    NSMutableArray *_trustedServices;	// 16 = 0x10
}

+ (Class)trustedServicesType;	// IMP=0x00200000001ed820
- (void).cxx_destruct;	// IMP=0x00200000001eee40
@property(retain, nonatomic) NSMutableArray *trustedServices; // @synthesize trustedServices=_trustedServices;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001eeb10
- (unsigned long long)hash;	// IMP=0x00100000001eeab0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ee920
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ee620
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ee4d0
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ee270
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ee210
- (id)dictionaryRepresentation;	// IMP=0x00100000001ed920
- (id)description;	// IMP=0x00100000001ed850
- (id)trustedServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001ed7e0
- (unsigned long long)trustedServicesCount;	// IMP=0x00100000001ed7a0
- (void)addTrustedServices:(id)arg1;	// IMP=0x00100000001ed700
- (void)clearTrustedServices;	// IMP=0x00100000001ed6c0
@property(readonly, nonatomic) _Bool hasPushToken;

@end

