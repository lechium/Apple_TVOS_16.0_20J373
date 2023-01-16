//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KeepAlive, NSNumber, NSString, URLBag, XPCRequestToken;

@interface PurchaseHistoryUpdateCommand : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    KeepAlive *_keepAlive;	// 24 = 0x18
    unsigned long long _context;	// 32 = 0x20
    NSNumber *_accountID;	// 40 = 0x28
    NSNumber *_expectedItemID;	// 48 = 0x30
    NSNumber *_serverRevision;	// 56 = 0x38
    XPCRequestToken *_requestToken;	// 64 = 0x40
    CDUnknownBlockType _replyHandler;	// 72 = 0x48
}

+ (_Bool)_shouldUpdateLocalRevision:(id)arg1 withServerRevision:(id)arg2;	// IMP=0x00400000000a8e25
+ (id)_localRevisionForAccountID:(id)arg1 usingDatabaseStore:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a7203
+ (void)_setLastUpdatedTimestampForAccountID:(id)arg1 usingDatabaseStore:(id)arg2;	// IMP=0x00100000000a6f3b
+ (id)_lastUpdatedTimestampForAccountID:(id)arg1 usingDatabaseStore:(id)arg2;	// IMP=0x00100000000a6c9b
+ (_Bool)_historyForAccountID:(id)arg1 doesNotContainItemID:(id)arg2 usingDatabaseStore:(id)arg3;	// IMP=0x00100000000a6a22
+ (double)_updatePollingFrequencyInterval;	// IMP=0x00100000000a644b
+ (_Bool)_purchaseRefreshEnabled;	// IMP=0x00100000000a62da
+ (double)_forcedRefreshInterval;	// IMP=0x00100000000a61f8
+ (id)commandWithPushNotificationForAccountID:(id)arg1 serverRevision:(id)arg2;	// IMP=0x00100000000a5561
+ (id)commandWithPurchaseForAccountID:(id)arg1 expectedItemID:(id)arg2;	// IMP=0x00100000000a54e8
+ (id)commandWithContext:(unsigned long long)arg1 forAccountID:(id)arg2;	// IMP=0x00100000000a5490
- (void).cxx_destruct;	// IMP=0x00200000000a8ff0
@property(copy) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain) NSNumber *serverRevision; // @synthesize serverRevision=_serverRevision;
@property(retain) NSNumber *expectedItemID; // @synthesize expectedItemID=_expectedItemID;
@property(readonly) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(readonly) unsigned long long context; // @synthesize context=_context;
- (id)_sendServerRevisionRequestUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x00100000000a88de
- (id)_sendItemsRequestUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x00100000000a8397
- (id)_fetchServerRevisionUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x00100000000a80fc
- (id)_fetchItemsUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x00100000000a7de8
- (id)_generateLogKey;	// IMP=0x00100000000a7c8e
- (_Bool)_updateDatabaseWithDAAPResponse:(id)arg1 databaseStore:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a7422
- (id)_getServerRevisionRequestContextUsingAccount:(id)arg1 databaseStore:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000a68fe
- (id)_getItemsRequestContextUsingAccount:(id)arg1 databaseStore:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000a6525
- (_Bool)shouldRunUsingDatabaseStore:(id)arg1;	// IMP=0x00100000000a5d7c
- (id)runUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x00100000000a589a
- (void)cancelWithReason:(id)arg1;	// IMP=0x00100000000a56be
- (id)initWithAccountID:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x00100000000a55da

@end

