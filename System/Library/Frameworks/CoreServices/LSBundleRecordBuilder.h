//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSRegistrationInfo, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSBundleRecordBuilder
{
    unsigned int _bundleClass;	// 16 = 0x10
    LSRegistrationInfo *_registrationInfo;	// 24 = 0x18
    unsigned char _retries;	// 32 = 0x20
    unsigned int _previousInstallType;	// 36 = 0x24
    unsigned long long _sequenceNumber;	// 40 = 0x28
    _Bool _registerChildItemsTrusted;	// 48 = 0x30
    NSData *_bundleAlias;	// 56 = 0x38
    unsigned long long _bundleFlags;	// 64 = 0x40
    unsigned int _plistContentFlags;	// 72 = 0x48
    unsigned char _iconFlags;	// 76 = 0x4c
    unsigned int _itemFlags;	// 80 = 0x50
    struct LSBundleMoreFlags _moreFlags;	// 84 = 0x54
    struct LSBundleBaseFlags _baseFlags;	// 85 = 0x55
    unsigned int _platform;	// 88 = 0x58
    unsigned int _minSystemVersionPlatform;	// 92 = 0x5c
    unsigned int _hfsType;	// 96 = 0x60
    unsigned int _hfsCreator;	// 100 = 0x64
    unsigned long long _inode;	// 104 = 0x68
    _Bool _canDefineSystemExtensionPoint;	// 112 = 0x70
    NSMutableDictionary *_plistRarities;	// 120 = 0x78
    NSMutableDictionary *_commonInfoPlistEntries;	// 128 = 0x80
    NSArray *_supportedGameControllers;	// 136 = 0x88
    struct LSVersionNumber _sdkVersionNumber;	// 144 = 0x90
    _Bool _containerized;	// 176 = 0xb0
    _Bool _webNotificationPlaceholder;	// 177 = 0xb1
    unsigned char _profileValidationState;	// 178 = 0xb2
    NSNumber *_compatibilityState;	// 184 = 0xb8
    NSNumber *_installFailureReason;	// 192 = 0xc0
    NSString *_version;	// 200 = 0xc8
    NSString *_minSystemVersion;	// 208 = 0xd0
    NSString *_maxSystemVersion;	// 216 = 0xd8
    NSString *_sdkVersion;	// 224 = 0xe0
    NSString *_appStoreToolsBuildVersion;	// 232 = 0xe8
    NSString *_shortVersionString;	// 240 = 0xf0
    NSString *_execPath;	// 248 = 0xf8
    NSArray *_machOUUIDs;	// 256 = 0x100
    NSNumber *_itemID;	// 264 = 0x108
    NSString *_teamID;	// 272 = 0x110
    NSArray *_activityTypes;	// 280 = 0x118
    NSArray *_deviceFamily;	// 288 = 0x120
    NSNumber *_installType;	// 296 = 0x128
    NSString *_identifier;	// 304 = 0x130
    NSString *_displayName;	// 312 = 0x138
    NSString *_shortDisplayName;	// 320 = 0x140
    NSString *_bundleName;	// 328 = 0x148
    NSArray *_alternateNames;	// 336 = 0x150
    NSURL *_dataContainerURL;	// 344 = 0x158
    NSURL *_bundleContainerURL;	// 352 = 0x160
    NSString *_categoryType;	// 360 = 0x168
    NSString *_secondCategoryType;	// 368 = 0x170
    NSString *_vendorName;	// 376 = 0x178
    NSString *_appType;	// 384 = 0x180
    NSString *_signerIdentity;	// 392 = 0x188
    NSString *_codeInfoIdentifier;	// 400 = 0x190
    NSString *_signerOrganization;	// 408 = 0x198
    NSString *_itemName;	// 416 = 0x1a0
    NSNumber *_storefront;	// 424 = 0x1a8
    NSNumber *_versionID;	// 432 = 0x1b0
    NSString *_sourceAppBundleID;	// 440 = 0x1b8
    NSString *_appVariant;	// 448 = 0x1c0
    NSMutableSet *_counterpartAppBundleIDs;	// 456 = 0x1c8
    NSString *_watchKitVersion;	// 464 = 0x1d0
    NSString *_complicationPrincipalClass;	// 472 = 0x1d8
    NSArray *_supportedComplicationFamilies;	// 480 = 0x1e0
    NSString *_ratingLabel;	// 488 = 0x1e8
    NSNumber *_ratingRank;	// 496 = 0x1f0
    NSString *_genre;	// 504 = 0x1f8
    NSNumber *_genreID;	// 512 = 0x200
    NSString *_primaryIconName;	// 520 = 0x208
    NSString *_alternatePrimaryIconName;	// 528 = 0x210
    NSDictionary *_iconsDict;	// 536 = 0x218
    NSArray *_iconFileNames;	// 544 = 0x220
    NSNumber *_purchaserDSID;	// 552 = 0x228
    NSNumber *_downloaderDSID;	// 560 = 0x230
    NSNumber *_familyID;	// 568 = 0x238
    NSNumber *_staticDiskUsage;	// 576 = 0x240
    NSString *_libraryPath;	// 584 = 0x248
    NSArray *_libraryItems;	// 592 = 0x250
    NSArray *_documentClaims;	// 600 = 0x258
    NSArray *_URLClaims;	// 608 = 0x260
    NSArray *_importedTypes;	// 616 = 0x268
    NSArray *_exportedTypes;	// 624 = 0x270
    NSArray *_queriableSchemes;	// 632 = 0x278
    NSDictionary *_pluginPlists;	// 640 = 0x280
    NSDictionary *_pluginMIDicts;	// 648 = 0x288
    NSArray *_driverExtensionPaths;	// 656 = 0x290
    NSDictionary *_groupContainers;	// 664 = 0x298
    NSDictionary *_entitlements;	// 672 = 0x2a0
    NSDictionary *_sandboxEnvironmentVariables;	// 680 = 0x2a8
    NSDictionary *_extensionSDK;	// 688 = 0x2b0
    NSDictionary *_intentDefinitionURLs;	// 696 = 0x2b8
    NSArray *_bgPermittedIdentifiers;	// 704 = 0x2c0
    NSDictionary *_localizedNames;	// 712 = 0x2c8
    NSDictionary *_localizedShortNames;	// 720 = 0x2d0
    NSDictionary *_localizedStrings;	// 728 = 0x2d8
    NSDictionary *_unlocalizedNamesWithContext;	// 736 = 0x2e0
    NSArray *_managedPersonas;	// 744 = 0x2e8
    NSNumber *_directoryClass;	// 752 = 0x2f0
    NSDictionary *_mobileInstallIDs;	// 760 = 0x2f8
    NSArray *_slices;	// 768 = 0x300
    NSNumber *_signatureVersion;	// 776 = 0x308
    NSDictionary *_stashedAppInfo;	// 784 = 0x310
    NSString *_applicationManagementDomain;	// 792 = 0x318
    NSString *_linkedParentBundleID;	// 800 = 0x320
}

- (void).cxx_destruct;	// IMP=0x000000000007b1f7
@property(readonly, nonatomic) NSString *linkedParentBundleID; // @synthesize linkedParentBundleID=_linkedParentBundleID;
@property(readonly, nonatomic) NSString *applicationManagementDomain; // @synthesize applicationManagementDomain=_applicationManagementDomain;
@property(readonly, nonatomic) NSDictionary *stashedAppInfo; // @synthesize stashedAppInfo=_stashedAppInfo;
@property(readonly) NSNumber *signatureVersion; // @synthesize signatureVersion=_signatureVersion;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(readonly) NSDictionary *mobileInstallIDs; // @synthesize mobileInstallIDs=_mobileInstallIDs;
@property(readonly, nonatomic) NSNumber *directoryClass; // @synthesize directoryClass=_directoryClass;
@property(readonly, nonatomic) NSArray *managedPersonas; // @synthesize managedPersonas=_managedPersonas;
@property(readonly, nonatomic) NSDictionary *unlocalizedNamesWithContext; // @synthesize unlocalizedNamesWithContext=_unlocalizedNamesWithContext;
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(readonly, nonatomic) NSDictionary *localizedShortNames; // @synthesize localizedShortNames=_localizedShortNames;
@property(readonly, nonatomic) NSDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(nonatomic) unsigned char profileValidationState; // @synthesize profileValidationState=_profileValidationState;
@property(readonly, nonatomic) NSArray *bgPermittedIdentifiers; // @synthesize bgPermittedIdentifiers=_bgPermittedIdentifiers;
@property(readonly, nonatomic) NSDictionary *intentDefinitionURLs; // @synthesize intentDefinitionURLs=_intentDefinitionURLs;
@property(readonly, nonatomic) NSDictionary *extensionSDK; // @synthesize extensionSDK=_extensionSDK;
@property(readonly, nonatomic) NSDictionary *sandboxEnvironmentVariables; // @synthesize sandboxEnvironmentVariables=_sandboxEnvironmentVariables;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSDictionary *groupContainers; // @synthesize groupContainers=_groupContainers;
@property(readonly, nonatomic) NSArray *driverExtensionPaths; // @synthesize driverExtensionPaths=_driverExtensionPaths;
@property(readonly, nonatomic) NSDictionary *pluginMIDicts; // @synthesize pluginMIDicts=_pluginMIDicts;
@property(readonly, nonatomic) NSDictionary *pluginPlists; // @synthesize pluginPlists=_pluginPlists;
@property(readonly, nonatomic) NSArray *queriableSchemes; // @synthesize queriableSchemes=_queriableSchemes;
@property(readonly, nonatomic) NSArray *exportedTypes; // @synthesize exportedTypes=_exportedTypes;
@property(readonly, nonatomic) NSArray *importedTypes; // @synthesize importedTypes=_importedTypes;
@property(readonly, nonatomic) NSArray *URLClaims; // @synthesize URLClaims=_URLClaims;
@property(readonly, nonatomic) NSArray *documentClaims; // @synthesize documentClaims=_documentClaims;
@property(readonly, nonatomic) NSArray *libraryItems; // @synthesize libraryItems=_libraryItems;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property(readonly, nonatomic) NSNumber *staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(readonly, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, nonatomic) NSArray *iconFileNames; // @synthesize iconFileNames=_iconFileNames;
@property(readonly, nonatomic) NSDictionary *iconsDict; // @synthesize iconsDict=_iconsDict;
@property(readonly, nonatomic) NSString *alternatePrimaryIconName; // @synthesize alternatePrimaryIconName=_alternatePrimaryIconName;
@property(readonly, nonatomic) NSString *primaryIconName; // @synthesize primaryIconName=_primaryIconName;
@property(readonly, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly, nonatomic) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property(readonly, nonatomic) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property(readonly, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;
@property(readonly, nonatomic) NSMutableSet *counterpartAppBundleIDs; // @synthesize counterpartAppBundleIDs=_counterpartAppBundleIDs;
@property(readonly, nonatomic) NSString *appVariant; // @synthesize appVariant=_appVariant;
@property(readonly, nonatomic) NSString *sourceAppBundleID; // @synthesize sourceAppBundleID=_sourceAppBundleID;
@property(readonly, nonatomic) NSNumber *versionID; // @synthesize versionID=_versionID;
@property(readonly, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSString *signerOrganization; // @synthesize signerOrganization=_signerOrganization;
@property(readonly, nonatomic) NSString *codeInfoIdentifier; // @synthesize codeInfoIdentifier=_codeInfoIdentifier;
@property(readonly, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(readonly, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, nonatomic) NSString *secondCategoryType; // @synthesize secondCategoryType=_secondCategoryType;
@property(readonly, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(readonly, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSNumber *installType; // @synthesize installType=_installType;
@property(readonly, nonatomic) NSArray *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
@property(readonly, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSArray *machOUUIDs; // @synthesize machOUUIDs=_machOUUIDs;
@property(readonly, nonatomic) NSString *execPath; // @synthesize execPath=_execPath;
@property(readonly, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, nonatomic) NSString *appStoreToolsBuildVersion; // @synthesize appStoreToolsBuildVersion=_appStoreToolsBuildVersion;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *maxSystemVersion; // @synthesize maxSystemVersion=_maxSystemVersion;
@property(readonly, nonatomic) NSString *minSystemVersion; // @synthesize minSystemVersion=_minSystemVersion;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSNumber *installFailureReason; // @synthesize installFailureReason=_installFailureReason;
@property(readonly, nonatomic) NSNumber *compatibilityState; // @synthesize compatibilityState=_compatibilityState;
@property(readonly, nonatomic) _Bool webNotificationPlaceholder; // @synthesize webNotificationPlaceholder=_webNotificationPlaceholder;
@property(readonly, nonatomic) _Bool containerized; // @synthesize containerized=_containerized;
@property(readonly, nonatomic) _Bool registerChildItemsTrusted; // @synthesize registerChildItemsTrusted=_registerChildItemsTrusted;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int previousInstallType; // @synthesize previousInstallType=_previousInstallType;
@property(nonatomic) unsigned char retries; // @synthesize retries=_retries;
- (unsigned int)registerBundleRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a251
- (int)activateBindings:(id)arg1 unitID:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x000000000007a17a
- (struct LSBundleData)buildBundleData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077939
- (void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1;	// IMP=0x0000000000077447
- (void)parseActivityTypesFromDictionary:(id)arg1;	// IMP=0x00000000000771f4
- (_Bool)parseInstallationInfo:(id)arg1;	// IMP=0x00000000000761df
- (_Bool)parseInfoPlist:(id)arg1;	// IMP=0x0000000000074744
- (void)parseURLClaimsFromDict:(id)arg1;	// IMP=0x00000000000744cc
- (void)parseDeviceFamilyFromDict:(id)arg1;	// IMP=0x0000000000074361
- (void)parseIconFilenamesFromDict:(id)arg1;	// IMP=0x0000000000074287
- (id)iconsDictionaryFromDict:(id)arg1;	// IMP=0x0000000000073be2
- (void)parseArchitecturesFromDict:(id)arg1;	// IMP=0x0000000000073b75
- (void)setCommonInfoPlistKeysFromDictionary:(id)arg1;	// IMP=0x0000000000073a42
- (void)setRaritiesFromDictionary:(id)arg1;	// IMP=0x00000000000737b5
- (void)setFlagsFromDictionary:(id)arg1;	// IMP=0x0000000000073512
- (id)_LSKeyTypeMap;	// IMP=0x000000000007331c
- (id)_LSPlistRaritiesMap;	// IMP=0x000000000007310c
- (id)_LSBundleFlagMap;	// IMP=0x0000000000072bfe
- (id)truncate:(_Bool *)arg1 queriableSchemesIfNeeded:(id)arg2;	// IMP=0x00000000000729b7
- (int)registerQueriableSchemes:(id)arg1 bundleData:(struct LSBundleData *)arg2;	// IMP=0x00000000000725c2
- (void)addItemInfoFlag:(unsigned int)arg1;	// IMP=0x00000000000725b2
- (void)addIconFlag:(unsigned char)arg1;	// IMP=0x00000000000725a2
- (void)addPlistFlag:(unsigned int)arg1;	// IMP=0x0000000000072592
- (void)addBundleFlag:(unsigned long long)arg1;	// IMP=0x0000000000072581
- (void)setRegistrationInfo:(id)arg1 alias:(id)arg2;	// IMP=0x000000000007246e

@end

