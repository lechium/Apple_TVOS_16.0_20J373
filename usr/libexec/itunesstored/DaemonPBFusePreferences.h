//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface DaemonPBFusePreferences : PBCodable
{
    NSMutableArray *_preferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000018d74b
@property(retain, nonatomic) NSMutableArray *preferences; // @synthesize preferences=_preferences;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000018d5f1
- (unsigned long long)hash;	// IMP=0x001000000018d5d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018d53a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018d377
- (void)writeTo:(id)arg1;	// IMP=0x001000000018d247
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000018d23a
- (id)dictionaryRepresentation;	// IMP=0x001000000018ce3e
- (id)description;	// IMP=0x001000000018cd8f
- (id)preferencesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000018cd72
- (unsigned long long)preferencesCount;	// IMP=0x001000000018cd55
- (void)addPreferences:(id)arg1;	// IMP=0x001000000018cceb
- (void)clearPreferences;	// IMP=0x001000000018ccce

@end

