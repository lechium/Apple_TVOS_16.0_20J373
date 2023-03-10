//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest
{
    unsigned int _maxChanges;	// 8 = 0x8
    NSData *_serverChangeToken;	// 16 = 0x10
    _Bool _wantsChanges;	// 24 = 0x18
    struct {
        unsigned int maxChanges:1;
        unsigned int wantsChanges:1;
    } _has;	// 28 = 0x1c
}

+ (id)options;	// IMP=0x001000000015768c
- (void).cxx_destruct;	// IMP=0x000000000015801e
@property(nonatomic) _Bool wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned int maxChanges; // @synthesize maxChanges=_maxChanges;
@property(retain, nonatomic) NSData *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000157f59
- (unsigned long long)hash;	// IMP=0x0000000000157eea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000157df7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000157d42
- (void)copyTo:(id)arg1;	// IMP=0x0000000000157cc2
- (Class)responseClass;	// IMP=0x0000000000157cb1
- (unsigned int)requestTypeCode;	// IMP=0x0000000000157ca6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000157c17
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000157c0a
- (id)dictionaryRepresentation;	// IMP=0x000000000015782e
- (id)description;	// IMP=0x000000000015777f
@property(nonatomic) _Bool hasWantsChanges;
@property(nonatomic) _Bool hasMaxChanges;
@property(readonly, nonatomic) _Bool hasServerChangeToken;

@end

