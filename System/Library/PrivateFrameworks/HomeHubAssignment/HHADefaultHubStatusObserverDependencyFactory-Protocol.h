//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSUserDefaults;
@protocol HHUNotifyRegistration, OS_dispatch_queue;

@protocol HHADefaultHubStatusObserverDependencyFactory
- (NSUserDefaults *)createUserDefaults;
- (id <HHUNotifyRegistration>)createPrefsRegistrationWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
@end

