//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLServerNoticeAction : PBCodable
{
    NSString *_notice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000168c64
- (unsigned long long)hash;	// IMP=0x0000000000168c47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000168bad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000168b35
- (void)writeTo:(id)arg1;	// IMP=0x0000000000168b11
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000168b04
- (id)dictionaryRepresentation;	// IMP=0x0000000000168aa8
- (id)description;	// IMP=0x00000000001689f9

@end
