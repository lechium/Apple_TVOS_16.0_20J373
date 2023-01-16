//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDConversationParticipant, CSDMessagingConversationParticipantAssociation, CSDMessagingHandle, NSData;

@interface CSDMessagingConversationParticipant : PBCodable
{
    unsigned long long _identifier;	// 8 = 0x8
    CSDMessagingConversationParticipantAssociation *_association;	// 16 = 0x10
    int _avMode;	// 24 = 0x18
    NSData *_avcData;	// 32 = 0x20
    CSDMessagingHandle *_handle;	// 40 = 0x28
    unsigned int _options;	// 48 = 0x30
    unsigned int _sharePlayProtocolVersion;	// 52 = 0x34
    unsigned int _version;	// 56 = 0x38
    _Bool _guestModeEnabled;	// 60 = 0x3c
    _Bool _isGFTDowngradeToOneToOneAvailable;	// 61 = 0x3d
    _Bool _isGondolaCallingAvailable;	// 62 = 0x3e
    _Bool _isLightweight;	// 63 = 0x3f
    _Bool _isMirageAvailable;	// 64 = 0x40
    _Bool _isMomentsAvailable;	// 65 = 0x41
    _Bool _isScreenSharingAvailable;	// 66 = 0x42
    _Bool _isUPlusNDowngradeAvailable;	// 67 = 0x43
    struct {
        unsigned int identifier:1;
        unsigned int avMode:1;
        unsigned int options:1;
        unsigned int sharePlayProtocolVersion:1;
        unsigned int version:1;
        unsigned int guestModeEnabled:1;
        unsigned int isGFTDowngradeToOneToOneAvailable:1;
        unsigned int isGondolaCallingAvailable:1;
        unsigned int isLightweight:1;
        unsigned int isMirageAvailable:1;
        unsigned int isMomentsAvailable:1;
        unsigned int isScreenSharingAvailable:1;
        unsigned int isUPlusNDowngradeAvailable:1;
    } _has;	// 68 = 0x44
}

+ (id)participantWithCSDConversationParticipant:(id)arg1;	// IMP=0x0010000000172c0b
+ (id)participantWithCSDConversationJoinContext:(id)arg1;	// IMP=0x0010000000172a42
- (void).cxx_destruct;	// IMP=0x0010000000012c5b
@property(nonatomic) _Bool isUPlusNDowngradeAvailable; // @synthesize isUPlusNDowngradeAvailable=_isUPlusNDowngradeAvailable;
@property(retain, nonatomic) CSDMessagingConversationParticipantAssociation *association; // @synthesize association=_association;
@property(nonatomic) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(nonatomic) _Bool isGFTDowngradeToOneToOneAvailable; // @synthesize isGFTDowngradeToOneToOneAvailable=_isGFTDowngradeToOneToOneAvailable;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(nonatomic) unsigned int sharePlayProtocolVersion; // @synthesize sharePlayProtocolVersion=_sharePlayProtocolVersion;
@property(nonatomic) _Bool isLightweight; // @synthesize isLightweight=_isLightweight;
@property(nonatomic) _Bool isMirageAvailable; // @synthesize isMirageAvailable=_isMirageAvailable;
@property(nonatomic) _Bool isGondolaCallingAvailable; // @synthesize isGondolaCallingAvailable=_isGondolaCallingAvailable;
@property(nonatomic) _Bool isScreenSharingAvailable; // @synthesize isScreenSharingAvailable=_isScreenSharingAvailable;
@property(nonatomic) _Bool isMomentsAvailable; // @synthesize isMomentsAvailable=_isMomentsAvailable;
@property(retain, nonatomic) NSData *avcData; // @synthesize avcData=_avcData;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000128ea
- (unsigned long long)hash;	// IMP=0x0010000000012682
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000122ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000012061
- (void)copyTo:(id)arg1;	// IMP=0x0010000000011e54
- (void)writeTo:(id)arg1;	// IMP=0x0010000000011c19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000011c0c
- (id)dictionaryRepresentation;	// IMP=0x0010000000010ca0
- (id)description;	// IMP=0x0010000000010bf1
- (int)StringAsAvMode:(id)arg1;	// IMP=0x0010000000010b5f
- (id)avModeAsString:(int)arg1;	// IMP=0x0010000000010b16
@property(nonatomic) _Bool hasAvMode;
@property(nonatomic) int avMode; // @synthesize avMode=_avMode;
@property(nonatomic) _Bool hasIsUPlusNDowngradeAvailable;
@property(readonly, nonatomic) _Bool hasAssociation;
@property(nonatomic) _Bool hasGuestModeEnabled;
@property(nonatomic) _Bool hasIsGFTDowngradeToOneToOneAvailable;
@property(nonatomic) _Bool hasOptions;
@property(nonatomic) _Bool hasSharePlayProtocolVersion;
@property(nonatomic) _Bool hasIsLightweight;
@property(nonatomic) _Bool hasIsMirageAvailable;
@property(nonatomic) _Bool hasIsGondolaCallingAvailable;
@property(nonatomic) _Bool hasIsScreenSharingAvailable;
@property(nonatomic) _Bool hasIsMomentsAvailable;
@property(readonly, nonatomic) _Bool hasAvcData;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) CSDConversationParticipant *csdConversationParticipant;

@end

