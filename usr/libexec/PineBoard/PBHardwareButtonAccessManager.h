//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableOrderedSet, NSMutableSet, NSString, PBApplicationProcessStateMonitor;
@protocol OS_os_log;

@interface PBHardwareButtonAccessManager : NSObject
{
    NSObject<OS_os_log> *_logObject;	// 8 = 0x8
    NSMutableOrderedSet *_appsWithVolumeButtonAccess;	// 16 = 0x10
    NSMutableOrderedSet *_appsWithExclusivePlayPauseButtonAccess;	// 24 = 0x18
    NSMutableSet *_suspendedAppsWithVolumeButtonAccess;	// 32 = 0x20
    NSMutableSet *_suspendedAppsWithExclusivePlayPauseButtonAccess;	// 40 = 0x28
    NSString *_focusedSceneBundleIdentifier;	// 48 = 0x30
    PBApplicationProcessStateMonitor *_applicationStateMonitor;	// 56 = 0x38
    NSString *_appWithVolumeButtonAccess;	// 64 = 0x40
    NSString *_appWithExclusivePlayPauseButtonAccess;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x00200000001aed6a
+ (id)dependencyDescription;	// IMP=0x00100000001aec43
- (void).cxx_destruct;	// IMP=0x00200000001afcce
@property(copy, nonatomic) NSString *appWithExclusivePlayPauseButtonAccess; // @synthesize appWithExclusivePlayPauseButtonAccess=_appWithExclusivePlayPauseButtonAccess;
@property(copy, nonatomic) NSString *appWithVolumeButtonAccess; // @synthesize appWithVolumeButtonAccess=_appWithVolumeButtonAccess;
- (void)applicationProcessStateMonitor:(id)arg1 updatedProcessState:(id)arg2;	// IMP=0x00100000001afc84
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x00100000001afba5
- (void)_updateAppButtonAccess;	// IMP=0x00100000001afa36
- (void)_updateApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00100000001af9e0
- (void)_updateApplicationState:(id)arg1;	// IMP=0x00100000001af473
- (void)setExclusivePlayPauseButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x00100000001af28e
- (void)setVolumeButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x00100000001af0a9
- (MISSING_TYPE *)dealloc;	// IMP=0x00100000001af026
- (id)init;	// IMP=0x00100000001aedf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

