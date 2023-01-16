//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPNetworkMonitor : NSObject
{
    _Bool _cachedIsNetworkUp;	// 8 = 0x8
    NWPathEvaluator *_evaluator;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002483e
@property(nonatomic) _Bool cachedIsNetworkUp; // @synthesize cachedIsNetworkUp=_cachedIsNetworkUp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000246a5
- (void)notifyNetworkStateChange;	// IMP=0x00000000000243cf
- (_Bool)isNetworkUp;	// IMP=0x00000000000242d6
- (_Bool)isMonitoring;	// IMP=0x00000000000242a3
- (void)stopMonitoring;	// IMP=0x000000000002421e
- (void)startMonitoringWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002410c

@end

