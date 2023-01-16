//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionInfoQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000013080
- (void).cxx_destruct;	// IMP=0x00200000000142c4
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue; // @synthesize sessionInfoQueue=_sessionInfoQueue;
- (void)_deregisterAudioSessionNotifications;	// IMP=0x00100000000141c8
- (void)_registerAudioSessionNotifications;	// IMP=0x001000000001419a
- (void)_audioRouteChanged:(id)arg1;	// IMP=0x0010000000013ec9
- (void)_handleInterruption:(id)arg1;	// IMP=0x0010000000013c31
- (void)_registerAudioRouteChangeNotification;	// IMP=0x0010000000013aee
- (void)_registerInterruptionNotification;	// IMP=0x00100000000139ab
- (void)_stopMonitoring;	// IMP=0x0010000000013949
- (void)_startMonitoring;	// IMP=0x00100000000138e7
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00100000000136dd
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;	// IMP=0x001000000001350d
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x001000000001336b
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000013283
- (void)registerObserver:(id)arg1;	// IMP=0x001000000001319a
- (void)dealloc;	// IMP=0x001000000001315c
- (id)init;	// IMP=0x00100000000130d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

