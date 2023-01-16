//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVEndpointObserver, MRArtwork, MRClient, MRNowPlayingPlayerResponse, MRPlayer, MRPlayerPath, NSMutableArray, NSString;
@protocol MRQHONowPlayingControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRQHONowPlayingController : NSObject
{
    _Bool _registeredForNotifications;	// 8 = 0x8
    _Bool _registeredForEndpointChanges;	// 9 = 0x9
    _Bool _registeredForPlayerPathInvalidations;	// 10 = 0xa
    _Bool _updateLoadingEnabled;	// 11 = 0xb
    _Bool _requestingQueue;	// 12 = 0xc
    NSString *_uid;	// 16 = 0x10
    MRClient *_client;	// 24 = 0x18
    MRPlayer *_player;	// 32 = 0x20
    id <MRQHONowPlayingControllerDelegate> _delegate;	// 40 = 0x28
    MRPlayerPath *_unresolvedPlayerPath;	// 48 = 0x30
    MRPlayerPath *_resolvedPlayerPath;	// 56 = 0x38
    MRAVEndpoint *_endpoint;	// 64 = 0x40
    MRNowPlayingPlayerResponse *_response;	// 72 = 0x48
    id _playerPathInvalidationObserver;	// 80 = 0x50
    MRAVEndpointObserver *_endpointObserver;	// 88 = 0x58
    NSString *_endpointObserverGroupUID;	// 96 = 0x60
    NSMutableArray *_deferredContentItemsToMerge;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 120 = 0x78
    NSString *_cachedNowPlayingArtworkIdentifier;	// 128 = 0x80
    MRArtwork *_cachedNowPlayingArtwork;	// 136 = 0x88
}

+ (id)proactiveEndpointController;	// IMP=0x006000000006698c
+ (id)localRouteController;	// IMP=0x0060000000066943
- (void).cxx_destruct;	// IMP=0x000000000006f245
@property(retain, nonatomic) MRArtwork *cachedNowPlayingArtwork; // @synthesize cachedNowPlayingArtwork=_cachedNowPlayingArtwork;
@property(retain, nonatomic) NSString *cachedNowPlayingArtworkIdentifier; // @synthesize cachedNowPlayingArtworkIdentifier=_cachedNowPlayingArtworkIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool requestingQueue; // @synthesize requestingQueue=_requestingQueue;
@property(nonatomic) _Bool updateLoadingEnabled; // @synthesize updateLoadingEnabled=_updateLoadingEnabled;
@property(nonatomic) _Bool registeredForPlayerPathInvalidations; // @synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations;
@property(nonatomic) _Bool registeredForEndpointChanges; // @synthesize registeredForEndpointChanges=_registeredForEndpointChanges;
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // @synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge;
@property(retain, nonatomic) NSString *endpointObserverGroupUID; // @synthesize endpointObserverGroupUID=_endpointObserverGroupUID;
@property(retain, nonatomic) MRAVEndpointObserver *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(retain, nonatomic) id playerPathInvalidationObserver; // @synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver;
@property(copy, nonatomic) MRNowPlayingPlayerResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
@property(nonatomic) __weak id <MRQHONowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) MRClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)_unregisterForEndpointChanges;	// IMP=0x000000000006ece6
- (void)_registerForEndpointChangesIfNeeded;	// IMP=0x000000000006e8c3
- (void)_unregisterForPlayerPathInvalidations;	// IMP=0x000000000006e837
- (void)_registerForPlayerPathInvalidationsIfNeeded;	// IMP=0x000000000006e603
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;	// IMP=0x000000000006e46f
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;	// IMP=0x000000000006e11b
- (void)_handlePlaybackStateChangedNotification:(id)arg1;	// IMP=0x000000000006dd00
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;	// IMP=0x000000000006d98c
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;	// IMP=0x000000000006d547
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x000000000006d0f9
- (void)_unregisterNotificationHandlers;	// IMP=0x000000000006d072
- (void)_registerNotificationHandlersIfNeeded;	// IMP=0x000000000006ceb7
- (void)_notifyDelegateOfInvalidation;	// IMP=0x000000000006cdb5
- (void)_notifyDelegateOfError:(id)arg1;	// IMP=0x000000000006cc78
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;	// IMP=0x000000000006ca1e
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1;	// IMP=0x000000000006c7c4
- (void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2;	// IMP=0x000000000006c53c
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;	// IMP=0x000000000006c2e2
- (void)_notifyDelegateOfUpdatedContentItems:(id)arg1;	// IMP=0x000000000006c088
- (void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2;	// IMP=0x000000000006be00
- (void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)arg1 toNewState:(unsigned int)arg2;	// IMP=0x000000000006bbce
- (void)_notifyDelegateOfNewResponse:(id)arg1;	// IMP=0x000000000006ba91
- (void)_onQueue_clearState;	// IMP=0x000000000006b9d6
- (void)_resolvePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b905
- (void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006b579
- (void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b1e5
- (id)_onQueue_updateByMergingContentItemChanges:(id)arg1;	// IMP=0x000000000006aa9c
- (void)_onQueue_updateWithNewPlaybackQueue:(id)arg1;	// IMP=0x000000000006aa20
- (void)_onQueue_updateWithNewSupportedCommands:(id)arg1;	// IMP=0x000000000006a9a4
- (void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg1;	// IMP=0x000000000006a928
- (void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg1;	// IMP=0x000000000006a8ac
- (void)_onQueue_updateWithNewPlaybackState:(unsigned int)arg1;	// IMP=0x000000000006a853
- (void)_onQueue_updateByReplacingWithNewResponse:(id)arg1;	// IMP=0x000000000006a7f4
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a65e
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a5c6
- (void)_downloadContentItemArtwork:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a1c6
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006a08f
- (void)_onQueue_requestAndUpdateArtworkForContentItems:(id)arg1 forPlayerPath:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000000068ba9
- (void)_onQueue_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006883e
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067ea0
- (void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000067757
- (void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000067335
- (void)_reloadForPlayerPathInvalidation;	// IMP=0x00000000000671d2
- (void)_reloadForCompleteInvalidation;	// IMP=0x000000000006707c
- (void)endLoadingUpdates;	// IMP=0x0000000000066ee2
- (void)beginLoadingUpdates;	// IMP=0x0000000000066cc0
- (void)dealloc;	// IMP=0x0000000000066bd7
- (id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3;	// IMP=0x00000000000669d3
- (id)initWithUID:(id)arg1;	// IMP=0x00000000000669bc

@end
