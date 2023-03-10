//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable
{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;	// 8 = 0x8
    NSData *_serializedResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e19e6
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // @synthesize attestationResponse=_attestationResponse;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e191f
- (unsigned long long)hash;	// IMP=0x00000000002e18d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e180a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e176c
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e1709
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e16ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e169f
- (id)dictionaryRepresentation;	// IMP=0x00000000002e1407
- (id)description;	// IMP=0x00000000002e1358
@property(readonly, nonatomic) _Bool hasAttestationResponse;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end

