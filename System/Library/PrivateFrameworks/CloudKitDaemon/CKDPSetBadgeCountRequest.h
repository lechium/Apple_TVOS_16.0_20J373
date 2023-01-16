//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPSetBadgeCountRequest : PBRequest
{
    unsigned int _badgeCount;	// 8 = 0x8
    _Bool _forDevice;	// 12 = 0xc
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;	// 16 = 0x10
}

+ (id)options;	// IMP=0x0010000000091a84
@property(nonatomic) _Bool forDevice; // @synthesize forDevice=_forDevice;
@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000092206
- (unsigned long long)hash;	// IMP=0x00000000000921c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000920fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092081
- (void)copyTo:(id)arg1;	// IMP=0x0000000000092027
- (Class)responseClass;	// IMP=0x0000000000092016
- (unsigned int)requestTypeCode;	// IMP=0x000000000009200b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000091f99
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000091f8c
- (id)dictionaryRepresentation;	// IMP=0x0000000000091c11
- (id)description;	// IMP=0x0000000000091b62
@property(nonatomic) _Bool hasForDevice;
@property(nonatomic) _Bool hasBadgeCount;

@end
