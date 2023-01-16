//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable
{
    long long _representativeItemCloudID;	// 8 = 0x8
    long long _storeAdamID;	// 16 = 0x10
    NSString *_albumName;	// 24 = 0x18
    NSString *_playbackAuthorizationToken;	// 32 = 0x20
    CDStruct_c223d907 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001896d8
- (unsigned long long)hash;	// IMP=0x000000000018964a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018952f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018944f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001893a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000189395
- (id)dictionaryRepresentation;	// IMP=0x000000000018924e
- (id)description;	// IMP=0x000000000018919f

@end

