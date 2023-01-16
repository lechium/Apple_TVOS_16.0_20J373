//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsSegmentBlob : PBCodable
{
    unsigned int _confidence;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    _Bool _hasSpaceAfter;	// 24 = 0x18
    struct {
        unsigned int confidence:1;
        unsigned int hasSpaceAfter:1;
    } _has;	// 28 = 0x1c
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool hasSpaceAfter; // @synthesize hasSpaceAfter=_hasSpaceAfter;
@property(nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d3237
- (unsigned long long)hash;	// IMP=0x00000000001d31ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d3113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d3066
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d3003
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d2f7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d2f6e
- (id)dictionaryRepresentation;	// IMP=0x00000000001d2bcf
- (id)description;	// IMP=0x00000000001d2b35
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool hasHasSpaceAfter;
@property(nonatomic) _Bool hasConfidence;
- (void)dealloc;	// IMP=0x00000000001d2a2f

@end
