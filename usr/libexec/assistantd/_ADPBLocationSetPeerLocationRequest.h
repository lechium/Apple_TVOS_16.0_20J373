//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface _ADPBLocationSetPeerLocationRequest : PBRequest
{
    NSData *_codedLocation;	// 8 = 0x8
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x00100000002365ad
- (void).cxx_destruct;	// IMP=0x001000000010e6ce
@property(retain, nonatomic) NSData *codedLocation; // @synthesize codedLocation=_codedLocation;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000010e685
- (unsigned long long)hash;	// IMP=0x001000000010e668
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010e5ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010e556
- (void)copyTo:(id)arg1;	// IMP=0x001000000010e52c
- (void)writeTo:(id)arg1;	// IMP=0x001000000010e508
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000010e4fb
- (id)dictionaryRepresentation;	// IMP=0x001000000010e32d
- (id)description;	// IMP=0x001000000010e27e
@property(readonly, nonatomic) _Bool hasCodedLocation;
- (void)_ad_performForPeerLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb4b1
- (void)ad_setLocation:(id)arg1;	// IMP=0x00100000001c0edc
- (id)ad_location;	// IMP=0x00100000001c0e2a

@end
