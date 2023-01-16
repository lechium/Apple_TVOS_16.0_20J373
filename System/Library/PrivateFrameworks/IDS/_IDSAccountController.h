//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSAccountController : NSObject
{
    id _delegateContext;	// 8 = 0x8
    NSMapTable *_delegateToInfo;	// 16 = 0x10
    NSString *_serviceToken;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSMutableSet *_cachedAccounts;	// 40 = 0x28
    NSMutableSet *_enabledAccounts;	// 48 = 0x30
    NSMutableDictionary *_pendingAccountsToRemove;	// 56 = 0x38
    NSMutableDictionary *_transactionIDToHandlersMap;	// 64 = 0x40
    _Bool _accountsLoaded;	// 72 = 0x48
    _Bool _isLocalAccountVisible;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x0000000000086d29
- (void)accountDisabled:(id)arg1 onService:(id)arg2;	// IMP=0x000000000008691b
- (void)accountEnabled:(id)arg1 onService:(id)arg2;	// IMP=0x00000000000864e0
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;	// IMP=0x0000000000085f99
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;	// IMP=0x0000000000085022
- (void)accountUpdated:(id)arg1;	// IMP=0x0000000000084925
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000084553
- (void)accountAdded:(id)arg1;	// IMP=0x0000000000084028
- (void)disableAccount:(id)arg1;	// IMP=0x0000000000083cd6
- (void)enableAccount:(id)arg1;	// IMP=0x00000000000839d2
- (void)_updateLocalAccountVisibility;	// IMP=0x00000000000831f2
- (void)_removeAccount:(id)arg1;	// IMP=0x00000000000830a4
- (void)_removeAndDeregisterAccount:(id)arg1;	// IMP=0x0000000000082f2d
- (void)addAccount:(id)arg1;	// IMP=0x0000000000082cf4
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008271d
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000822f5
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000822db
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000081ffa
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;	// IMP=0x0000000000081cb4
- (id)accountWithUniqueID:(id)arg1;	// IMP=0x00000000000819e7
- (void)_loadCachedAccounts;	// IMP=0x00000000000814ea
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;	// IMP=0x0000000000080e65
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x0000000000080777
- (void)daemonDisconnected;	// IMP=0x000000000008068e
- (void)_connect;	// IMP=0x0000000000080498
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x000000000007fc79
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007fc56
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x000000000007fc2d
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007fc19
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000007fbab
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000007fa20
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSSet *enabledAccounts;
@property(readonly, nonatomic) NSSet *internalAccounts;
@property(readonly, nonatomic) NSSet *accounts;
- (void)dealloc;	// IMP=0x000000000007f2ab
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;	// IMP=0x000000000007f03d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

