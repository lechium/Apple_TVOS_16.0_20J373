//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_minimumVersionEtag;	// 16 = 0x10
    CKDPRecordIdentifier *_recordIdentifier;	// 24 = 0x18
    CKDPRequestedFields *_requestedFields;	// 32 = 0x20
}

+ (id)options;	// IMP=0x001000000013b348
- (void).cxx_destruct;	// IMP=0x000000000013bdf2
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSString *minimumVersionEtag; // @synthesize minimumVersionEtag=_minimumVersionEtag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013bc6d
- (unsigned long long)hash;	// IMP=0x000000000013bbe9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013babd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b9d3
- (void)copyTo:(id)arg1;	// IMP=0x000000000013b930
- (Class)responseClass;	// IMP=0x000000000013b91f
- (unsigned int)requestTypeCode;	// IMP=0x000000000013b914
- (void)writeTo:(id)arg1;	// IMP=0x000000000013b87d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013b870
- (id)dictionaryRepresentation;	// IMP=0x000000000013b49b
- (id)description;	// IMP=0x000000000013b3ec
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasMinimumVersionEtag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end
