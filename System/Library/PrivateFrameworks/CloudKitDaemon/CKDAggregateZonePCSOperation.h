//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDPCSKeySyncCoreAnalytics, CKRecordZone, CKRecordZoneID, NSArray, NSError, NSMutableDictionary;

@interface CKDAggregateZonePCSOperation
{
    _Bool _isHandlingRetryableError;	// 8 = 0x8
    NSArray *_sourceZoneIDs;	// 16 = 0x10
    CKRecordZone *_targetZone;	// 24 = 0x18
    NSMutableDictionary *_zonePCSDataByZoneID;	// 32 = 0x20
    NSError *_currentError;	// 40 = 0x28
    long long _numZoneSaveAttempts;	// 48 = 0x30
    long long _maxZoneSaveAttempts;	// 56 = 0x38
    CKRecordZoneID *_zoneWaitingOnKeyRegistrySync;	// 64 = 0x40
    CKDPCSKeySyncCoreAnalytics *_keySyncAnalytics;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000023c096
@property(retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // @synthesize keySyncAnalytics=_keySyncAnalytics;
@property(retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync; // @synthesize zoneWaitingOnKeyRegistrySync=_zoneWaitingOnKeyRegistrySync;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) long long numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property _Bool isHandlingRetryableError; // @synthesize isHandlingRetryableError=_isHandlingRetryableError;
@property(retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID; // @synthesize zonePCSDataByZoneID=_zonePCSDataByZoneID;
@property(retain, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(retain, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void)_setPermanentFailure;	// IMP=0x000000000023bcd1
- (void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2;	// IMP=0x000000000023b0b1
- (void)_sendCoreAnalyticsEventForKeySync;	// IMP=0x000000000023aea0
- (void)_sychronizeUserKeyRegistryIfNeeded;	// IMP=0x000000000023a9af
- (int)operationType;	// IMP=0x000000000023a9a4
- (_Bool)_saveTargetZone;	// IMP=0x000000000023a244
- (void)_prepareTargetZonePCS;	// IMP=0x0000000000239aad
- (void)_fetchPCSDataForZoneID:(id)arg1;	// IMP=0x00000000002394c3
- (void)_fetchZonePCS;	// IMP=0x000000000023921e
- (void)main;	// IMP=0x000000000023920a
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000002391b4
- (_Bool)makeStateTransition;	// IMP=0x0000000000238fa0
- (id)relevantZoneIDs;	// IMP=0x0000000000238ead
- (id)activityCreate;	// IMP=0x0000000000238e84
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000238d60

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
