//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CUTWeakReference, CoreTelephonyClient, NSString, PCInterfaceUsabilityMonitor;
@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;	// 24 = 0x18
    CUTWeakReference *_delegateReference;	// 32 = 0x20
    _Bool _isInCall;	// 40 = 0x28
    _Bool _isInHighPowerState;	// 41 = 0x29
    _Bool _trackUsability;	// 42 = 0x2a
    unsigned long long _thresholdOffTransitionCount;	// 48 = 0x30
    double _trackedTimeInterval;	// 56 = 0x38
    NSString *_interfaceName;	// 64 = 0x40
    PCInterfaceUsabilityMonitor *_interfaceMonitor;	// 72 = 0x48
    int _currentRAT;	// 80 = 0x50
    unsigned int _currentDataBearerSoMask;	// 84 = 0x54
    int _powerlogCDRXToken;	// 88 = 0x58
    CoreTelephonyClient *_ctClient;	// 96 = 0x60
    int _wwanContextID;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_ctServerQueue;	// 112 = 0x70
    CTXPCServiceSubscriptionContext *_currentDataSimContext;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000164e8
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x00000000000163b1
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x0000000000016261
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016141
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;	// IMP=0x0000000000015a4c
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;	// IMP=0x00000000000159d3
- (void)setTrackUsability:(_Bool)arg1;	// IMP=0x000000000001591f
- (void)_forwardConfigurationOnIvarQueue;	// IMP=0x00000000000158d1
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) int currentRAT; // @synthesize currentRAT=_currentRAT;
- (id)_currentDataSimContext;	// IMP=0x000000000001560d
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) unsigned long long interface5GMode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
- (_Bool)_isCurrentDataSimContextOnIvarQueue:(id)arg1;	// IMP=0x0000000000015587
- (void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3;	// IMP=0x0000000000015342
- (void)_setupWWANMonitor;	// IMP=0x000000000001526c
- (void)dealloc;	// IMP=0x000000000001520e
- (id)initWithDelegateQueue:(id)arg1;	// IMP=0x0000000000015073

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

