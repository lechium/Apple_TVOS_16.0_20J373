//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

__attribute__((visibility("hidden")))
@interface ICPBDGSRequest : PBRequest
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;	// 8 = 0x8
    ICPBDGSStartDelegationRequest *_startDelegationRequest;	// 16 = 0x10
    unsigned int _uniqueID;	// 24 = 0x18
    struct {
        unsigned int uniqueID:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000166cda
- (unsigned long long)hash;	// IMP=0x0000000000166c5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000166b65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000166aa4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000166a23
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000166a16
- (id)dictionaryRepresentation;	// IMP=0x00000000001668e7
- (id)description;	// IMP=0x0000000000166838

@end
