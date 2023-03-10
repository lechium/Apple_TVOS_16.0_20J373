//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface (null) : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    _Bool _fakeClientProcessDeath;	// 9 = 0x9
    NSString *_clientName;	// 16 = 0x10
    NSUUID *_connectionUUID;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
    NSCountedSet *_interestedCoordinatorUUIDs;	// 48 = 0x30
    NSCountedSet *_interestedPromiseUUIDs;	// 56 = 0x38
    CDStruct_4c969caf _clientAuditToken;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000070a15
@property(readonly, nonatomic) NSCountedSet *interestedPromiseUUIDs; // @synthesize interestedPromiseUUIDs=_interestedPromiseUUIDs;
@property(readonly, nonatomic) NSCountedSet *interestedCoordinatorUUIDs; // @synthesize interestedCoordinatorUUIDs=_interestedCoordinatorUUIDs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(nonatomic) _Bool fakeClientProcessDeath; // @synthesize fakeClientProcessDeath=_fakeClientProcessDeath;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000070652
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;	// IMP=0x0010000000070345
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x0010000000070016
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x001000000006fce8
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x001000000006f9c5
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x001000000006f6a2
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;	// IMP=0x001000000006f395
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;	// IMP=0x001000000006f07d
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;	// IMP=0x001000000006ed70
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;	// IMP=0x001000000006ea63
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;	// IMP=0x001000000006e756
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1;	// IMP=0x001000000006e449
- (oneway void)_remote_IXSPromisedOutOfBandStreamingZipTransfer:(id)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;	// IMP=0x001000000006e3cd
- (void)_fetchPromisedOutOfBandStreamingZipTransferForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006e151
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(id)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;	// IMP=0x001000000006e0d5
- (void)_fetchPromisedStreamingZipTransferForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006de59
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setTryDeltaCopy:(_Bool)arg2;	// IMP=0x001000000006dddd
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setShouldCopy:(_Bool)arg2;	// IMP=0x001000000006dd61
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setTransferPath:(id)arg2;	// IMP=0x001000000006dc99
- (void)_fetchPromisedTransferToPathForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006da1d
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setConfigurationCompleteWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d911
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getAppExtensionPlaceholderPromises:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d5d9
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasAppExtensionPlaceholderPromises:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d4c8
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setAppExtensionPlaceholderPromiseUUIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006d391
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getInfoPlistLoctablePromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d182
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasInfoPlistLoctablePromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d071
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setInfoPlistLoctablePromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006cf3a
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getEntitlementsPromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006cd2b
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasEntitlementsPromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006cc1a
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setEntitlementsPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006cae3
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getLocalizationDictionary:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c9d2
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setLocalizationPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c89b
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getIconPromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c68c
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasIconPromise:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c57b
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setIconPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c444
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getAttributesWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c333
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setAttributes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c1fc
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getLaunchProhibitedWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c0eb
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setLaunchProhibited:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006bfd9
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getSinfDataWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bec8
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setSinfPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006bd91
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getMetadataWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bc80
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setMetadataPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006bb49
- (void)_fetchPlaceholderForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006b8cd
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 getTargetLastPathComponent:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b7bc
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 setTargetLastPathComponent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b685
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 getStagedPath:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b574
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 setStagedPath:(id)arg2;	// IMP=0x001000000006b4ac
- (void)_fetchOwnedDataPromiseForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006b230
- (oneway void)_remote_IXSDataPromise:(id)arg1 preflightWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b124
- (oneway void)_remote_IXSDataPromise:(id)arg1 getErrorInfo:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b013
- (oneway void)_remote_IXSDataPromise:(id)arg1 resetWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006af07
- (oneway void)_remote_IXSDataPromise:(id)arg1 cancelForReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006adc5
- (oneway void)_remote_IXSDataPromise:(id)arg1 setIsComplete:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006acaf
- (oneway void)_remote_IXSDataPromise:(id)arg1 getIsComplete:(CDUnknownBlockType)arg2;	// IMP=0x001000000006ab9e
- (oneway void)_remote_IXSDataPromise:(id)arg1 setPercentComplete:(double)arg2;	// IMP=0x001000000006ab1f
- (oneway void)_remote_IXSDataPromise:(id)arg1 getPercentComplete:(CDUnknownBlockType)arg2;	// IMP=0x001000000006aa10
- (void)_fetchDataPromiseForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x001000000006a794
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 removabilityWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a683
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setRemovability:(unsigned long long)arg2 byClient:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006a560
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getPlaceholderDispositionWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a44f
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setPlaceholderDisposition:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006a20c
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 convertToGloballyScopedWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a100
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getCoordinatorScopeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069fef
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setDeviceSecurityPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069eb8
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setUserDataPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069d81
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setPreparationPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069c4a
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setPlaceholderPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069b13
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setIsPaused:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069a01
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setInstallOptionsPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069865
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setInitialODRAssetPromiseUUIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006972e
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setAppAssetPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069592
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setAppAssetPromiseDRI:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069480
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 prioritizeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069374
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 conveyPriorityReplacingExisting:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000691fb
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 importanceWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000690ea
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setImportance:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000068fd8
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasUserDataPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068ec7
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasPlaceholderPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068db6
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasInstallOptions:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068ca5
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasInitialODRAssetPromises:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068b94
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasAppAssetPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068a83
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068972
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getHasDeviceSecurityPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068861
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getDeviceSecurityPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068652
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getUserDataPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068443
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getPreparationPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068234
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getPlaceholderPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068025
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getIsPausedWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067f14
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getIsComplete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067e03
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getInitialODRAssetPromises:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067acb
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getErrorInfo:(CDUnknownBlockType)arg2;	// IMP=0x00100000000679ba
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getCoordinationState:(CDUnknownBlockType)arg2;	// IMP=0x00100000000678a9
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getAppAssetPromiseDRI:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067798
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getAppAssetPromise:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067589
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 fireObserversWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067476
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 cancelForReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006732f
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg2;	// IMP=0x001000000006721e
- (void)_fetchIXSCoordinatedAppInstallForUUID:(id)arg1 method:(const char *)arg2 andRunWithCoordinator:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x0010000000066fb1
- (void)_remote_updateiTunesMetadataForAppWithIdentity:(id)arg1 plistData:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000066b77
- (void)_remote_updateSINFForAppWithIdentity:(id)arg1 sinfData:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000066736
- (void)_remote_removeObserverForDataPromiseWithUUID:(id)arg1;	// IMP=0x0010000000066724
- (void)_remote_addObserversForDataPromisesWithUUIDs:(id)arg1;	// IMP=0x0010000000066712
- (void)_remote_removeObserverForCoordinatorWithUUID:(id)arg1;	// IMP=0x0010000000066700
- (void)_remote_addObserversForCoordinatorsWithUUIDs:(id)arg1 fireObserverMethods:(_Bool)arg2;	// IMP=0x001000000006638e
- (void)_remote_displayUserPresentableErrorForAppWithLocalizedName:(id)arg1 code:(long long)arg2;	// IMP=0x001000000006630c
- (void)_remote_displayUserPresentableErrorForApps:(id)arg1 code:(long long)arg2;	// IMP=0x001000000006628a
- (void)_remote_displayUserPresentableErrorForApp:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000066148
- (void)_remote_registerTransientObserver:(id)arg1 forClientIdentifiers:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x0010000000065fdb
- (void)_remote_registerObserverMachServiceName:(id)arg1 forClientIdentifiers:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x0010000000065e6e
- (void)_remote_refreshContainerTypes:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000065acf
- (void)_remote_revertAppWithIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065944
- (void)_remote_uninstallAppWithIdentity:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000654c0
- (void)_remote_setRemovability:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 byClient:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000651f8
- (void)_remote_removabilityForAppWithIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006502c
- (void)_remote_setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2 testSpecificValidationData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000064dc2
- (void)_remote_setTestingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064b91
- (void)_remote_postNSCurrentLocaleDidChangeNotification:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064954
- (void)_remote_fakeClientDeathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064739
- (void)_remote_pingDaemonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064569
- (void)_remote_killDaemonForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006437e
- (void)_remote_purgeRegisteredCoordinatorsAndPromisesForCreator:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000640ae
- (void)_remote_prioritizeCoordinatorForAppWithIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063688
- (void)_remote_setIsPaused:(_Bool)arg1 forCoordinatorForAppWithIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006343f
- (void)_remote_cancelCoordinatorsForAppsWithIdentities:(id)arg1 reason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062c77
- (void)_remote_cancelCoordinatorForAppWithIdentity:(id)arg1 reason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062810
- (void)_remote_checkIfDataPromiseExistsForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062766
- (void)_remote_fetchRegisteredDataPromiseInfoForCreator:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000625d5
- (void)_remote_fetchSeedsForCoordinatorsWithIntent:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062321
- (void)_remote_createAppInstallCoordinatorWithSeed:(id)arg1 createIfNotExisting:(_Bool)arg2 requireMatchingIntent:(_Bool)arg3 scopeRequirement:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000060eb2
- (void)_remote_createAppReferenceDataPromiseWithSeed:(id)arg1 ifMatchingPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060aa4
- (void)_remote_createOutOfBandStreamingZipTransferDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060673
- (void)_remote_createOutOfBandTransferPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060242
- (void)_remote_createInMemoryDictionaryPromiseWithSeed:(id)arg1 dictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005fdc6
- (void)_remote_createInMemoryDataPromiseWithSeed:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f94a
- (void)_remote_createStreamingZipTransferDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f519
- (void)_remote_createTransferToPathDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005efe6
- (void)_remote_createPlaceholderDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005eac0
- (_Bool)interestedInPromiseUUID:(id)arg1;	// IMP=0x001000000005e95c
- (void)removeInterestedPromiseUUID:(id)arg1;	// IMP=0x001000000005e909
- (void)removeInterestedPromiseUUIDs:(id)arg1;	// IMP=0x001000000005e4c4
- (void)addInterestedPromiseUUIDs:(id)arg1;	// IMP=0x001000000005e312
- (void)addInterestedPromiseUUID:(id)arg1;	// IMP=0x001000000005e160
- (void)cancelOrphanedPromisesAndRemovePromiseReferences;	// IMP=0x001000000005de87
- (_Bool)interestedInCoordinatorUUID:(id)arg1;	// IMP=0x001000000005dd23
- (void)removeInterestedCoordinatorUUID:(id)arg1;	// IMP=0x001000000005dcd0
- (void)removeInterestedCoordinatorUUIDs:(id)arg1;	// IMP=0x001000000005d802
- (void)addInterestedCoordinatorUUID:(id)arg1;	// IMP=0x001000000005d650
- (void)addInterestedCoordinatorUUIDs:(id)arg1;	// IMP=0x001000000005d49e
@property(readonly, copy) NSString *description;
- (void)connectionInvalidated;	// IMP=0x001000000005d27a
- (_Bool)clientProcessExists;	// IMP=0x001000000005d1f3
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000005d054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

