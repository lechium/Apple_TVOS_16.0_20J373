//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable
{
    NSData *_authPutResponse;	// 8 = 0x8
    NSMutableArray *_contentResponseHeaders;	// 16 = 0x10
    NSMutableArray *_uploadTokens;	// 24 = 0x18
}

+ (Class)contentResponseHeadersType;	// IMP=0x00100000002e3447
+ (Class)uploadTokensType;	// IMP=0x00100000002e3360
- (void).cxx_destruct;	// IMP=0x00000000002e46a5
@property(retain, nonatomic) NSMutableArray *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSMutableArray *uploadTokens; // @synthesize uploadTokens=_uploadTokens;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e43cd
- (unsigned long long)hash;	// IMP=0x00000000002e4360
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e4268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e3f39
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e3db5
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e3b7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e3b72
- (id)dictionaryRepresentation;	// IMP=0x00000000002e3507
- (id)description;	// IMP=0x00000000002e3458
- (id)contentResponseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e342a
- (unsigned long long)contentResponseHeadersCount;	// IMP=0x00000000002e340d
- (void)addContentResponseHeaders:(id)arg1;	// IMP=0x00000000002e33a3
- (void)clearContentResponseHeaders;	// IMP=0x00000000002e3386
@property(readonly, nonatomic) _Bool hasAuthPutResponse;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e3343
- (unsigned long long)uploadTokensCount;	// IMP=0x00000000002e3326
- (void)addUploadTokens:(id)arg1;	// IMP=0x00000000002e32bc
- (void)clearUploadTokens;	// IMP=0x00000000002e329f

@end
