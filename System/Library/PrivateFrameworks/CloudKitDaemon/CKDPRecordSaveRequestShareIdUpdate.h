//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShareIdentifier;

@interface CKDPRecordSaveRequestShareIdUpdate : PBCodable
{
    CKDPShareIdentifier *_shareId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000337d86
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000337d04
- (unsigned long long)hash;	// IMP=0x0000000000337ce7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000337c4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000337bd5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000337bab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000337b87
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000337b7a
- (id)dictionaryRepresentation;	// IMP=0x0000000000337938
- (id)description;	// IMP=0x0000000000337889
@property(readonly, nonatomic) _Bool hasShareId;

@end
