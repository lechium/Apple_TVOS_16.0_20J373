//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IXApplicationIdentity, IXPlaceholderAttributes, IXPlaceholderSeed, IXPromisedAppReferenceSeed, IXPromisedInMemoryDataSeed, IXPromisedInMemoryDictionarySeed, IXPromisedOutOfBandStreamingZipTransferSeed, IXPromisedOutOfBandTransferSeed, IXPromisedStreamingZipTransferSeed, IXPromisedTransferToPathSeed, IXUninstallOptions, NSArray, NSData, NSDictionary, NSError, NSPredicate, NSSet, NSString, NSURL, NSUUID, NSXPCListenerEndpoint;

@protocol IXClientProtocol <NSObject>
- (oneway void)_remote_IXSPromisedOutOfBandStreamingZipTransfer:(NSUUID *)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(NSUUID *)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setTryDeltaCopy:(_Bool)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setShouldCopy:(_Bool)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setTransferPath:(NSURL *)arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setConfigurationCompleteWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getAppExtensionPlaceholderPromises:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasAppExtensionPlaceholderPromises:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setAppExtensionPlaceholderPromiseUUIDs:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getInfoPlistLoctablePromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasInfoPlistLoctablePromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setInfoPlistLoctablePromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getEntitlementsPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasEntitlementsPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setEntitlementsPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getLocalizationDictionary:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setLocalizationPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getIconPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasIconPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setIconPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getAttributesWithCompletion:(void (^)(IXPlaceholderAttributes *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setAttributes:(IXPlaceholderAttributes *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getLaunchProhibitedWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setLaunchProhibited:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getSinfDataWithCompletion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setSinfPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getMetadataWithCompletion:(void (^)(MIStoreMetadata *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setMetadataPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 setTargetLastPathComponent:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 getTargetLastPathComponent:(void (^)(NSString *, NSError *))arg2;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 getStagedPath:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 setStagedPath:(NSURL *)arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 preflightWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getErrorInfo:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 resetWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 cancelForReason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 setIsComplete:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getIsComplete:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 setPercentComplete:(double)arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getPercentComplete:(void (^)(double, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getCoordinationState:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 removabilityWithCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setRemovability:(unsigned long long)arg2 byClient:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getPlaceholderDispositionWithCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setPlaceholderDisposition:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 convertToGloballyScopedWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getCoordinatorScopeWithCompletion:(void (^)(unsigned char, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 prioritizeWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getIsPausedWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setIsPaused:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 fireObserversWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getErrorInfo:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getIsComplete:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getHasDeviceSecurityPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getDeviceSecurityPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setDeviceSecurityPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getPreparationPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setPreparationPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getUserDataRestoreShouldBegin:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasUserDataPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getUserDataPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setUserDataPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasInitialODRAssetPromises:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getInitialODRAssetPromises:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setInitialODRAssetPromiseUUIDs:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 conveyPriorityReplacingExisting:(_Bool)arg2 withCompletion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 importanceWithCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setImportance:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasInstallOptions:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setInstallOptionsPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setAppAssetPromiseDRI:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getAppAssetPromiseDRI:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 appAssetPromiseHasBegunFulfillment:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasAppAssetPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getAppAssetPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setAppAssetPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasPlaceholderPromise:(void (^)(_Bool, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getPlaceholderPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setPlaceholderPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 cancelForReason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)_remote_updateiTunesMetadataForAppWithIdentity:(IXApplicationIdentity *)arg1 plistData:(NSData *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_updateSINFForAppWithIdentity:(IXApplicationIdentity *)arg1 sinfData:(NSData *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_displayUserPresentableErrorForAppWithLocalizedName:(NSString *)arg1 code:(long long)arg2;
- (void)_remote_displayUserPresentableErrorForApps:(NSArray *)arg1 code:(long long)arg2;
- (void)_remote_displayUserPresentableErrorForApp:(IXApplicationIdentity *)arg1 code:(long long)arg2;
- (void)_remote_registerTransientObserver:(NSXPCListenerEndpoint *)arg1 forClientIdentifiers:(NSSet *)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_registerObserverMachServiceName:(NSString *)arg1 forClientIdentifiers:(NSSet *)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_refreshContainerTypes:(unsigned long long)arg1 forAppWithIdentity:(IXApplicationIdentity *)arg2 reason:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_revertAppWithIdentity:(IXApplicationIdentity *)arg1 completion:(void (^)(LSRecordPromise *, NSError *))arg2;
- (void)_remote_uninstallAppWithIdentity:(IXApplicationIdentity *)arg1 options:(IXUninstallOptions *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)_remote_prioritizeCoordinatorForAppWithIdentity:(IXApplicationIdentity *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)_remote_setIsPaused:(_Bool)arg1 forCoordinatorForAppWithIdentity:(IXApplicationIdentity *)arg2 completion:(void (^)(NSError *))arg3;
- (void)_remote_cancelCoordinatorsForAppsWithIdentities:(NSArray *)arg1 reason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)_remote_cancelCoordinatorForAppWithIdentity:(IXApplicationIdentity *)arg1 reason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)_remote_setRemovability:(unsigned long long)arg1 forAppWithIdentity:(IXApplicationIdentity *)arg2 byClient:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_removabilityForAppWithIdentity:(IXApplicationIdentity *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)_remote_setTestModeForIdentifierPrefix:(NSString *)arg1 testMode:(unsigned long long)arg2 testSpecificValidationData:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_setTestingEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)_remote_postNSCurrentLocaleDidChangeNotification:(void (^)(NSError *))arg1;
- (void)_remote_fakeClientDeathWithCompletion:(void (^)(NSError *))arg1;
- (void)_remote_pingDaemonWithCompletion:(void (^)(int, NSError *))arg1;
- (void)_remote_killDaemonForTestingWithCompletion:(void (^)(NSError *))arg1;
- (void)_remote_purgeRegisteredCoordinatorsAndPromisesForCreator:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)_remote_checkIfDataPromiseExistsForUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)_remote_fetchRegisteredDataPromiseInfoForCreator:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)_remote_fetchSeedsForCoordinatorsWithIntent:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)_remote_removeObserverForCoordinatorWithUUID:(NSUUID *)arg1;
- (void)_remote_addObserversForCoordinatorsWithUUIDs:(NSSet *)arg1 fireObserverMethods:(_Bool)arg2;
- (void)_remote_removeObserverForDataPromiseWithUUID:(NSUUID *)arg1;
- (void)_remote_addObserversForDataPromisesWithUUIDs:(NSSet *)arg1;
- (void)_remote_createAppReferenceDataPromiseWithSeed:(IXPromisedAppReferenceSeed *)arg1 ifMatchingPredicate:(NSPredicate *)arg2 completion:(void (^)(IXPromisedAppReferenceSeed *, NSError *))arg3;
- (void)_remote_createOutOfBandStreamingZipTransferDataPromiseWithSeed:(IXPromisedOutOfBandStreamingZipTransferSeed *)arg1 completion:(void (^)(IXPromisedOutOfBandStreamingZipTransferSeed *, NSError *))arg2;
- (void)_remote_createOutOfBandTransferPromiseWithSeed:(IXPromisedOutOfBandTransferSeed *)arg1 completion:(void (^)(IXPromisedOutOfBandTransferSeed *, NSError *))arg2;
- (void)_remote_createInMemoryDictionaryPromiseWithSeed:(IXPromisedInMemoryDictionarySeed *)arg1 dictionary:(NSDictionary *)arg2 completion:(void (^)(IXPromisedInMemoryDictionarySeed *, NSError *))arg3;
- (void)_remote_createInMemoryDataPromiseWithSeed:(IXPromisedInMemoryDataSeed *)arg1 data:(NSData *)arg2 completion:(void (^)(IXPromisedInMemoryDataSeed *, NSError *))arg3;
- (void)_remote_createStreamingZipTransferDataPromiseWithSeed:(IXPromisedStreamingZipTransferSeed *)arg1 completion:(void (^)(IXPromisedStreamingZipTransferSeed *, NSError *))arg2;
- (void)_remote_createTransferToPathDataPromiseWithSeed:(IXPromisedTransferToPathSeed *)arg1 completion:(void (^)(IXPromisedTransferToPathSeed *, NSError *))arg2;
- (void)_remote_createPlaceholderDataPromiseWithSeed:(IXPlaceholderSeed *)arg1 completion:(void (^)(IXPlaceholderSeed *, NSError *))arg2;
@end

