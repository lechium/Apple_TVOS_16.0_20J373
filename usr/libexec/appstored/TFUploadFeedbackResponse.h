//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface TFUploadFeedbackResponse : PBCodable
{
    NSData *_submissionId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012193a
@property(retain, nonatomic) NSData *submissionId; // @synthesize submissionId=_submissionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001218f1
- (unsigned long long)hash;	// IMP=0x00100000001218d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012183a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001217c2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000121798
- (void)writeTo:(id)arg1;	// IMP=0x0010000000121774
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001215ff
- (id)dictionaryRepresentation;	// IMP=0x00100000001215a3
- (id)description;	// IMP=0x00100000001214f4
@property(readonly, nonatomic) _Bool hasSubmissionId;

@end

