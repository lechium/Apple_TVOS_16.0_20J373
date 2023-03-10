//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray;

@interface ACAccountStore (ICAccountStoreAdditions)
+ (id)ic_sharedAccountStore;	// IMP=0x00200000000de58b
- (id)_ic_storeAccountType;	// IMP=0x00100000000dce7e
- (id)ic_storeAccountForStoreAccountID:(id)arg1;	// IMP=0x00100000000dcd49
@property(retain, nonatomic, setter=ic_setActiveLockerAccount:) ACAccount *ic_activeLockerAccount;
@property(retain, nonatomic, setter=ic_setActiveStoreAccount:) ACAccount *ic_activeStoreAccount;
@property(readonly, nonatomic) ACAccount *ic_primaryAppleAccount;
@property(readonly, copy, nonatomic) NSArray *ic_allStoreAccounts;
- (id)ic_localStoreAccountWithError:(id *)arg1;	// IMP=0x00100000000dc5a3
- (void)ic_localStoreAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dc515
- (id)ic_storeAccountForHomeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dc279
- (void)ic_storeAccountForHomeUserIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dc142
- (id)ic_storeAccountTypeWithError:(id *)arg1;	// IMP=0x00100000000dc02d
- (void)ic_storeAccountTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dbf8e
- (id)ic_storeAccountForStoreAccountID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dbcf2
- (void)ic_storeAccountForStoreAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dbbbb
- (id)ic_primaryAppleAccountWithError:(id *)arg1;	// IMP=0x00100000000db9e3
- (void)ic_primaryAppleAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000db955
- (_Bool)ic_disableActiveLockerAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000db709
- (_Bool)ic_setActiveLockerAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000db3e7
- (void)ic_setActiveLockerAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000db219
- (id)ic_activeLockerAccountWithError:(id *)arg1;	// IMP=0x00100000000db179
- (void)ic_activeLockerAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000db0eb
- (_Bool)ic_setActiveStoreAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dacb6
- (void)ic_setActiveStoreAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dabf8
- (id)ic_activeStoreAccountWithError:(id *)arg1;	// IMP=0x00100000000daa12
- (void)ic_activeStoreAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000da984
- (id)ic_allStoreAccountsWithError:(id *)arg1;	// IMP=0x00100000000da7a0
- (void)ic_allStoreAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000da70e
@end

