//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPUserPrivacySettingsResetRequest : PBRequest
{
}

+ (id)options;	// IMP=0x001000000029f520
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029f801
- (unsigned long long)hash;	// IMP=0x000000000029f7f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029f7b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029f77b
- (void)copyTo:(id)arg1;	// IMP=0x000000000029f775
- (Class)responseClass;	// IMP=0x000000000029f764
- (unsigned int)requestTypeCode;	// IMP=0x000000000029f759
- (void)writeTo:(id)arg1;	// IMP=0x000000000029f753
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029f746
- (id)dictionaryRepresentation;	// IMP=0x000000000029f61f
- (id)description;	// IMP=0x000000000029f570

@end

