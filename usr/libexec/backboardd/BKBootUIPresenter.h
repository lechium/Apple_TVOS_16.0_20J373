//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKBootUIOverlayVendor, BKDisplayRenderOverlay, BKDisplayRenderOverlayManager, BKFirstBootDetector, BKSystemShellSentinel, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKBootUIPresenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKBootUIOverlayVendor *_bootUIOverlayVendor;	// 16 = 0x10
    BKSystemShellSentinel *_systemAppSentinel;	// 24 = 0x18
    BKFirstBootDetector *_firstBootDetector;	// 32 = 0x20
    BKDisplayRenderOverlayManager *_renderOverlayManager;	// 40 = 0x28
    id <BSInvalidatable> _systemShellObserving;	// 48 = 0x30
    BKDisplayRenderOverlay *_underlay;	// 56 = 0x38
    BKDisplayRenderOverlay *_overlay;	// 64 = 0x40
    int _screenOwnerPID;	// 72 = 0x48
    NSString *_screenOwnerBundleIdentifier;	// 80 = 0x50
    _Bool _isOverlaySustained;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x002000000006fcca
- (void).cxx_destruct;	// IMP=0x002000000006f6af
- (void)_queue_removeUnderlay;	// IMP=0x001000000006f60e
- (void)_queue_addUnderlay;	// IMP=0x001000000006f489
- (void)_queue_addOverlayForReason:(id)arg1;	// IMP=0x001000000006f26a
- (void)_queue_removeOverlayWithAnimationSettings:(id)arg1;	// IMP=0x001000000006f1ac
- (void)_queue_updateOverlayForReason:(id)arg1;	// IMP=0x001000000006e9cf
- (void)_queue_setScreenOwnerPID:(int)arg1;	// IMP=0x001000000006e780
- (void)_sync;	// IMP=0x001000000006e76b
- (void)systemShellChangedWithPrimary:(id)arg1;	// IMP=0x001000000006e6e0
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x001000000006e655
- (void)firstBootDetectorDidFinishFirstBoot:(id)arg1;	// IMP=0x001000000006e5ca
- (void)sustainOverlayForReason:(id)arg1;	// IMP=0x001000000006e53d
- (void)dismissOverlayWithAnimationSettings:(id)arg1 requstedByPID:(int)arg2;	// IMP=0x001000000006e4a4
@property(readonly, nonatomic, getter=isShowingBootUI) _Bool showingBootUI;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006e14a
- (id)initWithSystemAppSentinel:(id)arg1 alternateSystemAppManager:(id)arg2 firstBootDetector:(id)arg3 bootUIOverlayVendor:(id)arg4 renderOverlayManager:(id)arg5;	// IMP=0x001000000006de9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
