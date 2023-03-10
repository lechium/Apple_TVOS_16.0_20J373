//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLSettingsMirror, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLClientManagerPublicProtocol, CLRoutineMonitorServiceProtocol;

@interface CLSignificantVisitManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    struct map<id<CLSignificantVisitManagerClientProtocol>, NSString *, std::less<id<CLSignificantVisitManagerClientProtocol>>, std::allocator<std::pair<const id<CLSignificantVisitManagerClientProtocol>, NSString *>>> _clientToKey;	// 16 = 0x10
    CLSettingsMirror *fSettings;	// 40 = 0x28
    _Bool _monitoring;	// 48 = 0x30
    _Bool _leeching;	// 49 = 0x31
    _Bool _armed;	// 50 = 0x32
    void *_clientInterest;	// 56 = 0x38
    void *_clientAuthDate;	// 64 = 0x40
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;	// 72 = 0x48
    NSMutableArray *_recentVisits;	// 80 = 0x50
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 88 = 0x58
    id <CLClientManagerPublicProtocol> _clientManager;	// 96 = 0x60
    unsigned long long _currentJournalIdentifier;	// 104 = 0x68
}

+ (_Bool)isSupported;	// IMP=0x002000000031b2e9
+ (id)getSilo;	// IMP=0x001000000031b28d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000031b274
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000031b217
- (id).cxx_construct;	// IMP=0x0020000000320269
- (void).cxx_destruct;	// IMP=0x0010000000320221
@property(nonatomic) unsigned long long currentJournalIdentifier; // @synthesize currentJournalIdentifier=_currentJournalIdentifier;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(retain, nonatomic) id <CLClientManagerPublicProtocol> clientManager; // @synthesize clientManager=_clientManager;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitor; // @synthesize routineMonitor=_routineMonitor;
@property(retain, nonatomic) NSMutableArray *recentVisits; // @synthesize recentVisits=_recentVisits;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(nonatomic) void *clientAuthDate; // @synthesize clientAuthDate=_clientAuthDate;
@property(nonatomic) void *clientInterest; // @synthesize clientInterest=_clientInterest;
@property(nonatomic) _Bool leeching; // @synthesize leeching=_leeching;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)settingsDidChange:(id)arg1;	// IMP=0x001000000031fdf2
- (void)onAuthDateStoreTimer;	// IMP=0x001000000031fdb1
- (void)onInterestStoreTimer;	// IMP=0x001000000031fd70
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000031faa6
- (void)onVisit:(id)arg1;	// IMP=0x001000000031f8ab
- (_Bool)clientInterestStoreSetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int)arg3;	// IMP=0x001000000031f7e2
- (_Bool)clientInterestStoreGetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int *)arg3;	// IMP=0x001000000031f731
- (_Bool)interestTypeForClientKey:(const char *)arg1 outType:(int *)arg2;	// IMP=0x001000000031f6db
- (_Bool)interestForClientKey:(const char *)arg1 outInterest:(int *)arg2;	// IMP=0x001000000031f685
- (void)migrateClientInterestData;	// IMP=0x001000000031f090
- (void)checkForMonitoring;	// IMP=0x001000000031e98c
- (id)authorizationDateForClientWithKey:(id)arg1;	// IMP=0x001000000031e739
- (void)notifyClientsOfVisit:(id)arg1;	// IMP=0x001000000031e186
- (void)disconnectClient:(byref id)arg1;	// IMP=0x001000000031e0dc
- (void)simulateVisit:(id)arg1;	// IMP=0x001000000031e016
- (void)actOnPendingDeleteForClientKey:(id)arg1;	// IMP=0x001000000031dd20
- (void)removeInterestForClientKey:(id)arg1;	// IMP=0x001000000031dc70
- (void)stopMonitoringSignificantVisitsForClient:(byref id)arg1;	// IMP=0x001000000031da4f
- (void)startMonitoringSignificantVisitsForClient:(byref id)arg1 type:(int)arg2;	// IMP=0x001000000031d654
- (void)connectClient:(byref id)arg1 withKey:(id)arg2;	// IMP=0x001000000031d4bc
- (id)keyForClient:(byref id)arg1;	// IMP=0x001000000031d427
- (void)performBlockWhenArmed:(CDUnknownBlockType)arg1;	// IMP=0x001000000031d3af
- (void)deliverVisit:(id)arg1 toClient:(byref id)arg2;	// IMP=0x001000000031cf2f
- (void)sendVisitsToClient:(byref id)arg1;	// IMP=0x001000000031cb54
- (_Bool)isClientWithKeyInterested:(id)arg1;	// IMP=0x001000000031c980
- (void)removeOldVisits;	// IMP=0x001000000031c821
- (void)ensureStop;	// IMP=0x001000000031c58d
- (void)ensureMonitoringWithType:(int)arg1;	// IMP=0x001000000031c162
- (void)flushAll;	// IMP=0x001000000031c134
- (void)flushInterest;	// IMP=0x001000000031bfdf
- (void)flushAuthDates;	// IMP=0x001000000031be8a
- (void)endService;	// IMP=0x001000000031bcc9
- (void)beginService;	// IMP=0x001000000031b32e
- (id)init;	// IMP=0x001000000031b2f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

