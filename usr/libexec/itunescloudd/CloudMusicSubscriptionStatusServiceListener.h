//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudMusicSubscriptionStatusServiceListener : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    NSXPCListener *_serviceListener;	// 24 = 0x18
}

+ (id)sharedMusicSubscriptionStatusServiceListener;	// IMP=0x0020000000081886
- (void).cxx_destruct;	// IMP=0x0020000000081432
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000812b3
- (void)performSubscriptionStatusRequest:(id)arg1 forUniqueIdentifier:(id)arg2;	// IMP=0x0010000000081191
- (void)stop;	// IMP=0x0010000000081146
- (void)start;	// IMP=0x00100000000810fb
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)dealloc;	// IMP=0x001000000008102f
- (id)_init;	// IMP=0x0010000000080f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

