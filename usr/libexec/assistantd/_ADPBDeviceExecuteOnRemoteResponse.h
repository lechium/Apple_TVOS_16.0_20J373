//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _ADPBDeviceExecuteOnRemoteResponse : PBCodable
{
    NSData *_content;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000095480
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000095437
- (unsigned long long)hash;	// IMP=0x001000000009541a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000095380
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000095308
- (void)copyTo:(id)arg1;	// IMP=0x00100000000952de
- (void)writeTo:(id)arg1;	// IMP=0x00100000000952ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000952ad
- (id)dictionaryRepresentation;	// IMP=0x00100000000950df
- (id)description;	// IMP=0x0010000000095030
@property(readonly, nonatomic) _Bool hasContent;

@end

