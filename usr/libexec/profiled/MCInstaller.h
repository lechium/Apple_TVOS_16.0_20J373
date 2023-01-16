//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCInstallerReader.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSMutableArray *_queuedProvisioningProfiles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 24 = 0x18
    NSDictionary *_currentlyInstallingRestrictions;	// 32 = 0x20
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 40 = 0x28
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 48 = 0x30
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x002000000004ec15
+ (void)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x001000000004e607
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000004e3a3
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x001000000004e339
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x0010000000049d97
+ (id)notInstalledByMDMError;	// IMP=0x00100000000441ce
+ (id)deviceIsSupervisedError;	// IMP=0x0010000000044127
+ (id)deviceNotSupervisedError;	// IMP=0x0010000000044080
+ (id)sharedInstaller;	// IMP=0x0010000000040400
- (void).cxx_destruct;	// IMP=0x002000000004fbcf
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (_Bool)isCertificateReference:(id)arg1 aliasedInDependencyManager:(id)arg2;	// IMP=0x001000000004f6c7
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x001000000004f5f9
- (void)_purgatoryWorkerQueue_didPurgePurgatory:(_Bool)arg1;	// IMP=0x001000000004f5e9
- (void)purgeProfileWithIdentifier:(id)arg1 FromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x001000000004f384
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x001000000004f127
- (_Bool)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000004eead
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x001000000004e442
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d856
- (id)verifiedMDMProfileIdentifierWithCleanUp;	// IMP=0x001000000004d321
- (void)removeManagedProfilesIfNecessary;	// IMP=0x001000000004d215
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x001000000004d1e2
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x001000000004cef5
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3;	// IMP=0x001000000004cedd
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x001000000004c860
- (id)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5 source:(id)arg6;	// IMP=0x001000000004bf9c
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x001000000004bf53
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x001000000004be85
- (void)_removeOrphanedCertificateDependencyManager:(id)arg1 persistentID:(id)arg2 persona:(id)arg3;	// IMP=0x001000000004bc8c
- (void)_removeOrphanedResourcesOptions:(id)arg1 includingAccounts:(_Bool)arg2;	// IMP=0x001000000004b38a
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000004b184
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004a897
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000004a86c
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x001000000004a7ba
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x001000000004a7b2
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x001000000004a1aa
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x0010000000049eae
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x0010000000049dfc
- (_Bool)_overrideProfileValidation;	// IMP=0x0010000000049dad
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000047938
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x0010000000047718
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x00100000000476fe
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000004763e
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000047555
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000474d3
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x001000000004747b
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x00100000000473a8
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x0010000000047303
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x00100000000471fc
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x0010000000047038
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004424f
- (id)_deviceLockedError;	// IMP=0x0010000000043fff
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x0010000000043e9c
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x0010000000043291
- (id)_validateMDMProfile:(id)arg1 installationOption:(id)arg2;	// IMP=0x00100000000430da
- (_Bool)_promptUserForRestoreWithAccountID:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000042f6d
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000042e83
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000042536
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x00100000000424b2
- (id)_invalidInputError;	// IMP=0x0010000000042431
- (id)_installationHaltedTopLevelError;	// IMP=0x0010000000042328
- (id)_uiProfileInstallationDisabledTopLevelErrorWithCause:(id)arg1;	// IMP=0x00100000000421fa
- (id)_targetDeviceMismatchError;	// IMP=0x0010000000042179
- (id)_targetDevicePreflightFailedError;	// IMP=0x00100000000420f8
- (id)_targetDeviceArchivedError;	// IMP=0x0010000000042077
- (id)_targetDeviceUnavailableError;	// IMP=0x0010000000041ff6
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000041f51
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000041eac
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x0010000000041e16
- (_Bool)_purgatorySupportedForDevice:(unsigned long long)arg1;	// IMP=0x0010000000041e00
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x0010000000041870
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x001000000004173c
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040d0b
- (id)popProvisioningProfileDataAtHeadOfInstallationQueue;	// IMP=0x0010000000040c99
- (_Bool)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000040c4a
- (id)_badProvisioningProfileError;	// IMP=0x0010000000040bc9
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x0010000000040b57
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x0000000000040760
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0010000000040672
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0010000000040560
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x00100000000404f8
- (id)init;	// IMP=0x0010000000040455

@end
