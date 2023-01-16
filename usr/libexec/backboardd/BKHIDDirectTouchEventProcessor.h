//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDigitizerEventSchedulerBase, BKDisplayController, BKIOHIDService, BKTouchEventServer, BSContinuousMachTimer, BSProcessDeathWatcher, NSArray, NSMutableDictionary, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKHIDDirectTouchEventProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKTouchEventServer *_touchEventServer;	// 16 = 0x10
    BKDigitizerEventSchedulerBase *_scheduler;	// 24 = 0x18
    NSArray *_matchers;	// 32 = 0x20
    BKIOHIDService *_queue_mainDisplayDigitizerService;	// 40 = 0x28
    BKIOHIDService *_queue_mainDisplayAOPDigitizerService;	// 48 = 0x30
    BKIOHIDService *_queue_mainDisplayPencilDigitizerService;	// 56 = 0x38
    double _queue_startMainDisplayDigitizerMatchingTime;	// 64 = 0x40
    BSContinuousMachTimer *_queue_mainDisplayDigitizerSentinelTimer;	// 72 = 0x48
    long long _queue_interfaceOrientation;	// 80 = 0x50
    long long _queue_activeModifiers;	// 88 = 0x58
    id <BSInvalidatable> _globalKeyboardObserver;	// 96 = 0x60
    NSMutableDictionary *_queue_perDisplayInfo;	// 104 = 0x68
    NSMutableDictionary *_queue_referenceToTouchStreamClient;	// 112 = 0x70
    unsigned int _queue_previousVendedTouchStreamReference;	// 120 = 0x78
    NSMutableDictionary *_queue_slotIDToSlotRecord;	// 128 = 0x80
    BSProcessDeathWatcher *_queue_zoomDeathWatcher;	// 136 = 0x88
    NSArray *_queue_zoomExcludedContextIDs;	// 144 = 0x90
    long long _queue_zoomExcludedContextsSeed;	// 152 = 0x98
    struct os_unfair_lock_s _lock;	// 160 = 0xa0
    _Bool _lock_shouldIgnoreTouchesWhileObjectInProximity;	// 164 = 0xa4
    BKDisplayController *_defaultDisplayController;	// 168 = 0xa8
}

+ (id)_persistentPropertyDenyList;	// IMP=0x0020000000038f79
+ (id)digitizerMatchingDictionaries;	// IMP=0x0010000000038dbf
- (void).cxx_destruct;	// IMP=0x0020000000032555
- (void)_queue_applyPersistentPropertiesToServices:(id)arg1;	// IMP=0x0010000000032024
- (void)_queue_applyPersistentProperties:(id)arg1 toServicesMatchingSenderPlist:(id)arg2;	// IMP=0x0010000000031e5d
- (id)_queue_servicesMatchingSenderDescriptor:(id)arg1;	// IMP=0x0010000000031ad9
- (void)_queue_addServicesMatchingSenderDescriptor:(id)arg1 inPerDisplayInfo:(id)arg2 toArray:(id)arg3;	// IMP=0x00100000000318c8
- (id)_determineServiceForEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 fromTouchPad:(_Bool *)arg3;	// IMP=0x00100000000315bf
- (void)_handleDirectTouchEvent:(struct __IOHIDEvent *)arg1 service:(id)arg2;	// IMP=0x001000000003149a
- (id)_queue_contextIDsToIgnoreForZoomSenders;	// IMP=0x0010000000031476
- (id)_queue_slotRecordForSlotID:(unsigned int)arg1;	// IMP=0x00100000000313de
- (void)_queue_applyCachedPropertiesToMultitouchService:(id)arg1;	// IMP=0x00100000000311cc
- (id)_queue_touchStreamClientForReference:(unsigned int)arg1;	// IMP=0x0010000000031140
- (unsigned int)_queue_addTouchStreamClient:(id)arg1 toDisplayUUID:(id)arg2 versionedPID:(long long)arg3;	// IMP=0x0010000000030d7f
- (id)_queue_touchStreamInfoForDisplayUUID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000030c43
- (id)_queue_digitizerStateForService:(id)arg1;	// IMP=0x0010000000030b23
- (id)_queue_addDigitizerStateForService:(id)arg1;	// IMP=0x0010000000030314
- (id)_queue_displayInfoForDisplay:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000030159
- (void)globalKeyboardModifiersDidChange:(long long)arg1;	// IMP=0x001000000003010a
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000002fcc3
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000002f60f
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002f32d
- (void);	// IMP=0x001000000002f2c0
- (void)_queue_enumerateDigitizersForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f253
- (void)_queue_enumerateDigitizersForDisplay:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f065
- (void)_queue_windowServerDidDeleteSlotID:(unsigned int)arg1;	// IMP=0x001000000002ef4c
- (id)authenticationMessageForTouchAtScreenPoint:(struct CGPoint)arg1 displayUUID:(id)arg2 eventType:(unsigned int)arg3 secureName:(unsigned int)arg4 excludeContextIDs:(id)arg5;	// IMP=0x001000000002ee36
- (void)addTouchAuthenticationSpecifications:(id)arg1 registrantEntitled:(_Bool)arg2;	// IMP=0x001000000002ede4
- (id)authenticationSpecificationForSlotID:(unsigned int)arg1 registrantEntitled:(out _Bool *)arg2;	// IMP=0x001000000002ed14
- (void)setBuiltInDisplayInterfaceOrientation:(long long)arg1;	// IMP=0x001000000002ec08
- (void)setExcludedZoomContextIDs:(id)arg1 fromVersionedPID:(long long)arg2;	// IMP=0x001000000002ebb5
- (id)persistentPropertiesForKeys:(id)arg1 forServicesMatchingDescriptor:(id)arg2;	// IMP=0x001000000002ead1
- (void)setPersistentProperties:(id)arg1 forServicesMatchingDescriptor:(id)arg2;	// IMP=0x001000000002e880
- (void)setPersistentProperty:(id)arg1 forKey:(id)arg2 forServicesMatchingDescriptor:(id)arg3;	// IMP=0x001000000002e7ce
@property(nonatomic) _Bool shouldIgnoreTouchesWhileObjectInProximity;
- (void)postTouchAnnotations:(id)arg1 sourcePID:(int)arg2;	// IMP=0x001000000002e716
- (void)setOffset:(struct CGPoint)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x001000000002e65f
- (void)setRoutingPolicy:(id)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x001000000002e5ae
- (_Bool)detachTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 assignUserIdentifier:(unsigned int)arg3 policy:(id)arg4 offset:(struct CGPoint)arg5;	// IMP=0x001000000002e4fd
- (void)transferTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 toContextID:(unsigned int)arg3;	// IMP=0x001000000002e4a6
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 forTouchStreamIdentifier:(unsigned int)arg4;	// IMP=0x001000000002e3f0
- (void)invalidateTouchStreamReference:(unsigned int)arg1;	// IMP=0x001000000002e3a2
- (unsigned int)addTouchStreamForContextID:(unsigned int)arg1 display:(id)arg2 versionedPID:(long long)arg3 identifier:(unsigned int)arg4 shouldSendAmbiguityRecommendations:(_Bool)arg5;	// IMP=0x001000000002e2fa
- (void)setHitTestRegions:(id)arg1 forDisplay:(id)arg2;	// IMP=0x001000000002e2a7
- (id)cancelAndSuppressTouchesOnDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x001000000002e0e2
- (void)cancelTouchesOnAllDisplays;	// IMP=0x001000000002dff1
- (void)cancelTouchesOnMainDisplay;	// IMP=0x001000000002dfdd
- (void)cancelTouchesOnDisplay:(id)arg1;	// IMP=0x001000000002de45
- (void)cancelTouchesWithIdentifiers:(id)arg1;	// IMP=0x001000000002dcfc
@property(readonly, retain) BKIOHIDService *mainDisplayPencilDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayAOPDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayDigitizerService;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000002da42
- (void)didInitializeRegistryWithContext:(id)arg1;	// IMP=0x001000000002d98d
- (id)initWithContext:(id)arg1;	// IMP=0x001000000002d09d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
