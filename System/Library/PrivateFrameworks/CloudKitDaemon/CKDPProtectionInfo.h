//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable
{
    NSData *_protectionInfo;	// 8 = 0x8
    NSString *_protectionInfoTag;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c978
@property(retain, nonatomic) NSString *protectionInfoTag; // @synthesize protectionInfoTag=_protectionInfoTag;
@property(retain, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c8cb
- (unsigned long long)hash;	// IMP=0x000000000001c87e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c7b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c718
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c6b5
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c658
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c64b
- (id)dictionaryRepresentation;	// IMP=0x000000000001c438
- (id)description;	// IMP=0x000000000001c389
@property(readonly, nonatomic) _Bool hasProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasProtectionInfo;

@end

