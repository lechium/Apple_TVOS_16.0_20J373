//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, SDStatusMonitor, SDXPCHelperConnection;
@protocol OS_xpc_object, SDBonjourBrowserDelegate;

@interface SDBonjourBrowser : NSObject
{
    _Bool _isAirDrop;	// 8 = 0x8
    _Bool _isNetBIOS;	// 9 = 0x9
    _Bool _isWorkgroups;	// 10 = 0xa
    int _maxServices;	// 12 = 0xc
    NSString *_domain;	// 16 = 0x10
    _Bool _startCalled;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSNumber *_isFinder;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
    unsigned int _awdlIndex;	// 56 = 0x38
    NSString *_browserID;	// 64 = 0x40
    NSString *_sessionID;	// 72 = 0x48
    NSTimer *_restartTimer;	// 80 = 0x50
    int _transfersInitiated;	// 88 = 0x58
    int _transfersCompleted;	// 92 = 0x5c
    SDStatusMonitor *_monitor;	// 96 = 0x60
    struct _DNSServiceRef_t *_connection;	// 104 = 0x68
    double _firstTime;	// 112 = 0x70
    double _startTime;	// 120 = 0x78
    NSMutableSet *_discoveredPeers;	// 128 = 0x80
    NSMutableDictionary *_servers;	// 136 = 0x88
    NSObject<OS_xpc_object> *_xpcConnection;	// 144 = 0x90
    NSMutableDictionary *_iconCache;	// 152 = 0x98
    NSMutableDictionary *_dnsQueries;	// 160 = 0xa0
    NSMutableDictionary *_serverCache;	// 168 = 0xa8
    NSMutableDictionary *_airDropRequests;	// 176 = 0xb0
    struct __CFDictionary *_identityQueries;	// 184 = 0xb8
    SDXPCHelperConnection *_helperConnection;	// 192 = 0xc0
    NSArray *_types;	// 200 = 0xc8
    id <SDBonjourBrowserDelegate> _delegate;	// 208 = 0xd0
}

+ (void)updateFriendRPIdentityForAccountID:(id)arg1 withAirDropClientInfo:(id)arg2;	// IMP=0x00200000000de859
- (void).cxx_destruct;	// IMP=0x00200000000e1484
@property(readonly) _Bool startCalled; // @synthesize startCalled=_startCalled;
@property int transfersCompleted; // @synthesize transfersCompleted=_transfersCompleted;
@property int transfersInitiated; // @synthesize transfersInitiated=_transfersInitiated;
@property(retain) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property __weak id <SDBonjourBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSArray *types; // @synthesize types=_types;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *description;
- (void)restartAfterDelay:(double)arg1;	// IMP=0x00100000000e1251
- (void)queryRecordTimerCallBack:(id)arg1;	// IMP=0x00100000000e1202
- (void)handleQueryCallBack:(unsigned int)arg1 error:(int)arg2 fullname:(const char *)arg3 rrtype:(unsigned short)arg4 rdlen:(unsigned short)arg5 rdata:(const void *)arg6;	// IMP=0x00100000000e111d
- (void)processTXTRecordUpdate:(const char *)arg1 rdlen:(unsigned short)arg2 rdata:(const void *)arg3;	// IMP=0x00100000000e0a0a
- (id)valueForKey:(id)arg1 inTXTRecord:(const void *)arg2 withLength:(unsigned short)arg3;	// IMP=0x00100000000e0982
- (id)serviceFromServiceName:(id)arg1;	// IMP=0x00100000000e08c6
- (id)odiskMountPoints:(id)arg1;	// IMP=0x00100000000e0711
- (void)handleBrowseCallBack:(unsigned int)arg1 interface:(unsigned int)arg2 error:(int)arg3 name:(const char *)arg4 type:(const char *)arg5 domain:(const char *)arg6;	// IMP=0x00100000000e0564
- (_Bool)validAirDropInterface:(unsigned int)arg1;	// IMP=0x00100000000e0506
- (void)notifyClientIfDone:(unsigned int)arg1;	// IMP=0x00100000000e04c7
- (void)notifyClient;	// IMP=0x00100000000e048e
- (void)linkStateChanged:(id)arg1;	// IMP=0x00100000000e0410
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00100000000e03f6
- (void)somethingChanged:(id)arg1;	// IMP=0x00100000000e03dc
- (void)screenStatusChanged:(id)arg1;	// IMP=0x00100000000e03ca
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00100000000e03b8
- (void)lockStatusChanged:(id)arg1;	// IMP=0x00100000000e03a6
- (void)airDropPublished:(id)arg1;	// IMP=0x00100000000e0394
- (void)contactsChanged:(id)arg1;	// IMP=0x00100000000e0154
- (void)cancelIdentityQueries;	// IMP=0x00100000000e013c
- (void)startIdentityQueryForNode:(struct __SFNode *)arg1;	// IMP=0x00100000000dfe9f
- (void)handleIdentity:(id)arg1 withQueryID:(id)arg2 emailOrPhone:(id)arg3 error:(id)arg4;	// IMP=0x00100000000dfc3f
- (void)personInfoChanged:(id)arg1 flags:(id)arg2 atag:(id)arg3 cname:(id)arg4 phash:(id)arg5 ehash:(id)arg6 nhash:(id)arg7;	// IMP=0x00100000000df9cf
- (void)cancelAirDropRequests;	// IMP=0x00100000000df872
- (void)startAirDropRequestForNode:(struct __SFNode *)arg1;	// IMP=0x00100000000df768
- (void)airDropClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00100000000df1b9
- (void)logAirDropDiscoveryInfoForNode:(struct __SFNode *)arg1;	// IMP=0x00100000000de4bb
- (void)cleanupAirDropRequest:(id)arg1;	// IMP=0x00100000000de441
- (void)clearCacheAndNotify;	// IMP=0x00100000000de3af
- (void)startPictureQuery:(id)arg1;	// IMP=0x00100000000de2be
- (void)commentChanged:(id)arg1 comment:(id)arg2;	// IMP=0x00100000000de232
- (void)deviceInfoChanged:(id)arg1 model:(id)arg2 ecolor:(id)arg3 icolor:(id)arg4 osxvers:(id)arg5;	// IMP=0x00100000000de0eb
- (id)colorArrayFromEcolor:(id)arg1 icolor:(id)arg2;	// IMP=0x00100000000dde0a
- (void)systemInfoChanged:(id)arg1 diskInfo:(struct __CFDictionary *)arg2;	// IMP=0x00100000000ddd0f
- (struct __SFNode *)copyNodeForService:(id)arg1;	// IMP=0x00100000000ddc79
- (struct __SFNode *)copyNodeForName:(id)arg1;	// IMP=0x00100000000ddbd3
- (void)ejectDisksIfNeeded:(id)arg1 diskNames:(id)arg2;	// IMP=0x00100000000ddbcd
- (void)removeService:(id)arg1 type:(id)arg2 domain:(id)arg3;	// IMP=0x00100000000dd871
- (void)cleanupRecordQueryForNetService:(id)arg1 recordType:(unsigned short)arg2;	// IMP=0x00100000000dd7ae
- (void)cleanupRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;	// IMP=0x00100000000dd767
- (void)cleanupRecordQueryForKey:(id)arg1;	// IMP=0x00100000000dd666
- (void)startRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4 interface:(unsigned int)arg5;	// IMP=0x00100000000dd3bc
- (void)addQueryToDictionary:(struct _DNSServiceRef_t **)arg1 name:(id)arg2 type:(id)arg3 domain:(id)arg4 recordType:(unsigned short)arg5;	// IMP=0x00100000000dd24a
- (id)queryKey:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;	// IMP=0x00100000000dd184
- (void)addService:(id)arg1 type:(id)arg2 domain:(id)arg3 interface:(unsigned int)arg4;	// IMP=0x00100000000dcb9c
@property(readonly, copy) NSArray *nodes;
- (void)updateServerCacheIfNeeded;	// IMP=0x00100000000dc923
- (void)updateSecondaryNameForNodes:(id)arg1;	// IMP=0x00100000000dc80c
- (void)removeInvalidNodes:(id)arg1;	// IMP=0x00100000000dc619
- (void)invalidate;	// IMP=0x00100000000dc57b
- (void)stop;	// IMP=0x00100000000dc2d8
- (void)logAirDropSessionInfo;	// IMP=0x00100000000dc13c
- (void)start;	// IMP=0x00100000000dbfee
- (void)updateBrowserState;	// IMP=0x00100000000dba1d
- (_Bool)shouldStart;	// IMP=0x00100000000db9ba
- (void)advertiseHashes;	// IMP=0x00100000000db9b4
- (void)stopConnectionlessAdvertising;	// IMP=0x00100000000db9ae
- (void)startConnectionlessAdvertisingWithData:(id)arg1;	// IMP=0x00100000000db9a8
- (_Bool);	// IMP=0x00100000000db98f
- (_Bool)preferVibrantIcons;	// IMP=0x00100000000db987
- (_Bool)thisIsTheFinder;	// IMP=0x00100000000db8ed
- (unsigned int)getInterface:(unsigned int)arg1;	// IMP=0x00100000000db85c
- (void)removeObservers;	// IMP=0x00100000000db809
- (void)addObservers;	// IMP=0x00100000000db63c
- (void)clearCache;	// IMP=0x00100000000db61c
- (void)dealloc;	// IMP=0x00100000000db5cd
- (void)restartBrowser:(id)arg1;	// IMP=0x00100000000db587
@property long long mode;
- (id)initWithDomain:(id)arg1 types:(id)arg2;	// IMP=0x00100000000db230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

