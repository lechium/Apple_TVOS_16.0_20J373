//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OTApplicantToSponsorRound2M1 : PBCodable
{
    NSString *_peerID;	// 8 = 0x8
    NSData *_permanentInfo;	// 16 = 0x10
    NSData *_permanentInfoSig;	// 24 = 0x18
    NSData *_stableInfo;	// 32 = 0x20
    NSData *_stableInfoSig;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001bbf8
@property(retain, nonatomic) NSData *stableInfoSig; // @synthesize stableInfoSig=_stableInfoSig;
@property(retain, nonatomic) NSData *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain, nonatomic) NSData *permanentInfoSig; // @synthesize permanentInfoSig=_permanentInfoSig;
@property(retain, nonatomic) NSData *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ba7c
- (unsigned long long)hash;	// IMP=0x000000000001b9d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b879
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b761
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b69e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b5ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b5dd
- (id)dictionaryRepresentation;	// IMP=0x000000000001b4e5
- (id)description;	// IMP=0x000000000001b436
@property(readonly, nonatomic) _Bool hasStableInfoSig;
@property(readonly, nonatomic) _Bool hasStableInfo;
@property(readonly, nonatomic) _Bool hasPermanentInfoSig;
@property(readonly, nonatomic) _Bool hasPermanentInfo;
@property(readonly, nonatomic) _Bool hasPeerID;

@end

