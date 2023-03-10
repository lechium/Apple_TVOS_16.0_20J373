//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, APSConnection, ICDCloudPushNotificationRegistrationState, NSData, NSOperationQueue, NSString;
@protocol ICDAccountManaging, OS_dispatch_queue;

@interface CloudPushNotificationController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSData *_currentAPNSToken;	// 24 = 0x18
    ICDCloudPushNotificationRegistrationState *_currentRegistrationState;	// 32 = 0x20
    AMSPushHandler *_amsPushHandler;	// 40 = 0x28
    _Bool _sagaEnabledOnDevice;	// 48 = 0x30
    id <ICDAccountManaging> _accountManager;	// 56 = 0x38
    NSString *_pushEnvironment;	// 64 = 0x40
    APSConnection *_connection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000da72e
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property(nonatomic) _Bool sagaEnabledOnDevice; // @synthesize sagaEnabledOnDevice=_sagaEnabledOnDevice;
@property(nonatomic) __weak id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
- (id)_amsPushHandler;	// IMP=0x00100000000da604
- (id)_supportedJaliscoMediaKindsWithSagaEnabled;	// IMP=0x00100000000da5d4
- (id)_supportedJaliscoMediaKinds;	// IMP=0x00100000000da5a4
- (_Bool)_isSupportedJaliscoMediaKind:(id)arg1;	// IMP=0x00100000000da52d
- (void)_handleInAppMessagesUpdatedPushMessage:(id)arg1;	// IMP=0x00100000000da262
- (void)_handleMusicSocialPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da250
- (void)_handleITunesStorePushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9cfe
- (void)_handleJaliscoPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9aa5
- (void)_handleSagaPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d984c
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x00100000000d97a8
- (void)_registerMediaKinds:(id)arg1 usingRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d9566
- (void)_registerAPNSToken:(id)arg1 usingRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d9399
- (void)_updateRegistrationForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9203
- (void)_createAPNSConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d90ee
- (void)_activeConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d8fa9
- (void)_updatePushNotificationsRegistration;	// IMP=0x00100000000d8f5e
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x00100000000d8e79
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000d8c54
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000d8b6d
- (void)dealloc;	// IMP=0x00100000000d8ac3
- (id)initWithAccountManager:(id)arg1;	// IMP=0x00100000000d8857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

