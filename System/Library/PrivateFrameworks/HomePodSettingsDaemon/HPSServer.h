//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, NSXPCListener;
@protocol HPSImplementer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HPSServer : NSObject
{
    id <HPSImplementer> _homeInterfaceDelegate;	// 8 = 0x8
    NSXPCListener *_serverListener;	// 16 = 0x10
    NSXPCListener *_homeSettingServerListener;	// 24 = 0x18
    NSMutableArray *_homePodAccessoryClients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientInfoSerialQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000021b57
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientInfoSerialQueue; // @synthesize clientInfoSerialQueue=_clientInfoSerialQueue;
@property(retain, nonatomic) NSMutableArray *homePodAccessoryClients; // @synthesize homePodAccessoryClients=_homePodAccessoryClients;
@property(retain, nonatomic) NSXPCListener *homeSettingServerListener; // @synthesize homeSettingServerListener=_homeSettingServerListener;
@property(retain, nonatomic) NSXPCListener *serverListener; // @synthesize serverListener=_serverListener;
@property(nonatomic) __weak id <HPSImplementer> homeInterfaceDelegate; // @synthesize homeInterfaceDelegate=_homeInterfaceDelegate;
- (void)diagnosticInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021a56
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021923
- (void)defaultsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000218b1
- (void)deviceDidUpdateSetting:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000214db
- (void)accessoryDidUpdateAttribute:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000021105
@property(readonly, copy, nonatomic) NSDictionary *diagnosticInfo;
- (void)startConnection;	// IMP=0x0000000000020eab
- (void)homeKitSettingValueForKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020b80
- (void)getHomeKitCachedSettings:(CDUnknownBlockType)arg1;	// IMP=0x000000000002087f
- (void)getHomeAccessoryAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000206ac
- (void)getCurrentHomeAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000204d9
- (void)getAirPlaySettings:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020325
- (void)homeKitAccessorySettingForKeyPath:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ffd7
- (void)isAutomaticSoftwareUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fe1f
- (void)isValidHome:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fc67
- (void)isHomeKitSyncComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000000001faaf
- (void)handleClientDisconnection:(id)arg1;	// IMP=0x000000000001f6ed
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000001eca6
- (id)init;	// IMP=0x000000000001eb46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

