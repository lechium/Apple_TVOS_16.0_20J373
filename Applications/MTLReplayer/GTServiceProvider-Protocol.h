//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTProcessInfo, GTServiceProperties, NSArray, Protocol;
@protocol GTServiceProviderDelegate;

@protocol GTServiceProvider
- (void)waitForService:(Protocol *)arg1;
- (void)registerService:(GTServiceProperties *)arg1 forProcess:(GTProcessInfo *)arg2;
- (NSArray *)allServices;
- (void)setDelegate:(id <GTServiceProviderDelegate>)arg1;
@end

