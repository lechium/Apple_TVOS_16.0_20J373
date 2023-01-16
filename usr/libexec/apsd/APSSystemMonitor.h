//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable;

@interface APSSystemMonitor : NSObject
{
    NSHashTable *_listeners;	// 8 = 0x8
    NSDate *_dateSystemLockLastChanged;	// 16 = 0x10
    NSDate *_dateScreenLightLastChanged;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    _Bool _willSleep;	// 33 = 0x21
    _Bool _usesPowerNotifications;	// 34 = 0x22
    _Bool _watchesScreenLightState;	// 35 = 0x23
    _Bool _watchesSystemLockState;	// 36 = 0x24
    _Bool _systemLocked;	// 37 = 0x25
    _Bool _screenLit;	// 38 = 0x26
}

+ (id)sharedInstance;	// IMP=0x0040000000097834
- (void).cxx_destruct;	// IMP=0x0020000000098132
@property(nonatomic) _Bool usesPowerNotifications; // @synthesize usesPowerNotifications=_usesPowerNotifications;
@property(readonly, nonatomic) _Bool isSystemLocked; // @synthesize isSystemLocked=_systemLocked;
@property(readonly, retain, nonatomic) NSDate *dateSystemLockLastChanged; // @synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged;
@property(readonly, retain, nonatomic) NSDate *dateScreenLightLastChanged; // @synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged;
@property(readonly, nonatomic) _Bool isScreenLit; // @synthesize isScreenLit=_screenLit;
@property(nonatomic, setter=setActive:) _Bool isActive; // @synthesize isActive=_active;
@property(nonatomic) _Bool watchesSystemLockState; // @synthesize watchesSystemLockState=_watchesSystemLockState;
@property(readonly, nonatomic) _Bool systemIsSleeping; // @synthesize systemIsSleeping=_willSleep;
@property(nonatomic) _Bool watchesScreenLightState; // @synthesize watchesScreenLightState=_watchesScreenLightState;
- (void)removeListener:(id)arg1;	// IMP=0x001000000009805a
- (void)addListener:(id)arg1;	// IMP=0x0010000000097fc6
- (void)_setSystemLockState:(_Bool)arg1;	// IMP=0x0010000000097e75
- (void)_setSystemScreenState:(_Bool)arg1;	// IMP=0x0010000000097d24
- (void)_systemWillSleep;	// IMP=0x0010000000097c6d
- (void)_systemDidWake;	// IMP=0x0010000000097c50
- (void)_deliverNotificationSelector:(SEL)arg1;	// IMP=0x0010000000097b9f
- (void)dealloc;	// IMP=0x00100000000978f3
- (id)init;	// IMP=0x0010000000097889

@end

