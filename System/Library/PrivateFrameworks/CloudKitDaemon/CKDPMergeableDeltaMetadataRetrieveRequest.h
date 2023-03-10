//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSData;

@interface CKDPMergeableDeltaMetadataRetrieveRequest : PBRequest
{
    NSData *_continuation;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
}

+ (id)options;	// IMP=0x0010000000228bb0
- (void).cxx_destruct;	// IMP=0x00000000002292bb
@property(retain, nonatomic) NSData *continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002291f4
- (unsigned long long)hash;	// IMP=0x00000000002291a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002290df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000229041
- (void)copyTo:(id)arg1;	// IMP=0x0000000000228fde
- (void)writeTo:(id)arg1;	// IMP=0x0000000000228f81
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000228f74
- (id)dictionaryRepresentation;	// IMP=0x0000000000228cd9
- (id)description;	// IMP=0x0000000000228c2a
@property(readonly, nonatomic) _Bool hasContinuation;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

