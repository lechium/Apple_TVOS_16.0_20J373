//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSString;

@interface PBHomeUIServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
    FBServiceClientAuthenticator *_clientAuthenticator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000060f70
@property(readonly, nonatomic) FBServiceClientAuthenticator *clientAuthenticator; // @synthesize clientAuthenticator=_clientAuthenticator;
- (id)listener;	// IMP=0x0010000000060f5c
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000060b09
- (void)invalidate;	// IMP=0x0010000000060a87
- (void)activate;	// IMP=0x0010000000060928
- (void)dealloc;	// IMP=0x00100000000607a3
- (id)init;	// IMP=0x0010000000060736

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

