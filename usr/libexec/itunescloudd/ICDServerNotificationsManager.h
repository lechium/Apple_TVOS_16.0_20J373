//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDServerNotificationsManagerDelegate, OS_dispatch_queue;

@interface ICDServerNotificationsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcStreamHandlerQueue;	// 8 = 0x8
    id <ICDServerNotificationsManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002c2a0
@property(readonly, nonatomic) __weak id <ICDServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x001000000002c1dd
- (void)_handleFamilyContentDeletionNotification:(id)arg1 streamEvent:(id)arg2;	// IMP=0x001000000002bfa2
- (void)_handleApplicationRegistration:(_Bool)arg1 notificationName:(id)arg2 streamEvent:(id)arg3;	// IMP=0x001000000002bccf
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x001000000002bc22
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x001000000002bb5f
- (void)_handleAllowsMusicVideosChangedNotification:(id)arg1;	// IMP=0x001000000002baea
- (void)_handleAllowsExplicitContentChangedNotification:(id)arg1;	// IMP=0x001000000002ba75
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x001000000002b9b2
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x001000000002b8ef
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x001000000002b82c
- (void)_handleFirstUnlockNotification:(id)arg1;	// IMP=0x001000000002b77f
- (void)_didReceiveTelephonyCenterNotification:(id)arg1;	// IMP=0x001000000002b5e3
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x001000000002b436
- (void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2;	// IMP=0x001000000002b2dd
- (void)_tearDownNotifications;	// IMP=0x001000000002b27a
- (void)_setupNotifications;	// IMP=0x001000000002ad70
- (void)dealloc;	// IMP=0x001000000002ad32
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000002ac76

@end

