//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSData;

@interface CKDPMergeableDeltaRetrieveRequest : PBRequest
{
    NSData *_continuation;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000001cb90d
- (void).cxx_destruct;	// IMP=0x00000000001cc018
@property(retain, nonatomic) NSData *continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cbf51
- (unsigned long long)hash;	// IMP=0x00000000001cbf04
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cbe3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cbd9e
- (void)copyTo:(id)arg1;	// IMP=0x00000000001cbd3b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cbcde
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cbcd1
- (id)dictionaryRepresentation;	// IMP=0x00000000001cba36
- (id)description;	// IMP=0x00000000001cb987
@property(readonly, nonatomic) _Bool hasContinuation;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

