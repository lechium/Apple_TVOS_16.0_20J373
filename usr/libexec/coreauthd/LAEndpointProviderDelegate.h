//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface LAEndpointProviderDelegate : NSObject
{
    NSXPCListener *_clientListener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000311b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000030c9
- (void)start;	// IMP=0x00100000000030b3
- (id)init;	// IMP=0x001000000000302a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

