//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x00200000000598aa
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005969f
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000595b6
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000594cd
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x001000000005947b
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x001000000005935a
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000055bb4
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000055a55
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005565f
+ (void)observeXPCServer:(id)arg1;	// IMP=0x001000000005559d
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000552a4
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000054dec
+ (id)sharedController;	// IMP=0x0010000000053f4a
- (void).cxx_destruct;	// IMP=0x002000000005f273
- (id)_sessionController;	// IMP=0x001000000005f210
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x001000000005f00d
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x001000000005ee0a
- (void)_retryFailedEntities;	// IMP=0x001000000005e78b
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000005e05f
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005db5a
- (id)_postOperationQueue;	// IMP=0x001000000005daf1
- (id)_pollingCoordinator;	// IMP=0x001000000005da8e
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005d4b2
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005c65a
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x001000000005c59f
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x001000000005c2a5
- (id)_errorCoordinator;	// IMP=0x001000000005c242
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005c08f
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005bf59
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005b927
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b7a5
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x001000000005b09c
- (id)_databaseIfExists;	// IMP=0x001000000005afe6
- (id)_database;	// IMP=0x001000000005aea1
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x001000000005a293
- (void)_cleanupSessionController;	// IMP=0x001000000005a233
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000599d1
- (id)_authenticationCoordinator;	// IMP=0x001000000005996e
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x0010000000058fca
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x0010000000058ae6
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x001000000005783d
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x0010000000056d95
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x0010000000056ad5
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x0010000000056866
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x00100000000561a2
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x0010000000055fc5
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x0010000000055fb3
- (void)start;	// IMP=0x0010000000054b5c
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x0010000000053fcf
- (void)dealloc;	// IMP=0x0010000000053e50
- (id)init;	// IMP=0x0010000000053df8

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
