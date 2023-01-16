//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFNetMonitor.h"

@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFNetAddressMonitor : HMFNetMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned int _currentNetworkFlags;	// 24 = 0x18
    HMFNetAddress *_netAddress;	// 32 = 0x20
    struct __SCNetworkReachability *_networkReachabilityRef;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004f16c
@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
- (id)netAddress;	// IMP=0x000000000004f12a
- (id)logIdentifier;	// IMP=0x000000000004f09e
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;	// IMP=0x000000000004eead
- (unsigned long long)reachabilityPath;	// IMP=0x000000000004ee53
- (id)attributeDescriptions;	// IMP=0x000000000004ed87
- (id)shortDescription;	// IMP=0x000000000004ec85
- (void)dealloc;	// IMP=0x000000000004ec1b
- (id)initWithNetAddress:(id)arg1;	// IMP=0x000000000004e58e
- (id)init;	// IMP=0x000000000004e57a
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000004e4c4

@end

