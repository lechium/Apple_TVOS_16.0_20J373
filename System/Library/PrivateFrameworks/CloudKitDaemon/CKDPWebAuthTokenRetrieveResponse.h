//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable
{
    NSString *_containerScopedUserId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015bc64
@property(retain, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015bbb7
- (unsigned long long)hash;	// IMP=0x000000000015bb6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015baa2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015ba04
- (void)copyTo:(id)arg1;	// IMP=0x000000000015b9a1
- (void)writeTo:(id)arg1;	// IMP=0x000000000015b944
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015b937
- (id)dictionaryRepresentation;	// IMP=0x000000000015b722
- (id)description;	// IMP=0x000000000015b673
@property(readonly, nonatomic) _Bool hasContainerScopedUserId;
@property(readonly, nonatomic) _Bool hasToken;

@end

