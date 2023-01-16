//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSMutableArray, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, OS_nw_interface, OS_nw_parameters, OS_nw_path_evaluator, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCInterfaceUsabilityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_scQueue;	// 16 = 0x10
    long long _interfaceIdentifier;	// 24 = 0x18
    CUTWeakReference *_delegateReference;	// 32 = 0x20
    NSObject<OS_nw_parameters> *_pathParameters;	// 40 = 0x28
    NSObject<OS_nw_path_evaluator> *_evaluator;	// 48 = 0x30
    NSObject<OS_nw_interface> *_lastInterface;	// 56 = 0x38
    NSObject<OS_nw_interface> *_lastDelegateInterface;	// 64 = 0x40
    _Bool _isPathSatisfied;	// 72 = 0x48
    void *_dynamicStore;	// 80 = 0x50
    struct __CFString *_lqKey;	// 88 = 0x58
    int _linkQuality;	// 96 = 0x60
    _Bool _trackUsability;	// 100 = 0x64
    unsigned long long _thresholdOffTransitionCount;	// 104 = 0x68
    double _trackedTimeInterval;	// 112 = 0x70
    NSMutableArray *_offTransitions;	// 120 = 0x78
    NSRecursiveLock *_recursiveLock;	// 128 = 0x80
}

+ (id)stringForLinkQuality:(int)arg1;	// IMP=0x001000000001391b
+ (_Bool)isBadLinkQuality:(int)arg1;	// IMP=0x0010000000012b5b
+ (_Bool)isPoorLinkQuality:(int)arg1;	// IMP=0x0010000000012b0b
- (void).cxx_destruct;	// IMP=0x00000000000142f8
- (_Bool)_createLinkQualityMonitor:(_Bool)arg1;	// IMP=0x0000000000013f18
- (void)_dynamicStoreCallbackForKeys:(id)arg1;	// IMP=0x0000000000013eb3
- (void)_dynamicStoreCallback:(id)arg1;	// IMP=0x0000000000013c25
- (void)_processLinkQualityUpdateWithChangedKey:(id)arg1 updatedLinkQuality:(int)arg2;	// IMP=0x000000000001395d
- (void)_unscheduleLinkQualityMonitor;	// IMP=0x00000000000138d4
- (void)_updatePathParameters;	// IMP=0x00000000000137e6
- (void)_pathUpdate:(id)arg1;	// IMP=0x00000000000131b4
- (void)_createPathEvaluator;	// IMP=0x0000000000013000
- (void)_unschedulePathEvaluator;	// IMP=0x0000000000012f1b
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012d9c
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) long long interfaceIdentifier;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
- (_Bool)_isInterfaceHistoricallyUsable;	// IMP=0x0000000000012a38
@property(readonly, nonatomic) _Bool isInterfaceUsable;
- (_Bool)_isInterfaceUsable;	// IMP=0x00000000000129d9
- (void)setTrackedTimeInterval:(double)arg1;	// IMP=0x0000000000012976
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;	// IMP=0x0000000000012923
- (void)setTrackUsability:(_Bool)arg1;	// IMP=0x000000000001289d
- (void)_flushStaleTransitions;	// IMP=0x0000000000012710
- (void)_updateOffTransitionsForLinkQualityChange;	// IMP=0x0000000000012651
- (id)currentInterfaceName;	// IMP=0x00000000000125cc
- (void)dealloc;	// IMP=0x0000000000012537
- (id)initWithInterfaceIdentifier:(long long)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000001242c
- (id)init;	// IMP=0x00000000000123ae

// Remaining properties
@property(readonly, nonatomic) int currentRAT;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long interface5GMode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;

@end

