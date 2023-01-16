//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedServiceSignatures : PBCodable
{
    NSMutableArray *_serviceSignatures;	// 8 = 0x8
}

+ (Class)serviceSignaturesType;	// IMP=0x002000000043e700
- (void).cxx_destruct;	// IMP=0x002000000043fa80
@property(retain, nonatomic) NSMutableArray *serviceSignatures; // @synthesize serviceSignatures=_serviceSignatures;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000043f7f0
- (unsigned long long)hash;	// IMP=0x001000000043f7b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000043f690
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000043f3e0
- (void)copyTo:(id)arg1;	// IMP=0x001000000043f2d0
- (void)writeTo:(id)arg1;	// IMP=0x001000000043f0a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000043f040
- (id)dictionaryRepresentation;	// IMP=0x001000000043e800
- (id)description;	// IMP=0x001000000043e730
- (id)serviceSignaturesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000043e6c0
- (unsigned long long)serviceSignaturesCount;	// IMP=0x001000000043e680
- (void)addServiceSignatures:(id)arg1;	// IMP=0x001000000043e5e0
- (void)clearServiceSignatures;	// IMP=0x001000000043e5a0

@end
