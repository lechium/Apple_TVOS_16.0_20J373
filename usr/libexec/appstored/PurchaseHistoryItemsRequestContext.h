//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray, NSNumber;

@interface PurchaseHistoryItemsRequestContext : NSObject
{
    long long _accountID;	// 8 = 0x8
    ACAccount *_requestingAccount;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    NSArray *_knownApps;	// 32 = 0x20
    NSNumber *_revision;	// 40 = 0x28
    unsigned long long _purchaseHistoryContext;	// 48 = 0x30
}

+ (id)newContextWithKnownApps:(id)arg1 revision:(id)arg2 forAccountID:(long long)arg3 requestingAccount:(id)arg4 client:(id)arg5 purchaseHistoryContext:(unsigned long long)arg6;	// IMP=0x0040000000060d15
- (void).cxx_destruct;	// IMP=0x0020000000060f2e
@property(readonly) unsigned long long purchaseHistoryContext; // @synthesize purchaseHistoryContext=_purchaseHistoryContext;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSArray *knownApps; // @synthesize knownApps=_knownApps;
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *requestingAccount; // @synthesize requestingAccount=_requestingAccount;
@property(readonly) long long accountID; // @synthesize accountID=_accountID;
- (id)_initWithKnownApps:(id)arg1 revision:(id)arg2 forAccountID:(long long)arg3 requestingAccount:(id)arg4 client:(id)arg5 purchaseHistoryContext:(unsigned long long)arg6;	// IMP=0x0010000000060dd1

@end

