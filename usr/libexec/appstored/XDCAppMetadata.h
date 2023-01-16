//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface XDCAppMetadata : PBCodable
{
    unsigned long long _downloaderID;	// 8 = 0x8
    unsigned long long _externalVersionID;	// 16 = 0x10
    unsigned long long _itemID;	// 24 = 0x18
    unsigned long long _purchaserID;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSString *_appleID;	// 48 = 0x30
    NSString *_artworkURLString;	// 56 = 0x38
    NSString *_betaBuildGroupID;	// 64 = 0x40
    NSString *_bundleID;	// 72 = 0x48
    NSString *_bundleVersion;	// 80 = 0x50
    NSString *_externalIDString;	// 88 = 0x58
    NSString *_itemName;	// 96 = 0x60
    NSString *_manifestURLString;	// 104 = 0x68
    NSString *_messagesArtworkURLString;	// 112 = 0x70
    NSData *_packageDPInfo;	// 120 = 0x78
    NSData *_packageSINF;	// 128 = 0x80
    NSString *_packageURLString;	// 136 = 0x88
    NSMutableArray *_provisioningProfiles;	// 144 = 0x90
    NSString *_redownloadParams;	// 152 = 0x98
    NSString *_storeCohort;	// 160 = 0xa0
    NSString *_storeFront;	// 168 = 0xa8
    int _type;	// 176 = 0xb0
    NSString *_variantID;	// 184 = 0xb8
    NSString *_vendorName;	// 192 = 0xc0
    _Bool _containsMessagesExtension;	// 200 = 0xc8
    _Bool _isBeta;	// 201 = 0xc9
    _Bool _isStoreApp;	// 202 = 0xca
    _Bool _isSystemApp;	// 203 = 0xcb
    _Bool _launchProhibited;	// 204 = 0xcc
    _Bool _skipIfInstalled;	// 205 = 0xcd
    _Bool _suppressDialogs;	// 206 = 0xce
    struct {
        unsigned int downloaderID:1;
        unsigned int externalVersionID:1;
        unsigned int itemID:1;
        unsigned int purchaserID:1;
        unsigned int type:1;
        unsigned int containsMessagesExtension:1;
        unsigned int isBeta:1;
        unsigned int isStoreApp:1;
        unsigned int isSystemApp:1;
        unsigned int launchProhibited:1;
        unsigned int skipIfInstalled:1;
        unsigned int suppressDialogs:1;
    } _has;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x002000000011f1ed
- (unsigned long long)hash;	// IMP=0x001000000011ed8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011e69d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011e045
- (void)writeTo:(id)arg1;	// IMP=0x001000000011db65
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000011db58
- (id)dictionaryRepresentation;	// IMP=0x001000000011c95d
- (id)description;	// IMP=0x001000000011c8ae

@end

