//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCRateControllerManager
{
    NSMutableDictionary *_shareProfileDictionary;	// 24 = 0x18
    NSMutableDictionary *_rateSharingClientMap;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0060000000062b35
- (_Bool)deregisterRateSharingClient:(id)arg1;	// IMP=0x0000000000063370
- (unsigned int)countRateControllersForInterfaceType:(id)arg1;	// IMP=0x0000000000063313
- (void)updateShareProfileForInterfaceType:(id)arg1;	// IMP=0x00000000000630d4
- (_Bool)registerRateSharingClient:(id)arg1 forInterfaceType:(unsigned int)arg2;	// IMP=0x0000000000062d6b
- (void)dealloc;	// IMP=0x0000000000062cd3
- (id)init;	// IMP=0x0000000000062b7a

@end
