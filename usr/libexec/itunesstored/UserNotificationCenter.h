//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface UserNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_userNotifications;	// 16 = 0x10
}

+ (id)defaultCenter;	// IMP=0x00400000001047e6
- (void)_showPreparedNotification:(id)arg1;	// IMP=0x00200000001053de
- (void)_finishUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;	// IMP=0x001000000010518e
- (void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2;	// IMP=0x001000000010512d
- (void)updateUserNotification:(id)arg1 withDictionary:(struct __CFDictionary *)arg2 options:(unsigned long long)arg3;	// IMP=0x001000000010508e
- (void)updateUserNotification:(id)arg1 withDialog:(id)arg2;	// IMP=0x0010000000105042
- (id)showUserNotification:(struct __CFDictionary *)arg1 withOptions:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000104e67
- (id)showUserNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104e06
- (void)showPreparedNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104d78
- (id)showDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104d25
- (id)prepareUserNotificationWithDialog:(id)arg1;	// IMP=0x0010000000104ca5
- (void)cancelUserNotifications:(id)arg1;	// IMP=0x00100000001048c0
- (void)cancelUserNotification:(id)arg1;	// IMP=0x0010000000104863
- (void)dealloc;	// IMP=0x00100000001047a2
- (id)init;	// IMP=0x0010000000104744

@end

