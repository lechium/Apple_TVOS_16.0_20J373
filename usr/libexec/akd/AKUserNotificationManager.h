//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface AKUserNotificationManager : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000034b79
- (id)_notificationCategories;	// IMP=0x00100000000349e5
- (id)_notificationContent:(id)arg1;	// IMP=0x001000000003471d
- (void)postUserNotification:(id)arg1;	// IMP=0x0010000000034482
- (id)initWithNotificationCenter:(id)arg1;	// IMP=0x00100000000343da
- (id)init;	// IMP=0x0010000000034379

@end

