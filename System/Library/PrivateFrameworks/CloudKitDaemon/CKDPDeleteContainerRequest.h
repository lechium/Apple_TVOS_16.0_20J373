//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPDeleteContainerRequest : PBRequest
{
}

+ (id)options;	// IMP=0x001000000021178e
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000211a6f
- (unsigned long long)hash;	// IMP=0x0000000000211a67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000211a22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002119e9
- (void)copyTo:(id)arg1;	// IMP=0x00000000002119e3
- (Class)responseClass;	// IMP=0x00000000002119d2
- (unsigned int)requestTypeCode;	// IMP=0x00000000002119c7
- (void)writeTo:(id)arg1;	// IMP=0x00000000002119c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002119b4
- (id)dictionaryRepresentation;	// IMP=0x000000000021188d
- (id)description;	// IMP=0x00000000002117de

@end
