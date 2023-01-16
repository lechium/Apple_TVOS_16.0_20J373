//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, _MPCProtoTracklistIndexPath;

__attribute__((visibility("hidden")))
@interface _MPCProtoTracklist : PBCodable
{
    NSMutableArray *_accountInfos;	// 8 = 0x8
    NSMutableArray *_containers;	// 16 = 0x10
    int _shuffleMode;	// 24 = 0x18
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;	// 32 = 0x20
    struct {
        unsigned int shuffleMode:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019ad1d
- (unsigned long long)hash;	// IMP=0x000000000019ac84
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019ab5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019a83e
- (void)writeTo:(id)arg1;	// IMP=0x000000000019a5e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019a307
- (id)dictionaryRepresentation;	// IMP=0x0000000000199e52
- (id)description;	// IMP=0x0000000000199da3

@end

