//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CKContainer, CKRecordZoneID, CKSyncEngine, CLTimer, NSString;

@interface CLVO2MaxCloudKitManager : CLIntersiloService
{
    struct shared_ptr<CLVO2MaxInputCache> fInputCache;	// 8 = 0x8
    struct shared_ptr<CLVO2MaxInputStore> fInputStore;	// 24 = 0x18
    struct unique_ptr<CLVO2MaxStagingOutputStore, std::default_delete<CLVO2MaxStagingOutputStore>> fStagingOutputStore;	// 40 = 0x28
    struct unique_ptr<CLVO2MaxRetrocomputeRecorderDb, std::default_delete<CLVO2MaxRetrocomputeRecorderDb>> fRetrocomputeDb;	// 48 = 0x30
    _Bool fFetchChangesForInputZone;	// 56 = 0x38
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> fDataProtectionClient;	// 64 = 0x40
    _Bool fDeviceUnlocked;	// 72 = 0x48
    int fMaxSessionsForUploadThrottling;	// 76 = 0x4c
    double fMinTimeBetweenForcedFetches;	// 80 = 0x50
    CKRecordZoneID *fOutputZoneID;	// 88 = 0x58
    CKRecordZoneID *fInputZoneID;	// 96 = 0x60
    struct CLVO2MaxCloudKitStats fDailyStats;	// 104 = 0x68
    CLTimer *fDailyStatsTimer;	// 168 = 0xa8
    double fDailyStatsTimerInterval;	// 176 = 0xb0
    double fDailyStatsStartTime;	// 184 = 0xb8
    CKContainer *_container;	// 192 = 0xc0
    CKSyncEngine *_syncEngine;	// 200 = 0xc8
}

+ (_Bool)isSupported;	// IMP=0x002000000011b5ef
+ (id)getSilo;	// IMP=0x001000000011b556
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000011b53d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000011b4e0
- (id).cxx_construct;	// IMP=0x0020000000122f27
- (void).cxx_destruct;	// IMP=0x0010000000122ead
@property(readonly, nonatomic) CKSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x0010000000122d43
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000122c4b
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x00100000001229a6
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0010000000122709
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x001000000012259c
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x00100000001224ba
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x00100000001221d0
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000121f35
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x0010000000121b3e
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x0010000000121a31
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x0010000000121924
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;	// IMP=0x0010000000121842
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x001000000012174a
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x00100000001215e2
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x00100000001214d5
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;	// IMP=0x00100000001213f3
- (void)receiveVO2MaxCloudKitDailyStatsFromWatch:(id)arg1;	// IMP=0x00100000001213ed
- (void)resetDailyStats;	// IMP=0x00100000001213ae
- (void)stopSyncing:(_Bool)arg1;	// IMP=0x001000000012134c
- (void)handleZonePurge:(id)arg1;	// IMP=0x0010000000121188
- (void)handleZoneDeleted:(id)arg1;	// IMP=0x0010000000120f8c
- (void)handleZoneNotFound:(id)arg1;	// IMP=0x0010000000120d41
- (void)handleUnknownItem:(id)arg1;	// IMP=0x0010000000120b71
- (void)handleServerRecordChanged:(id)arg1;	// IMP=0x00100000001208d3
- (void)handleFetchedInputRecord:(id)arg1;	// IMP=0x0010000000120641
- (void)updateInputSystemFields:(id)arg1 inputRecord:(id)arg2;	// IMP=0x0010000000120304
- (id)createCKRecordForInput:(id)arg1;	// IMP=0x001000000011fd71
- (void)handleFetchedOutputRecord:(id)arg1;	// IMP=0x001000000011faf3
- (void)updateOutputSystemFields:(id)arg1 outputRecord:(id)arg2;	// IMP=0x001000000011f7b6
- (id)createCKRecordForOutput:(id)arg1;	// IMP=0x001000000011f246
- (id)getSystemFieldsFromCKRecord:(id)arg1;	// IMP=0x001000000011f1d3
- (void)bulkUploadRecordIDsShouldReupload:(_Bool)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3 shouldThrottle:(_Bool)arg4;	// IMP=0x001000000011eace
- (void)addRecordIDsForSessionId:(id)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3;	// IMP=0x001000000011e756
- (void)deleteZone:(id)arg1;	// IMP=0x001000000011e625
- (void)createVO2MaxInputZone;	// IMP=0x001000000011e4d3
- (void)createVO2MaxOutputZone;	// IMP=0x001000000011e381
- (void)initializeSyncEngine;	// IMP=0x001000000011dfcb
- (struct VO2MaxCloudKitSyncEngineMetadata)getCKSyncEngineMetadata;	// IMP=0x001000000011de9c
- (void)updateDeviceUnlocked:(_Bool)arg1;	// IMP=0x001000000011dda6
- (id)getUserRecordIDName;	// IMP=0x001000000011dce6
- (void)setUserRecordIDName:(id)arg1;	// IMP=0x001000000011dbc2
- (_Bool)shouldKeepLocalDataOnAccountChange;	// IMP=0x001000000011db26
- (void)validateAccount;	// IMP=0x001000000011d2c1
- (void)cloudKitAccountDidChange:(id)arg1;	// IMP=0x001000000011d2af
- (void)handleSyncUpload:(id)arg1;	// IMP=0x001000000011cd4b
- (void)onSyncActivity:(id)arg1;	// IMP=0x001000000011cb76
- (void)resetSyncActivity:(id)arg1 withDelay:(long long)arg2;	// IMP=0x001000000011c8ee
- (void)setUpSyncActivity;	// IMP=0x001000000011c153
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x001000000011c0f2
- (void)saveRetrocomputedOutputs;	// IMP=0x001000000011becf
- (void)saveInputsAndOutputsForSessionId:(id)arg1;	// IMP=0x001000000011be87
- (void)endService;	// IMP=0x001000000011bd1e
- (void)beginService;	// IMP=0x001000000011b643
- (id)init;	// IMP=0x001000000011b5b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

