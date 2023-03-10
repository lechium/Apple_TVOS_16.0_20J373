//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, BSServiceConnectionEndpointInjector, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, UIKBArbiterClientFocusContext, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientHandle : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    _UIKeyboardArbiter *_owner;	// 24 = 0x18
    _Bool _running;	// 32 = 0x20
    FBSCAContextSceneLayer *_sceneLayer;	// 40 = 0x28
    UIKBArbiterClientFocusContext *_remoteFocusContext;	// 48 = 0x30
    _Bool _active;	// 56 = 0x38
    unsigned long long _wantedState;	// 64 = 0x40
    double _level;	// 72 = 0x48
    NSMutableSet *_hostedPids;	// 80 = 0x50
    _Bool _checkingShowability;	// 88 = 0x58
    int _suppressionCount;	// 92 = 0x5c
    int _childrenSuppressionCount;	// 96 = 0x60
    _Bool _wantsFence;	// 100 = 0x64
    _Bool _deactivating;	// 101 = 0x65
    _Bool _keyboardOnScreen;	// 102 = 0x66
    _Bool _multipleScenes;	// 103 = 0x67
    BKSProcessAssertion *_remoteKeepAliveAssertion;	// 104 = 0x68
    unsigned long long _remoteKeepAliveAssertionCount;	// 112 = 0x70
    unsigned long long _remoteKeepAliveTimerCount;	// 120 = 0x78
    NSArray *_cachedContext;	// 128 = 0x80
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;	// 136 = 0x88
    _Bool _inputUIHost;	// 144 = 0x90
    _Bool _hasDebugInformationEntitlement;	// 145 = 0x91
    _Bool _acquiringFocus;	// 146 = 0x92
    _Bool _requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;	// 147 = 0x93
    int _prevActiveIdentifier;	// 148 = 0x94
    NSXPCConnection *_connection;	// 152 = 0x98
    double _iavHeight;	// 160 = 0xa0
}

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;	// IMP=0x001000000000e48b
- (void).cxx_destruct;	// IMP=0x0000000000013832
@property(nonatomic) _Bool requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus; // @synthesize requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus=_requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;
@property(nonatomic, getter=isAcquiringFocus) _Bool acquiringFocus; // @synthesize acquiringFocus=_acquiringFocus;
@property(nonatomic) _Bool hasDebugInformationEntitlement; // @synthesize hasDebugInformationEntitlement=_hasDebugInformationEntitlement;
@property(nonatomic) _Bool inputUIHost; // @synthesize inputUIHost=_inputUIHost;
@property int suppressionCount; // @synthesize suppressionCount=_suppressionCount;
@property(readonly) _Bool multipleScenes; // @synthesize multipleScenes=_multipleScenes;
@property(readonly) _Bool deactivating; // @synthesize deactivating=_deactivating;
@property(readonly) _Bool wantsFence; // @synthesize wantsFence=_wantsFence;
@property int prevActiveIdentifier; // @synthesize prevActiveIdentifier=_prevActiveIdentifier;
@property(readonly) double iavHeight; // @synthesize iavHeight=_iavHeight;
@property(readonly) double level; // @synthesize level=_level;
@property(readonly) unsigned long long wantedState; // @synthesize wantedState=_wantedState;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(readonly, retain) UIKBArbiterClientFocusContext *remoteFocusContext; // @synthesize remoteFocusContext=_remoteFocusContext;
@property(readonly, retain) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property _Bool running; // @synthesize running=_running;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) _Bool hasHostedPids;
- (void)signalEventSourceChanged:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013557
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013380
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(id)arg2 stealingKeyboard:(_Bool)arg3 onCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012eff
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012ee4
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012b26
- (void)invalidate;	// IMP=0x00000000000127fb
- (void)uncacheWindowContext;	// IMP=0x000000000001267f
- (void)cacheWindowContext;	// IMP=0x000000000001250e
- (void)releaseProcessAssertion;	// IMP=0x00000000000123eb
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;	// IMP=0x0000000000011e2d
- (_Bool)isHostingPID:(int)arg1;	// IMP=0x0000000000011dd2
- (_Bool)isHandlerShowableWithHandler:(id)arg1;	// IMP=0x0000000000011bb1
- (id)description;	// IMP=0x0000000000011ac7
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000118a3
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;	// IMP=0x000000000001165c
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;	// IMP=0x0000000000011486
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1 active:(_Bool)arg2;	// IMP=0x00000000000112d2
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;	// IMP=0x00000000000112bc
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;	// IMP=0x0000000000010f16
- (void)notifyIAVHeight:(double)arg1;	// IMP=0x0000000000010e05
- (void)signalKeyboardChangeComplete;	// IMP=0x0000000000010cbe
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010b09
- (void)signalKeyboardClientChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010954
- (void)signalKeyboardUIDidChange:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010765
- (void)setWantsFencing:(_Bool)arg1;	// IMP=0x00000000000105ed
- (void)didDetachLayer;	// IMP=0x00000000000105b2
- (void)didAttachLayer;	// IMP=0x0000000000010208
- (void)checkActivation:(unsigned long long)arg1;	// IMP=0x00000000000100d7
- (void)_reevaluateRemoteFocusContext:(id)arg1;	// IMP=0x000000000000fff1
- (void)setClientFocusContext:(id)arg1;	// IMP=0x000000000000fd6f
- (void)setWindowContextID:(unsigned int)arg1 focusContext:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;	// IMP=0x000000000000f6b0
- (void)clearAcquiringFocusFlags;	// IMP=0x000000000000f44b
- (_Bool)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)arg1 fromSelector:(SEL)arg2;	// IMP=0x000000000000efc1
@property(readonly) _Bool isKeyboardOnScreen;
- (_Bool)_isKeyboardOnScreen:(id)arg1;	// IMP=0x000000000000ed4f
- (void)_deactivateScene;	// IMP=0x000000000000eaf0
- (void)startArbitrationWithExpectedState:(id)arg1 focusContext:(id)arg2 hostingPIDs:(id)arg3 usingFence:(_Bool)arg4 withSuppression:(int)arg5 onConnected:(CDUnknownBlockType)arg6;	// IMP=0x000000000000e88d
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(_Bool)arg3 withSuppression:(int)arg4 onConnected:(CDUnknownBlockType)arg5;	// IMP=0x000000000000e867
- (void)addHostedPids:(id)arg1;	// IMP=0x000000000000e7cc
- (void)updateSuspensionCountForPids:(id)arg1 active:(_Bool)arg2;	// IMP=0x000000000000e747
- (void)setDeactivating:(_Bool)arg1;	// IMP=0x000000000000e73e
@property(readonly) int processIdentifier;
- (void)dealloc;	// IMP=0x000000000000e5e7

@end

