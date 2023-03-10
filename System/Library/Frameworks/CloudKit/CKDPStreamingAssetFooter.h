//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable
{
    NSData *_md5;	// 8 = 0x8
    int _status;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fe86d
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000fe7f7
- (unsigned long long)hash;	// IMP=0x00000000000fe7bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fe711
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe68b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000fe65b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fe5e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fe3d8
- (id)dictionaryRepresentation;	// IMP=0x00000000000fe304
- (id)description;	// IMP=0x00000000000fe255
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000000fe1f3
- (id)statusAsString:(int)arg1;	// IMP=0x00000000000fe19e

@end

