//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCPingMessage : PBCodable
{
    NSString *_uuid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000098333
- (unsigned long long)hash;	// IMP=0x0010000000098316
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009827c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000098204
- (void)writeTo:(id)arg1;	// IMP=0x00100000000981e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009806b
- (id)dictionaryRepresentation;	// IMP=0x001000000009800f
- (id)description;	// IMP=0x0010000000097f60

@end

