//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject
{
}

+ (id)_centerForBundleId:(id)arg1;	// IMP=0x00100000002c0d1a
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;	// IMP=0x00100000002c0cb9
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;	// IMP=0x00100000002c0a49
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;	// IMP=0x00100000002c0224
+ (_Bool)_badgeBundleId:(id)arg1 increment:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000002c002d
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;	// IMP=0x00100000002bfcce

@end

