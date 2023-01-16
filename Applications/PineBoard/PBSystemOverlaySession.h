//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSString, PBSystemOverlayDismissalTransaction, PBSystemOverlayPreparationTransaction, PBSystemOverlayPresentationTransaction, TVSStateMachine, UIViewController;
@protocol OS_os_log, PBSystemOverlayContentPresenting, PBSystemOverlaySessionDelegate, PBSystemUIPresenting;

@interface PBSystemOverlaySession : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    PBSystemOverlayPreparationTransaction *_preparationTransaction;	// 16 = 0x10
    PBSystemOverlayPresentationTransaction *_presentationTransaction;	// 24 = 0x18
    PBSystemOverlayDismissalTransaction *_dismissalTransaction;	// 32 = 0x20
    NSMutableArray *_pendingPresentationRequests;	// 40 = 0x28
    NSMutableArray *_pendingDismissalRequests;	// 48 = 0x30
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    NSObject<OS_os_log> *_signpostLog;	// 88 = 0x58
    id <PBSystemUIPresenting> _presentationHandler;	// 96 = 0x60
    long long _layoutLevel;	// 104 = 0x68
    id <PBSystemOverlaySessionDelegate> _delegate;	// 112 = 0x70
    unsigned long long _sceneDeactivationReasons;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000001832c
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons; // @synthesize sceneDeactivationReasons=_sceneDeactivationReasons;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak id <PBSystemOverlaySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) id <PBSystemUIPresenting> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(readonly, nonatomic) NSObject<OS_os_log> *signpostLog; // @synthesize signpostLog=_signpostLog;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_machineNotifyDidInvalidate;	// IMP=0x0010000000018283
- (void)_machineNotifyDidCancelWithContext:(id)arg1;	// IMP=0x001000000001820f
- (void)_machineNotifyDidDismiss;	// IMP=0x0010000000018142
- (void)_machineNotifyWillDismissWithContext:(id)arg1;	// IMP=0x001000000001805b
- (void)_machineNotifyDidPresent;	// IMP=0x0010000000017f8e
- (void)_machineNotifyWillPresent;	// IMP=0x0010000000017ec1
- (void)_machineCleanup;	// IMP=0x0010000000017e50
- (void)_machineAddPendingPresentationRequest:(id)arg1;	// IMP=0x0010000000017e39
- (void)_machineDismissUIWithRequest:(id)arg1;	// IMP=0x0010000000017a26
- (void)_machinePresentUIWithRequest:(id)arg1;	// IMP=0x0010000000017583
- (void)_machinePrepareUIWithProvider:(id)arg1;	// IMP=0x001000000001716f
- (void)_initializeStateMachine;	// IMP=0x0010000000013ea1
- (void)contentPresentingDidDismissContent:(id)arg1;	// IMP=0x0010000000013e1e
- (void)contentPresenting:(id)arg1 willDismissContentWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0010000000013c5d
- (void)makeActive;	// IMP=0x0010000000013c35
- (void)dismissWithRequest:(id)arg1;	// IMP=0x0010000000013b23
- (void)presentWithRequest:(id)arg1;	// IMP=0x0010000000013a4d
- (id)initWithIdentifier:(id)arg1 layoutLevel:(long long)arg2 sceneDeactivationReasons:(unsigned long long)arg3 presentationHandler:(id)arg4 delegate:(id)arg5 signpostLog:(id)arg6;	// IMP=0x00100000000138fa
- (MISSING_TYPE *)init;	// IMP=0x00100000000138ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
