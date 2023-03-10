//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, AssetSession, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AppInstallQueue : NSObject
{
    AssetSession *_assetSession;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSMutableDictionary *_requestLookup;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001ecf15
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001e877a
- (void)coordinatorPromiseDataConsumer:(id)arg1 willBeginUsingPromise:(id)arg2 forReference:(id)arg3;	// IMP=0x00100000001e8565
- (void)stopInstallID:(long long)arg1 withReason:(long long)arg2 transaction:(id)arg3;	// IMP=0x00100000001e8446
- (void)startInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000001e8043
- (void)finishInstallID:(long long)arg1 transaction:(id)arg2;	// IMP=0x00100000001e7c14
- (id)init;	// IMP=0x00100000001e6cd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

