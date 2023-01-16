//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface CKDPAnonymousShareAddRequest : PBRequest
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000001336ab
- (void).cxx_destruct;	// IMP=0x0000000000133d14
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000133c67
- (unsigned long long)hash;	// IMP=0x0000000000133c1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000133b52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000133ab4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000133a51
- (void)writeTo:(id)arg1;	// IMP=0x00000000001339f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001339e7
- (id)dictionaryRepresentation;	// IMP=0x00000000001337d4
- (id)description;	// IMP=0x0000000000133725
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

