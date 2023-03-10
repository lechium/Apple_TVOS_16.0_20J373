//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x001000000015579b
- (void).cxx_destruct;	// IMP=0x0000000000156227
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001560cd
- (unsigned long long)hash;	// IMP=0x00000000001560b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000156016
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000155e53
- (void)copyTo:(id)arg1;	// IMP=0x0000000000155d8c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000155c5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000155c4f
- (id)dictionaryRepresentation;	// IMP=0x000000000015585b
- (id)description;	// IMP=0x00000000001557ac
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015577e
- (unsigned long long)cryptoSessionsCount;	// IMP=0x0000000000155761
- (void)addCryptoSessions:(id)arg1;	// IMP=0x00000000001556f7
- (void)clearCryptoSessions;	// IMP=0x00000000001556da

@end

