//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface XDCCancelInstallRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c64ec
- (unsigned long long)hash;	// IMP=0x00100000000c64cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c6435
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c63bd
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c63a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c622b
- (id)dictionaryRepresentation;	// IMP=0x00100000000c61cf
- (id)description;	// IMP=0x00100000000c6120

@end

