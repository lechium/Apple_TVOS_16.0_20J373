//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ADDeviceSyncMessagingServiceDelegate, OS_dispatch_queue;

@interface ADDeviceSyncMessagingServiceRapport : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    id <ADDeviceSyncMessagingServiceDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a27d0
- (void)_invalidate;	// IMP=0x00100000000a276f
- (void)sendMessage:(id)arg1 toDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a263d
@property(readonly, nonatomic) NSString *channel;
- (void)invalidate;	// IMP=0x00100000000a25c8
- (void)dealloc;	// IMP=0x00100000000a258a
- (id)initWithMode:(long long)arg1 delegate:(id)arg2;	// IMP=0x00100000000a248d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

