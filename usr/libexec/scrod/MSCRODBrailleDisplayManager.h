//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 224 = 0xe0
    int _notifyLockStateToken;	// 248 = 0xf8
    int _blankScreenToken;	// 252 = 0xfc
    _Bool _isScreenBlank;	// 256 = 0x100
    _Bool _isScreenLocked;	// 257 = 0x101
    _Bool _airplaneMode;	// 258 = 0x102
    _Bool _isBrailleSystemSleeping;	// 259 = 0x103
    RadiosPreferences *_radiosPrefs;	// 264 = 0x108
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000002028
+ (void)initialize;	// IMP=0x0010000000001fd1
+ (id)sharedManager;	// IMP=0x0010000000001fc0
- (void).cxx_destruct;	// IMP=0x002000000000676d
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x00100000000066ef
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x00100000000066ce
- (void)airplaneModeChanged;	// IMP=0x00100000000065e3
- (void)_registerHasBlankedScreenNotification;	// IMP=0x001000000000635b
- (void)_updateScreenLock:(int)arg1 screenBlank:(int)arg2;	// IMP=0x00100000000061b5
- (void)_handleSystemSleep;	// IMP=0x0010000000006197
- (void)_delayedHandleSystemSleep;	// IMP=0x0010000000005e1e
- (void)_wakeFromSleep;	// IMP=0x0010000000005e00
- (void)_delayedWakeFromSleep;	// IMP=0x0010000000005ddd
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x0010000000005be7
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x0010000000005b18
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x0010000000005974
- (unsigned int)_rootPowerPort;	// IMP=0x0010000000005964
- (_Bool)_registerSleepNotifications;	// IMP=0x0010000000005818
- (_Bool)isConfigured;	// IMP=0x00100000000056db
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x001000000000566b
- (id)driverConfiguration;	// IMP=0x0010000000005522
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x0010000000004956
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000048c9
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000047c5
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x0010000000003e59
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002c74
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002c55
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000002b9d
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x0010000000002979
- (void)powerChangedNotification:(id)arg1;	// IMP=0x001000000000295a
- (void)_setupBluetooth;	// IMP=0x0010000000002887
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0010000000002825
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x00100000000027c4
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x001000000000273d
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x00100000000026b6
- (void)invalidate;	// IMP=0x0010000000002675
- (void)_eventQueue_begin;	// IMP=0x001000000000256e
- (void)handleSettingsChange:(id)arg1;	// IMP=0x001000000000247c
- (id)init;	// IMP=0x0010000000002065

@end

