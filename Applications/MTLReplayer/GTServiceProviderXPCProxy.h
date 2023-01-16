//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet, NSUUID;

@interface GTServiceProviderXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
    NSUUID *_deviceUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006329e
- (void)waitForService:(id)arg1;	// IMP=0x0010000000063208
- (void)registerService:(id)arg1 forProcess:(id)arg2;	// IMP=0x0010000000063155
- (id)allServices;	// IMP=0x00100000000630bf
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000062f4b
- (void)dealloc;	// IMP=0x0010000000062f0b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000062e89
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0010000000062cee

@end

