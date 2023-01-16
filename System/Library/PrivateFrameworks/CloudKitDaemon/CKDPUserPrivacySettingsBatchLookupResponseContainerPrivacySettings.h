//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable
{
    NSMutableArray *_applicationBundles;	// 8 = 0x8
    NSString *_applicationContainer;	// 16 = 0x10
    int _applicationContainerEnvironment;	// 24 = 0x18
    CKDPUserPrivacySettings *_userPrivacySettings;	// 32 = 0x20
    struct {
        unsigned int applicationContainerEnvironment:1;
    } _has;	// 40 = 0x28
}

+ (Class)applicationBundleType;	// IMP=0x001000000005330e
- (void).cxx_destruct;	// IMP=0x0000000000054135
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000053ef1
- (unsigned long long)hash;	// IMP=0x0000000000053e5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000053d32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053af8
- (void)copyTo:(id)arg1;	// IMP=0x00000000000539cb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000053829
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005381c
- (id)dictionaryRepresentation;	// IMP=0x00000000000533e3
- (id)description;	// IMP=0x0000000000053334
@property(readonly, nonatomic) _Bool hasUserPrivacySettings;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000532f1
- (unsigned long long)applicationBundlesCount;	// IMP=0x00000000000532d4
- (void)addApplicationBundle:(id)arg1;	// IMP=0x000000000005326a
- (void)clearApplicationBundles;	// IMP=0x000000000005324d
- (int)StringAsApplicationContainerEnvironment:(id)arg1;	// IMP=0x00000000000531e6
- (id)applicationContainerEnvironmentAsString:(int)arg1;	// IMP=0x0000000000053190
@property(nonatomic) _Bool hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) _Bool hasApplicationContainer;

@end
