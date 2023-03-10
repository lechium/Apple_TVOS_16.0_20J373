//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol OS_dispatch_queue;

@interface ActiveAccountObserver : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_cachedStoreFront;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    ACAccount *_activeAccount;	// 32 = 0x20
    ACAccount *_activeSandboxAccount;	// 40 = 0x28
}

+ (_Bool)_shouldNotifyChangeFromExistingAccount:(id)arg1 toCurrentAccount:(id)arg2;	// IMP=0x0020000000089a1e
+ (void)_postAccountDidChangeFromOldAccount:(id)arg1 withAccountStore:(id)arg2;	// IMP=0x00100000000897c2
+ (id)activeSandboxAccount;	// IMP=0x0010000000088c7b
+ (id)activeAccount;	// IMP=0x0010000000088c24
+ (id)sharedInstance;	// IMP=0x00100000000889a2
- (void).cxx_destruct;	// IMP=0x0020000000089d9d
@property(readonly) ACAccount *activeSandboxAccount; // @synthesize activeSandboxAccount=_activeSandboxAccount;
@property(readonly) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void)_handleAppStoreWidget:(id)arg1 isActive:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00100000000897bc
- (void)handleStorefrontChangedNotification:(id)arg1;	// IMP=0x0010000000089542
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000088f00
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x0010000000088cdc
- (id)init;	// IMP=0x00100000000889f7

@end

