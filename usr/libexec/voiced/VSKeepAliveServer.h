//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, VSServerKeepAliveManager;

@interface VSKeepAliveServer : NSObject
{
    NSXPCListener *_keepAliveListener;	// 8 = 0x8
    VSServerKeepAliveManager *_keepAliveManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000eca8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000eb8e
- (void)resume;	// IMP=0x001000000000eb78
- (void)dealloc;	// IMP=0x001000000000eb1e
- (id)init;	// IMP=0x001000000000ea76

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
