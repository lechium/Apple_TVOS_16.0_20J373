//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTRemoteDeviceBrowser, GTXPCConnection;

@interface GTRemoteDeviceBrowserXPCDispatcher
{
    id <GTRemoteDeviceBrowser> _remoteDeviceBrowser;	// 8 = 0x8
    id <GTXPCConnection> _notifyConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006409f
- (void)notifyDeviceListChanged:(id)arg1;	// IMP=0x0010000000064002
- (void)setDelegate_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000063ffc
- (void)allDevices:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000063f47
- (id)initWithService:(id)arg1 properties:(id)arg2 notifyConnection:(id)arg3;	// IMP=0x0010000000063dc7

@end

