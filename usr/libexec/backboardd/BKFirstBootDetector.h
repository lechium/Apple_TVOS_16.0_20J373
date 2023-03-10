//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKAlternateSystemAppManager, BKSystemShellSentinel, NSHashTable, NSString;
@protocol BKFirstBootTokenProviding, BSInvalidatable, OS_dispatch_queue;

@interface BKFirstBootDetector : NSObject
{
    BKSystemShellSentinel *_systemAppSentinel;	// 8 = 0x8
    id <BKFirstBootTokenProviding> _firstBootToken;	// 16 = 0x10
    id <BSInvalidatable> _systemShellObserving;	// 24 = 0x18
    BKAlternateSystemAppManager *_alternateSystemAppManager;	// 32 = 0x20
    NSHashTable *_queue_observers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000025fd5
- (void).cxx_destruct;	// IMP=0x0020000000025d83
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) BKSystemShellSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
- (void)_queue_finishBootingIfNecessaryAndTellObservers:(_Bool)arg1;	// IMP=0x0010000000025b61
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x0010000000025b16
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000025a8b
- (void)addObserver:(id)arg1;	// IMP=0x0010000000025a00
@property(readonly, nonatomic, getter=isFirstBoot) _Bool firstBoot;
@property(readonly, copy) NSString *description;
- (id)initWithSystemAppSentinel:(id)arg1 firstBootToken:(id)arg2 alternateSystemAppManager:(id)arg3;	// IMP=0x00100000000257ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

