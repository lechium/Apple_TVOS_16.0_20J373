//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CNContactsDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    NSArray *_activeXPCListenerPairs;	// 16 = 0x10
}

+ (void)enterSandbox;	// IMP=0x004000000000831e
- (void).cxx_destruct;	// IMP=0x0020000000008c51
@property(retain, nonatomic) NSArray *activeXPCListenerPairs; // @synthesize activeXPCListenerPairs=_activeXPCListenerPairs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void)registerXPCActivities;	// IMP=0x0010000000008ac4
- (id)_notifydListenersByName;	// IMP=0x0010000000008775
- (void)subscribeNotifydListeners;	// IMP=0x00100000000084be
- (void)wakeXPCListeners;	// IMP=0x001000000000841e
- (void)runOnRunLoop:(id)arg1;	// IMP=0x00100000000083b5
- (id)XPCActivities;	// IMP=0x00100000000083a8
- (id)notifydListeners;	// IMP=0x001000000000839b
- (id)XPCListenerPairs;	// IMP=0x001000000000838e
- (id)init;	// IMP=0x0010000000008324

@end
