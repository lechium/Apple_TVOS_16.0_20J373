//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBDeviceGetDataRequest : PBRequest
{
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00200000000a2461
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000023097a
- (unsigned long long)hash;	// IMP=0x0010000000230972
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000023092d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002308f4
- (void)copyTo:(id)arg1;	// IMP=0x00100000002308ee
- (void)writeTo:(id)arg1;	// IMP=0x00100000002308e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002308db
- (id)dictionaryRepresentation;	// IMP=0x00100000002307bd
- (id)description;	// IMP=0x001000000023070e
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1bb9
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013726f

@end

