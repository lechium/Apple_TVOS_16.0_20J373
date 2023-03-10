//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, ProgressCache;

@interface LaunchServicesProgress : NSObject
{
    ProgressCache *_progressCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000002137d
- (void).cxx_destruct;	// IMP=0x0020000000022355
- (id)_updatePhaseForJobWithBundleID:(id)arg1 phase:(long long)arg2;	// IMP=0x0010000000021fdf
- (id)_predicateForBundleID:(id)arg1 toUpdateToPhase:(long long)arg2;	// IMP=0x0010000000021e9b
- (_Bool)observeLaunchProhibitedApps;	// IMP=0x0010000000021e93
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0010000000021c55
- (void)resumeApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021a54
- (void)pauseApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021851
- (void)cancelApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002164e
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021543
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x0010000000021498
- (void)dealloc;	// IMP=0x0010000000021423

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

