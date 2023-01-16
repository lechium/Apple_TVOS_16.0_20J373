//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLLocation, NSMutableArray, NSMutableSet, NSString;
@protocol CLTransitMacTileDataProviderProtocol, CLWifiServiceProtocol;

@interface CLTransitMacMonitor : CLIntersiloService
{
    id <CLWifiServiceProtocol> _wifiServiceProxy;	// 8 = 0x8
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 16 = 0x10
    id <CLTransitMacTileDataProviderProtocol> _transitMacTileDataProviderProxy;	// 24 = 0x18
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::default_delete<CLFilteredLocationController_Type::Client>> _locationClient;	// 32 = 0x20
    unsigned long long _currentState;	// 40 = 0x28
    NSMutableSet *_clients;	// 48 = 0x30
    NSMutableArray *_observedTransitAccessPointsCache;	// 56 = 0x38
    CLLocation *_mostRecentLocation;	// 64 = 0x40
}

+ (_Bool)isSupported;	// IMP=0x00200000009b59a5
+ (id)getSilo;	// IMP=0x00100000009b590c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009b58f3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009b5896
- (id).cxx_construct;	// IMP=0x00200000009b7b4f
- (void).cxx_destruct;	// IMP=0x00100000009b7afd
@property(retain, nonatomic) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
@property(retain, nonatomic) NSMutableArray *observedTransitAccessPointsCache; // @synthesize observedTransitAccessPointsCache=_observedTransitAccessPointsCache;
- (void)setClients:(id)arg1;	// IMP=0x00100000009b7aa8
- (id)clients;	// IMP=0x00100000009b7a97
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000009b78fb
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000009b7044
- (void)processNewAccessPoints:(const void *)arg1 transitTileResults:(id)arg2;	// IMP=0x00100000009b636b
- (void)stopMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x00100000009b6048
- (void)startMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x00100000009b5f3a
- (void)endService;	// IMP=0x00100000009b5dcd
- (void)beginService;	// IMP=0x00100000009b59ad
- (id)init;	// IMP=0x00100000009b5968

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
