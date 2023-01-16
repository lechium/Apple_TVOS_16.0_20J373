//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;

@interface UserNotificationManager : NSObject
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001d6854
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x00100000001d65a7
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d63f5
- (id)init;	// IMP=0x00100000001d5f6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
