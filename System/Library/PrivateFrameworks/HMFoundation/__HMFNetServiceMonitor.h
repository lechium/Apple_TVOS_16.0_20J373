//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFNetMonitor.h"

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor : HMFNetMonitor
{
    HMFNetService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000439a3
@property(readonly) HMFNetService *service; // @synthesize service=_service;
- (id)logIdentifier;	// IMP=0x0000000000043970
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000043807
- (unsigned long long)reachabilityPath;	// IMP=0x00000000000437ee
- (id)netAddress;	// IMP=0x0000000000043793
- (void)dealloc;	// IMP=0x0000000000043719
- (id)initWithNetService:(id)arg1;	// IMP=0x0000000000043647
- (id)initWithNetAddress:(id)arg1;	// IMP=0x0000000000043591

@end

