//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationController, NSString, NSXPCListener;

@interface ANDaemon : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ANNotificationController *_notificationController;	// 16 = 0x10
}

+ (id)_nameForProcessWithPID:(int)arg1;	// IMP=0x0020000000004a89
+ (id)sharedInstance;	// IMP=0x001000000000451f
- (void).cxx_destruct;	// IMP=0x0020000000004b16
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000046a2
- (void)start;	// IMP=0x001000000000463b
- (void)dealloc;	// IMP=0x00100000000045ca
- (id)init;	// IMP=0x0010000000004574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
