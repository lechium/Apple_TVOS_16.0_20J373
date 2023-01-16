//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SIBCEndpointStateManager;
@protocol OS_dispatch_queue, SIBCConnectionManagerDelegate, SIBCConnectionManagerFactory;

__attribute__((visibility("hidden")))
@interface SIBCConnectionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SIBCEndpointStateManager *_connections;	// 16 = 0x10
    id <SIBCConnectionManagerFactory> _factory;	// 24 = 0x18
    id <SIBCConnectionManagerDelegate> _delegate;	// 32 = 0x20
}

+ (id)connectionManagerWithQueue:(id)arg1;	// IMP=0x0060000000007c25
- (void).cxx_destruct;	// IMP=0x0000000000007fdb
@property __weak id <SIBCConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *connections;
- (id)connectionWithEndpointIdentifier:(id)arg1;	// IMP=0x0000000000007f88
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000007e8c
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000007d81
- (void)removeConnectionWithEndpointIdentifier:(id)arg1;	// IMP=0x0000000000007c7e
- (id)addConnectionWithEndpointIdentifier:(id)arg1 applicationName:(id)arg2 nwParameters:(id)arg3;	// IMP=0x0000000000007c76
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000007bc1
- (id)initWithQueue:(id)arg1 factory:(id)arg2;	// IMP=0x0000000000007b0e

@end

