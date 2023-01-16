//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;

@interface CSDVoIPApplicationMonitor : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    NSMutableDictionary *_bundleIdentifierToApplicationState;	// 16 = 0x10
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000143a20
@property(readonly, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(readonly, nonatomic) NSMutableDictionary *bundleIdentifierToApplicationState; // @synthesize bundleIdentifierToApplicationState=_bundleIdentifierToApplicationState;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (id)fetchApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00100000001438b5
- (void)setApplicationState:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000014377a
- (id)applicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00100000001436b1
- (void)removeVoIPApplication:(id)arg1;	// IMP=0x0010000000143468
- (void)addVoIPApplication:(id)arg1;	// IMP=0x001000000014320a
- (_Bool)isRunningForegroundForVoIPApplication:(id)arg1;	// IMP=0x00100000001430de
- (void)dealloc;	// IMP=0x001000000014309c
- (id)init;	// IMP=0x0010000000142dd1

@end

