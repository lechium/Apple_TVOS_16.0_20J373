//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _EXPromiseManager : NSObject
{
    NSMapTable *_promises;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0010000000029ca3
- (void).cxx_destruct;	// IMP=0x000000000002a99e
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) NSMapTable *promises; // @synthesize promises=_promises;
- (void)resolvePromiseWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a7df
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002a741
- (void)unregisterPromise:(id)arg1;	// IMP=0x000000000002a656
- (void)registerPromise:(id)arg1;	// IMP=0x000000000002a501
- (void)resolveObjectOfClasses:(id)arg1 forIdentifier:(id)arg2 endpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a1d2
- (id)resolveObjectOfClasses:(id)arg1 forIdentifier:(id)arg2 endpoint:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000029dc7
@property(readonly) NSXPCListenerEndpoint *endpoint;
- (id)init;	// IMP=0x0000000000029cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

