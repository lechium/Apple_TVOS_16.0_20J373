//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;

@interface GCDGameControllerDaemonDelegate : NSObject
{
    NSMutableArray *_appConnections;	// 8 = 0x8
    NSMutableArray *_foregroundAppConnections;	// 16 = 0x10
    NSXPCConnection *_mediaremoted;	// 24 = 0x18
    NSMutableArray *_hidConnections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005bbd
- (void)appDidEnterBackgroundWithPID:(int)arg1;	// IMP=0x001000000000594a
- (void)appWillEnterForegroundWithPID:(int)arg1;	// IMP=0x00100000000056be
- (void)appDidEnterBackground;	// IMP=0x0010000000005657
- (void)appWillEnterForeground;	// IMP=0x00100000000055f0
- (void)removeController:(id)arg1 forward:(_Bool)arg2;	// IMP=0x001000000000537f
- (void)controllerDidDisconnect:(id)arg1;	// IMP=0x001000000000532b
- (void)addController:(id)arg1 forward:(_Bool)arg2;	// IMP=0x0010000000003351
- (void)controllerDidConnect:(id)arg1;	// IMP=0x00100000000032fd
- (void)processMicroControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 withY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;	// IMP=0x00100000000030f5
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;	// IMP=0x0010000000002fc0
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;	// IMP=0x0010000000002f59
- (void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(CDStruct_212a8bf9)arg2 forElement:(int)arg3 forward:(_Bool)arg4;	// IMP=0x0010000000002d31
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(_Bool)arg4;	// IMP=0x0010000000002a89
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000002868
- (_Bool)acceptNewConnectionFromHIDPlugin:(id)arg1;	// IMP=0x0010000000002125
- (_Bool)acceptNewConnectionFromMediaRemote:(id)arg1;	// IMP=0x0010000000001e66
- (_Bool)acceptNewConnection:(id)arg1 fromGCEnabledApp:(id)arg2;	// IMP=0x00100000000018fe
- (_Bool)shouldKeepRunning;	// IMP=0x00100000000018f6
- (void)ping;	// IMP=0x001000000000188f
- (void)dealloc;	// IMP=0x0010000000001800
- (id)init;	// IMP=0x0010000000001774

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
