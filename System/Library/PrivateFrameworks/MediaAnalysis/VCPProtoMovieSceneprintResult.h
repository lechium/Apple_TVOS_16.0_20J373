//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000025103b
- (void).cxx_destruct;	// IMP=0x000000000019aa79
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019a9b2
- (unsigned long long)hash;	// IMP=0x000000000019a965
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019a89d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019a7ff
- (void)copyTo:(id)arg1;	// IMP=0x000000000019a78e
- (void)writeTo:(id)arg1;	// IMP=0x000000000019a72f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019a722
- (id)dictionaryRepresentation;	// IMP=0x000000000019a485
- (id)description;	// IMP=0x000000000019a3d6
- (id)exportToLegacyDictionary;	// IMP=0x00000000002511f1

@end

