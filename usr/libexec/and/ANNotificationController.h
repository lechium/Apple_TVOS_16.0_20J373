//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationProvider, NSString;

@interface ANNotificationController : NSObject
{
    ANNotificationProvider *_notificationProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005a64
- (id)_clientSideNotifierWithMachServiceName:(id)arg1;	// IMP=0x001000000000575f
- (void)notificationProvider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000005437
- (void)notificationProvider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x00100000000050c5
- (void)removeNotificationsWithEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d9e
- (void)removeNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d4c
- (void)addNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d36
- (id)init;	// IMP=0x0010000000004ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

