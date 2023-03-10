//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface VSServiceListener : NSObject
{
    NSArray *_entitlementNames;	// 8 = 0x8
    NSXPCInterface *_exportedInterface;	// 16 = 0x10
    id _exportedObject;	// 24 = 0x18
    NSMutableSet *_connectionHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000075804
@property(retain, nonatomic) NSMutableSet *connectionHandlers; // @synthesize connectionHandlers=_connectionHandlers;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(copy, nonatomic) NSArray *entitlementNames; // @synthesize entitlementNames=_entitlementNames;
- (void)connectionHandlerDidFinish:(id)arg1;	// IMP=0x0000000000075788
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000007531b
- (void)_removeConnectionHandler:(id)arg1;	// IMP=0x0000000000075280
- (void)_addConnectionHandler:(id)arg1;	// IMP=0x00000000000751e5
- (id)init;	// IMP=0x000000000007518f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

