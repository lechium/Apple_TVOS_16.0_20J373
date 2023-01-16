//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NGMPBP256Key, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NGMPBFullDeviceIdentity : PBCodable
{
    NSMutableArray *_prekeys;	// 8 = 0x8
    NGMPBP256Key *_signingKey;	// 16 = 0x10
}

+ (Class)prekeysType;	// IMP=0x001000000001767c
- (void).cxx_destruct;	// IMP=0x00000000000182d4
@property(retain, nonatomic) NSMutableArray *prekeys; // @synthesize prekeys=_prekeys;
@property(retain, nonatomic) NGMPBP256Key *signingKey; // @synthesize signingKey=_signingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000180f6
- (unsigned long long)hash;	// IMP=0x00000000000180a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017fe1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017e08
- (void)copyTo:(id)arg1;	// IMP=0x0000000000017d2c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017bd7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017bca
- (id)dictionaryRepresentation;	// IMP=0x000000000001773c
- (id)description;	// IMP=0x000000000001768d
- (id)prekeysAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001765f
- (unsigned long long)prekeysCount;	// IMP=0x0000000000017642
- (void)addPrekeys:(id)arg1;	// IMP=0x00000000000175d8
- (void)clearPrekeys;	// IMP=0x00000000000175bb

@end

