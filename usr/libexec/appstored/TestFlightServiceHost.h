//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDExtensionMonitor, NSExtension, NSString;
@protocol OS_dispatch_queue, TestFlightServiceHostDelegate;

@interface TestFlightServiceHost : NSObject
{
    ASDExtensionMonitor *_monitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_runQueue;	// 24 = 0x18
    NSExtension *_currentExtension;	// 32 = 0x20
    double _serviceTime;	// 40 = 0x28
    id <TestFlightServiceHostDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001d45f0
@property(nonatomic) __weak id <TestFlightServiceHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onRunQueue_callExtensionWithContext:(CDUnknownBlockType)arg1 interruptionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d4379
- (void)_callExtensionWithContext:(CDUnknownBlockType)arg1 interruptionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d42a1
- (void)_onRunQueue_updateCurrentExtensionTo:(id)arg1;	// IMP=0x00100000001d3fc7
- (void)invokeCommand:(id)arg1 withArguments:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d39e4
- (void)reloadAppsFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d352f
- (void)notifyOfReachedTerminalPhaseWithBetaBundle:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d2f5d
- (void)notifyOfReceivedPushMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d2a76
- (void)notifyOfReceivedPushToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d253d
@property(readonly, nonatomic) NSString *extensionIdentifier;
- (long long)_onRunQueue_extensionStatus;	// IMP=0x00100000001d240d
@property(readonly, nonatomic) long long extensionStatus;
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001d1f3a

@end

