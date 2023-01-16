//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AMSBag, NSSet, NSString, PBSUserProfile, TVSettingsAccountsFacadePasswordSetting;

@interface TVSettingsUser : NSObject
{
    _Bool _isPrimary;	// 8 = 0x8
    _Bool _hasiCloudAccount;	// 9 = 0x9
    _Bool _hasiTunesAccount;	// 10 = 0xa
    _Bool _hasGameCenterAccount;	// 11 = 0xb
    _Bool _hasAllAccounts;	// 12 = 0xc
    _Bool _canBeRemoved;	// 13 = 0xd
    _Bool _canSignOutOfiTunes;	// 14 = 0xe
    NSString *_identifier;	// 16 = 0x10
    NSString *_shortName;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_iCloudUsername;	// 40 = 0x28
    NSString *_iTunesUsername;	// 48 = 0x30
    NSString *_gameCenterUsername;	// 56 = 0x38
    NSSet *_accountIdentifiers;	// 64 = 0x40
    long long _badgeCount;	// 72 = 0x48
    TVSettingsAccountsFacadePasswordSetting *_passwordSetting;	// 80 = 0x50
    long long _groupRecommendationsConsent;	// 88 = 0x58
    AMSBag *_amsBag;	// 96 = 0x60
    ACAccountStore *_accountStore;	// 104 = 0x68
    long long _profileType;	// 112 = 0x70
    PBSUserProfile *_userProfile;	// 120 = 0x78
}

+ (id)keyPathsForValuesAffectingName;	// IMP=0x004000000008a5ff
- (void).cxx_destruct;	// IMP=0x002000000008b473
@property(readonly, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(nonatomic) long long groupRecommendationsConsent; // @synthesize groupRecommendationsConsent=_groupRecommendationsConsent;
@property(readonly, nonatomic) TVSettingsAccountsFacadePasswordSetting *passwordSetting; // @synthesize passwordSetting=_passwordSetting;
@property(readonly, nonatomic) _Bool canSignOutOfiTunes; // @synthesize canSignOutOfiTunes=_canSignOutOfiTunes;
@property(readonly, nonatomic) _Bool canBeRemoved; // @synthesize canBeRemoved=_canBeRemoved;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) _Bool hasAllAccounts; // @synthesize hasAllAccounts=_hasAllAccounts;
@property(readonly, nonatomic) NSSet *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(readonly, nonatomic) NSString *gameCenterUsername; // @synthesize gameCenterUsername=_gameCenterUsername;
@property(readonly, nonatomic) _Bool hasGameCenterAccount; // @synthesize hasGameCenterAccount=_hasGameCenterAccount;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) _Bool hasiTunesAccount; // @synthesize hasiTunesAccount=_hasiTunesAccount;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) _Bool hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_refreshGroupRecommendationsConsent;	// IMP=0x001000000008b312
- (long long)_groupRecommendationsConsentFromPBSConsent:(long long)arg1;	// IMP=0x001000000008b2fb
- (void)_updateWithUserProfile:(id)arg1 postKVONotifications:(_Bool)arg2;	// IMP=0x001000000008a9c4
- (unsigned long long)hash;	// IMP=0x001000000008a9ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008a921
- (id)description;	// IMP=0x001000000008a8af
- (void)setIsUpdatingGroupRecommendationsConsent:(_Bool)arg1;	// IMP=0x001000000008a5d9
- (void)updateWithUserProfile:(id)arg1;	// IMP=0x001000000008a40f
- (id)initWithUserProfile:(id)arg1 amsBag:(id)arg2;	// IMP=0x001000000008a2e2

@end

