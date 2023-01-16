//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface PurchaseController : NSObject
{
    ISOperationQueue *_authenticationOperationQueue;	// 8 = 0x8
    NSMutableIndexSet *_authenticatingBatchIdentifiers;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    _Bool _didGarbageCollect;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSMutableSet *_inflightCanceledIdentifiers;	// 48 = 0x30
    ISOperationQueue *_purchaseOperationQueue;	// 56 = 0x38
    NSMutableSet *_purchasingIdentifiers;	// 64 = 0x40
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x00400000001a10d8
+ (void)movePurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0fb6
+ (void)insertPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0f23
+ (void)finishPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0e14
+ (void)getPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0b24
+ (void)connectClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0a24
+ (void)cancelPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0915
+ (void)addPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a0882
+ (id)sharedController;	// IMP=0x001000000019fde1
- (void)_showPurchasesFailedDialogWithFirstTitle:(id)arg1 count:(long long)arg2;	// IMP=0x00200000001a7a8e
- (void)_showNotEnoughDiskSpaceDialogForPurchases:(id)arg1;	// IMP=0x00100000001a7520
- (id)_purchaseOperationQueue;	// IMP=0x00100000001a74a4
- (id)_placeholderAppPathForBundleIdentifier:(id)arg1;	// IMP=0x00100000001a73fc
- (id)_newPurchasesFromEncodedArray:(id)arg1 client:(id)arg2;	// IMP=0x00100000001a72f1
- (id)_newPurchaseIdentifiersFromEncodedArray:(id)arg1;	// IMP=0x00100000001a7201
- (id)_newEncodedPurchaseEntityPropertiesWithResponse:(id)arg1;	// IMP=0x00100000001a713c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7045
- (void)_garbageCollectInflightPurchases;	// IMP=0x00100000001a6a2c
- (void)_finishPurchaseRequestForClientUniqueID:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000001a6316
- (void)_sendAuthenticateRequestForClientUniqueID:(long long)arg1 withContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a627d
- (void)_finishAuthenticationRequestForBatchIdentifier:(long long)arg1 client:(id)arg2 withAccountID:(id)arg3 error:(id)arg4;	// IMP=0x00100000001a5daf
- (void)_filterPurchases:(id)arg1 withTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a5906
- (void)_enqueueNextPurchase;	// IMP=0x00100000001a50e2
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a4ff8
- (id)_clientForUniqueIdentifier:(long long)arg1;	// IMP=0x00100000001a4ed0
- (id)_clientForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001a4933
- (void)_checkStoreDownloadQueuesForPurchase:(id)arg1 response:(id)arg2;	// IMP=0x00100000001a46a6
- (_Bool)_cancelPurchasesWithBatchIdentifier:(long long)arg1 client:(id)arg2 response:(id)arg3;	// IMP=0x00100000001a4325
- (void)_cancelPurchasesForLackOfDiskSpace:(id)arg1 client:(id)arg2;	// IMP=0x00100000001a4124
- (void)_beginPurchaseBatch:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a35a4
- (id)_authenticationOperationQueue;	// IMP=0x00100000001a3528
- (void)_authenticateForPurchases:(id)arg1 client:(id)arg2;	// IMP=0x00100000001a3263
- (void)_addPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a2a36
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000001a2981
- (id)_newResponsesToPurchasesForClient:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001a26a3
- (void)_moveEncodedPurchaseIDs:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001a25e4
- (void)_markInFlightCanceledPurchaseIdentifier:(id)arg1;	// IMP=0x00100000001a246d
- (void)_insertEncodedPurchases:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001a1b27
- (void)_finishEncodedPurchaseIdentifiers:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a1830
- (void)_connectClient:(id)arg1 withOutputConnection:(id)arg2;	// IMP=0x00100000001a153a
- (void)_cancelEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a11f9
- (void)_addEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a11b0
- (void)start;	// IMP=0x00100000001a0820
- (void)cancelPurchasesForDownloadsWithIdentifiers:(id)arg1;	// IMP=0x001000000019ff42
- (void)beginPurchaseBatch:(id)arg1;	// IMP=0x001000000019fed0
- (void)addPurchases:(id)arg1;	// IMP=0x001000000019fe5e
- (void)dealloc;	// IMP=0x001000000019fce9
- (id)init;	// IMP=0x001000000019fc5b

@end
