//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet;

@interface GTRemoteDeviceBrowserXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000063d1c
- (void)connectToDevice:(id)arg1;	// IMP=0x0010000000063d16
- (id)allDevices;	// IMP=0x0010000000063c80
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000063bc3
- (void)dealloc;	// IMP=0x0010000000063b83
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000063b01
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0010000000063985

@end

