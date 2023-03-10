//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest
{
    CKDPSubscription *_subscription;	// 8 = 0x8
}

+ (id)options;	// IMP=0x001000000018b640
- (void).cxx_destruct;	// IMP=0x000000000018bbbe
@property(retain, nonatomic) CKDPSubscription *subscription; // @synthesize subscription=_subscription;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018bb3c
- (unsigned long long)hash;	// IMP=0x000000000018bb1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018ba85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018ba0d
- (void)copyTo:(id)arg1;	// IMP=0x000000000018b9e3
- (Class)responseClass;	// IMP=0x000000000018b9d2
- (unsigned int)requestTypeCode;	// IMP=0x000000000018b9c7
- (void)writeTo:(id)arg1;	// IMP=0x000000000018b9a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018b996
- (id)dictionaryRepresentation;	// IMP=0x000000000018b754
- (id)description;	// IMP=0x000000000018b6a5
@property(readonly, nonatomic) _Bool hasSubscription;

@end

