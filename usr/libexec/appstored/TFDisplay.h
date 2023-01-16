//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TFDisplay : PBCodable
{
    unsigned int _heightPixels;	// 8 = 0x8
    unsigned int _widthPixels;	// 12 = 0xc
    struct {
        unsigned int heightPixels:1;
        unsigned int widthPixels:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int heightPixels; // @synthesize heightPixels=_heightPixels;
@property(nonatomic) unsigned int widthPixels; // @synthesize widthPixels=_widthPixels;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017652b
- (unsigned long long)hash;	// IMP=0x00100000001764e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000176434
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001763b7
- (void)copyTo:(id)arg1;	// IMP=0x001000000017635d
- (void)writeTo:(id)arg1;	// IMP=0x00100000001762ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001762df
- (id)dictionaryRepresentation;	// IMP=0x0010000000175f67
- (id)description;	// IMP=0x0010000000175eb8
@property(nonatomic) _Bool hasHeightPixels;
@property(nonatomic) _Bool hasWidthPixels;

@end
