//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NGMPBP256Key, NSData;

__attribute__((visibility("hidden")))
@interface NGMPBDevicePreKey : PBCodable
{
    double _timestamp;	// 8 = 0x8
    NGMPBP256Key *_dhKey;	// 16 = 0x10
    NSData *_prekeySignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001758a
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NGMPBP256Key *dhKey; // @synthesize dhKey=_dhKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001748d
- (unsigned long long)hash;	// IMP=0x0000000000017344
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017265
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000171b5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000017145
- (void)writeTo:(id)arg1;	// IMP=0x00000000000170c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000170bc
- (id)dictionaryRepresentation;	// IMP=0x0000000000016d4d
- (id)description;	// IMP=0x0000000000016c9e
@property(readonly, nonatomic) _Bool hasDhKey;

@end

