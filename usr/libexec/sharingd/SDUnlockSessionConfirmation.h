//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDUnlockSessionConfirmation : PBCodable
{
    unsigned int _sessionID;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    _Bool _success;	// 16 = 0x10
    _Bool _supportsACK;	// 17 = 0x11
    _Bool _suppressNotification;	// 18 = 0x12
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int success:1;
        unsigned int supportsACK:1;
        unsigned int suppressNotification:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool suppressNotification; // @synthesize suppressNotification=_suppressNotification;
@property(nonatomic) _Bool supportsACK; // @synthesize supportsACK=_supportsACK;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000dbe9
- (unsigned long long)hash;	// IMP=0x001000000000db4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000da07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000d93f
- (void)copyTo:(id)arg1;	// IMP=0x001000000000d89a
- (void)writeTo:(id)arg1;	// IMP=0x001000000000d7c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000d7bc
- (id)dictionaryRepresentation;	// IMP=0x001000000000d15a
- (id)description;	// IMP=0x001000000000d0ab
@property(nonatomic) _Bool hasSuppressNotification;
@property(nonatomic) _Bool hasSupportsACK;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
