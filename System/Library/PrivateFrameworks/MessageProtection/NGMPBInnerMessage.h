//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBInnerMessage : PBCodable
{
    unsigned int _counter;	// 8 = 0x8
    NSData *_debugInfo;	// 16 = 0x10
    NSData *_ktGossipData;	// 24 = 0x18
    NSData *_message;	// 32 = 0x20
    struct {
        unsigned int counter:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000018c9c
@property(retain, nonatomic) NSData *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) NSData *ktGossipData; // @synthesize ktGossipData=_ktGossipData;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000018b7a
- (unsigned long long)hash;	// IMP=0x0000000000018ae4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000189bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000188d4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000018836
- (void)writeTo:(id)arg1;	// IMP=0x0000000000018793
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000018786
- (id)dictionaryRepresentation;	// IMP=0x0000000000018423
- (id)description;	// IMP=0x0000000000018374
@property(readonly, nonatomic) _Bool hasDebugInfo;
@property(readonly, nonatomic) _Bool hasKtGossipData;
@property(nonatomic) _Bool hasCounter;
- (id)attributes;	// IMP=0x000000000000b99f

@end

