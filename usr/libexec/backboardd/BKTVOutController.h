//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, _BKCloneMirroringClient, _BKDisplayBlankingContext;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKTVOutController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSSet *_queue_replayCloneContextIDs;	// 16 = 0x10
    int _queue_currentVirtualDisplayClientPID;	// 24 = 0x18
    _BKCloneMirroringClient *_queue_currentCloneMirroringClient;	// 32 = 0x20
    _BKDisplayBlankingContext *_blankingContext;	// 40 = 0x28
    id <BSInvalidatable> _systemShellObserving;	// 48 = 0x30
    _Bool _queue_cloneRotationDisabled;	// 56 = 0x38
    _Bool _queue_forceTVOutMode;	// 57 = 0x39
    _Bool _queue_tvOutDisplayHasAvailableModes;	// 58 = 0x3a
    _Bool _queue_systemAppHasCheckedIn;	// 59 = 0x3b
    int _tvOutMode;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x002000000003cc71
- (void)_tetherSettingChanged:(id)arg1;	// IMP=0x001000000003cc6b
- (void)_handleIapServerConnectionDied;	// IMP=0x001000000003cc12
- (void)cloneMirroringClientDidExit:(id)arg1;	// IMP=0x001000000003cb87
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x001000000003ca92
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003c7cb
- (void)dealloc;	// IMP=0x001000000003c717
- (id)init;	// IMP=0x001000000003c231

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
