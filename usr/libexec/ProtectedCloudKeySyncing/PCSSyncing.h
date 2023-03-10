//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSUserDefaults, PCSAccountsModel, PCSDelayedAction, PCSKeySyncing, PCSMobileBackup, PCSUserRegistry;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PCSSyncing : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    PCSUserRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    PCSKeySyncing *_manager;	// 32 = 0x20
    PCSAccountsModel *_accounts;	// 40 = 0x28
    PCSDelayedAction *_triggerWatchSyncingAction;	// 48 = 0x30
    NSOperationQueue *_serialOperationQueue;	// 56 = 0x38
    NSUserDefaults *_settings;	// 64 = 0x40
    PCSMobileBackup *_mobileBackup;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_keyrollSchedulerSource;	// 80 = 0x50
    MISSING_TYPE *_scheduledKeyrollActivity;	// 88 = 0x58
}

+ (id)defaultPCSSyncing;	// IMP=0x002000000000f0c0
- (void).cxx_destruct;	// IMP=0x002000000001678b
@property(retain) NSObject<OS_xpc_object> *scheduledKeyrollActivity; // @synthesize scheduledKeyrollActivity=_scheduledKeyrollActivity;
@property(retain) NSObject<OS_dispatch_source> *keyrollSchedulerSource; // @synthesize keyrollSchedulerSource=_keyrollSchedulerSource;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain) PCSDelayedAction *triggerWatchSyncingAction; // @synthesize triggerWatchSyncingAction=_triggerWatchSyncingAction;
@property(retain) PCSAccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain) PCSUserRegistry *registry; // @synthesize registry=_registry;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)keyRollPending:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000000164bf
- (void)manateeStatus:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015a35
- (void)fetchStats:(CDUnknownBlockType)arg1;	// IMP=0x00100000000159e2
- (void)userDBBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000159d0
- (void)mobileBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000159be
- (void)triggerUserRegistryCheck:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000159ac
- (void)restoreMobileBackup:(_Bool)arg1 dsid:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014dc1
- (void)fetchAllDeviceKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014d1c
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000014d16
- (void)triggerDaily:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014cc8
- (void)requestKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014c50
- (void)syncKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014c39
- (void)getAllClients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014a39
- (void)queuedCheckRegistry:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000149d9
- (void)notifyEvent:(id)arg1;	// IMP=0x00100000000148e5
- (void)notifyDailyEvent;	// IMP=0x001000000001478b
- (struct _PCSIdentitySetData *)identityCopySet:(id)arg1;	// IMP=0x0010000000014538
- (void)createIdentity:(id)arg1 dsid:(id)arg2 roll:(_Bool)arg3 sync:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000013eb4
- (void)migrateToiCDPForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013cdc
- (void)setupIdentitiesForAccount:(id)arg1 withParameters:(id)arg2 optional:(_Bool)arg3;	// IMP=0x00100000000139e1
- (void)triggerSyncingWithEscrowProxy:(id)arg1 dsid:(id)arg2 accountIdentifier:(id)arg3 accountLastError:(id)arg4 settingsKeyExpirationDate:(id)arg5 settingsKeyIdentifier:(id)arg6 complete:(CDUnknownBlockType)arg7;	// IMP=0x00100000000136fe
- (void)triggerCKKSSyncForService:(id)arg1 dsid:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013238
- (void)triggerEscrowSyncWithDSID:(id)arg1 accountIdentifier:(id)arg2 accountLastError:(id)arg3 settingsKeyExpirationDate:(id)arg4 settingsKeyIdentifier:(id)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x001000000001276e
- (_Bool)ensureMKExists:(struct _PCSIdentitySetData *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00100000000125ba
- (void)triggerKeyRolling;	// IMP=0x0010000000011817
- (void)rollingComplete:(_Bool)arg1;	// IMP=0x0010000000011607
- (_Bool)getServicesToRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010f54
- (void)actuallyScheduleRollAttempt;	// IMP=0x0010000000010e58
- (void)scheduleRollAttempt;	// IMP=0x0010000000010e1e
- (long long)attemptTimer;	// IMP=0x0010000000010cde
- (_Bool)shouldRollStingray;	// IMP=0x0010000000010ac4
- (_Bool)shouldRoll;	// IMP=0x00100000000109fc
- (void)checkForBackupStateChange;	// IMP=0x0010000000010262
- (void)recordEpochForKeyroll;	// IMP=0x001000000001011b
- (id)getRollEpoch;	// IMP=0x001000000000ff0f
- (void)mobileBackupStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fe91
- (void)clearNextSyncNegativeCache;	// IMP=0x001000000000fc97
- (void)notifyInternalEvent:(id)arg1;	// IMP=0x001000000000f950
- (void)triggerWatchSyncing:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f945
- (void)notifyKeyRegistry;	// IMP=0x001000000000f93f
- (void)triggerWatchSyncing;	// IMP=0x001000000000f902
- (void)setupMetrics;	// IMP=0x001000000000f8fc
- (void)setupActivity;	// IMP=0x001000000000f7f1
- (id)initWithPCSKeySyncing:(id)arg1;	// IMP=0x001000000000f2cc
- (id)initForTesting;	// IMP=0x001000000000f1a4

@end

