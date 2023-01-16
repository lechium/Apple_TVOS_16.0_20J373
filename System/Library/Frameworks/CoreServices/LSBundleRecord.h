//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FSNode, LSBundleProxy, LSPropertyList, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, _LSLazyPropertyList, _LSLocalizedStringRecord;

@interface LSBundleRecord
{
    CDStruct_4c969caf *_auditToken;	// 8 = 0x8
    id _cachedDataContainerURL;	// 16 = 0x10
    FSNode *_node;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000700d6
+ (id)_propertyClasses;	// IMP=0x004000000006f580
+ (id)_bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x004000000006d096
+ (id)bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;	// IMP=0x004000000006d07f
+ (id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006ccce
+ (id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x004000000006caf2
+ (id)coreTypesBundleRecord;	// IMP=0x004000000006cad9
+ (id)bundleRecordForCurrentProcess;	// IMP=0x004000000006c76a
- (void).cxx_destruct;	// IMP=0x0000000000070913
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) FSNode *_node; // @synthesize _node;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007080a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070217
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000700de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ffe6
- (unsigned long long)hash;	// IMP=0x000000000006ff8e
- (id)debugDescription;	// IMP=0x000000000006fe6d
- (id)description;	// IMP=0x000000000006fdb2
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000006f935
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000006f651
- (id)_localizedShort:(_Bool)arg1 nameWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleData:(const struct LSBundleBaseData *)arg5;	// IMP=0x000000000006f525
- (void)_LSRecord_resolve__localizedShortName;	// IMP=0x000000000006f50a
@property(readonly) _LSLocalizedStringRecord *_localizedShortName;
- (id)_localizedShortNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f4c9
- (void)_LSRecord_resolve__localizedName;	// IMP=0x000000000006f4ae
@property(readonly) _LSLocalizedStringRecord *_localizedName;
- (id)_localizedNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f470
@property(readonly) NSString *_fallbackLocalizedName;
@property(readonly) NSDictionary *groupContainerURLs;
- (id)_cachedDataContainerURL;	// IMP=0x000000000006efe0
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;	// IMP=0x000000000006efc5
@property(readonly) NSURL *_dataContainerURLFromDatabase;
- (id)_dataContainerURLFromDatabaseWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006ef4b
- (void)_LSRecord_resolve__baseFlags;	// IMP=0x000000000006ef39
@property(readonly) struct LSBundleBaseFlags _baseFlags;
- (struct LSBundleBaseFlags)_baseFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006ef1b
- (void)_LSRecord_resolve__rawGroupContainerURLs;	// IMP=0x000000000006ef00
@property(readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
- (id)_rawGroupContainerURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006eecf
@property(readonly) unsigned long long _containerClass;
@property(readonly) _Bool _containerized;
@property(readonly) _Bool _usesSystemPersona;
- (void)_LSRecord_resolve__profileValidationState;	// IMP=0x000000000006eea5
@property(readonly) unsigned char _profileValidationState;
- (unsigned char)_profileValidationStateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006ee86
@property(readonly, nonatomic) LSBundleRecord *_realRecord;
- (void)_LSRecord_resolve__bundleVersion;	// IMP=0x000000000006ee39
@property(readonly, nonatomic) struct LSVersionNumber _bundleVersion;
- (struct LSVersionNumber)_bundleVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006edfe
@property(readonly, nonatomic) const CDStruct_4c969caf *_auditToken;
- (id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext *)arg3 tableID:(unsigned int)arg4 unitID:(unsigned int)arg5 bundleBaseData:(const struct LSBundleBaseData *)arg6 error:(id *)arg7;	// IMP=0x000000000006e95a
- (void)_LSRecord_resolve_isLinkEnabled;	// IMP=0x000000000006e948
@property(readonly) _Bool isLinkEnabled;
- (_Bool)isLinkEnabledWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006e925
@property(readonly) NSSet *serviceRecords;
- (void)_LSRecord_resolve_importedTypeRecords;	// IMP=0x000000000006e8f1
@property(readonly) NSSet *importedTypeRecords;
- (id)importedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006e8b3
- (void)_LSRecord_resolve_exportedTypeRecords;	// IMP=0x000000000006e898
@property(readonly) NSSet *exportedTypeRecords;
- (id)exportedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006e857
- (id)exported:(_Bool)arg1 typesWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 unitBytes:(const struct LSBundleData *)arg5;	// IMP=0x000000000006e687
- (void)_LSRecord_resolve_claimRecords;	// IMP=0x000000000006e66c
@property(readonly) NSSet *claimRecords;
- (id)claimRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006e4ad
@property(readonly, getter=wasBuiltWithThreadSanitizer) _Bool builtWithThreadSanitizer;
- (void)_LSRecord_resolve_platform;	// IMP=0x000000000006e483
@property(readonly) unsigned int platform;
- (unsigned int)platformWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006e468
- (void)_LSRecord_resolve_SDKVersion;	// IMP=0x000000000006e44d
@property(readonly) NSString *SDKVersion;
- (id)SDKVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006e3e3
- (void)_LSRecord_resolve_machOUUIDs;	// IMP=0x000000000006e3c8
@property(readonly) NSArray *machOUUIDs;
- (id)machOUUIDsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006e11a
- (void)_LSRecord_resolve_registrationDate;	// IMP=0x000000000006e0ff
@property(readonly) NSDate *registrationDate;
- (id)registrationDateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006e0b6
- (void)_LSRecord_resolve_developerType;	// IMP=0x000000000006e0a4
@property(readonly) BOOL developerType;
- (BOOL)developerTypeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006deb2
@property(readonly) NSString *bundleVersion;
- (void)_LSRecord_resolve_executableURL;	// IMP=0x000000000006de2a
@property(readonly) NSURL *executableURL;
- (id)executableURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006dcdd
@property(readonly) NSURL *URL;
- (void)_LSRecord_resolve_teamIdentifier;	// IMP=0x000000000006dca5
@property(readonly) NSString *teamIdentifier;
- (id)teamIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006dc5f
@property(readonly) NSString *applicationIdentifier;
- (void)dealloc;	// IMP=0x000000000006dbb5
- (void)_LSRecord_resolve_infoDictionary;	// IMP=0x0000000000070986
@property(readonly) LSPropertyList *infoDictionary;
- (id)infoDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000070955
- (void)_LSRecord_resolve_entitlements;	// IMP=0x0000000000070cd6
@property(readonly) LSPropertyList *entitlements;
- (id)entitlementsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000070c1e
- (_Bool)getDataContainerURL:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000070d2b
@property(readonly) NSURL *dataContainerURL;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;	// IMP=0x000000000007122c
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;	// IMP=0x0000000000071196
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;	// IMP=0x00000000000710f3
- (id)localizedNameWithPreferredLocalizations:(id)arg1;	// IMP=0x0000000000071050
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
@property(readonly) unsigned long long compatibilityState;
- (void)_LSRecord_resolve_codeSignatureVersion;	// IMP=0x00000000000713ea
@property(readonly) unsigned int codeSignatureVersion;
- (unsigned int)codeSignatureVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000713cc
@property(readonly, getter=isFreeProfileValidated) _Bool freeProfileValidated;
@property(readonly, getter=isUPPValidated) _Bool UPPValidated;
@property(readonly, getter=isProfileValidated) _Bool profileValidated;
- (void)_LSRecord_resolve_signerIdentity;	// IMP=0x0000000000071369
@property(readonly) NSString *signerIdentity;
- (id)signerIdentityWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000071323
- (void)_LSRecord_resolve_signerOrganization;	// IMP=0x0000000000071308
@property(readonly) NSString *signerOrganization;
- (id)signerOrganizationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000712c2
@property(readonly) NSArray *managedPersonas;
@property(readonly) NSString *accentColorName;
@property(readonly) NSArray *UIBackgroundModes;
@property(readonly) _Bool supportsNowPlaying;
@property(readonly) NSArray *WKBackgroundModes;
@property(readonly) NSArray *supportedIntentMediaCategories;
@property(readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property(readonly) NSArray *intentsRestrictedWhileLocked;
@property(readonly) NSArray *supportedIntents;
- (void)_LSRecord_resolve_intentDefinitionURLs;	// IMP=0x0000000000071700
@property(readonly) NSDictionary *intentDefinitionURLs;
- (id)intentDefinitionURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000007153a

// Remaining properties
@property(readonly, nonatomic) LSBundleProxy *compatibilityObject; // @dynamic compatibilityObject;

@end

