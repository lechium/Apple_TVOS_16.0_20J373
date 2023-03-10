//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/SHService.h>

@class NSString, SHAttribution, SHEntitlements, SHEventSignalScheduler, SHMatchResultNotificationScheduler, SHMatcherController, SHMediaItemFetcher, SHMediaLibraryQueryManager, SHMediaLibrarySyncManager;
@protocol SHServiceDelegate, SHShazamKitClient;

@interface SHShazamKitService : SHService
{
    SHEntitlements *_entitlements;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
    SHMatcherController *_matcherController;	// 24 = 0x18
    SHMatchResultNotificationScheduler *_notificationScheduler;	// 32 = 0x20
    SHMediaLibrarySyncManager *_librarySyncManager;	// 40 = 0x28
    SHMediaLibraryQueryManager *_libraryQueryManager;	// 48 = 0x30
    SHMediaItemFetcher *_mediaItemFetcher;	// 56 = 0x38
    SHEventSignalScheduler *_eventSignalScheduler;	// 64 = 0x40
    id <SHShazamKitClient> _delegate;	// 72 = 0x48
    SHAttribution *_attribution;	// 80 = 0x50
}

+ (void)initializeGlobalServiceState;	// IMP=0x002000000000e8df
+ (id)machServiceName;	// IMP=0x001000000000e8cb
- (void).cxx_destruct;	// IMP=0x002000000000fcd2
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
- (void)setServiceDelegate:(id)arg1;	// IMP=0x001000000000fc99
- (id)serviceDelegate;	// IMP=0x001000000000fc80
@property(retain, nonatomic) SHEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) SHEventSignalScheduler *eventSignalScheduler; // @synthesize eventSignalScheduler=_eventSignalScheduler;
@property(readonly, nonatomic) SHMediaItemFetcher *mediaItemFetcher; // @synthesize mediaItemFetcher=_mediaItemFetcher;
@property(readonly, nonatomic) SHMediaLibraryQueryManager *libraryQueryManager; // @synthesize libraryQueryManager=_libraryQueryManager;
@property(readonly, nonatomic) SHMediaLibrarySyncManager *librarySyncManager; // @synthesize librarySyncManager=_librarySyncManager;
@property(readonly, nonatomic) SHMatchResultNotificationScheduler *notificationScheduler; // @synthesize notificationScheduler=_notificationScheduler;
@property(readonly, nonatomic) SHMatcherController *matcherController; // @synthesize matcherController=_matcherController;
- (id)workers;	// IMP=0x001000000000f61f
@property(nonatomic) __weak id <SHShazamKitClient> delegate; // @synthesize delegate=_delegate;
- (long long)clientType;	// IMP=0x001000000000f51c
- (void)workerUpdated:(id)arg1 withRunningState:(_Bool)arg2;	// IMP=0x001000000000f422
- (oneway void)sendEventSignal:(id)arg1;	// IMP=0x001000000000f2b7
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f231
- (_Bool)isCurrentBundleIdentifierValid;	// IMP=0x001000000000f175
- (_Bool)isEntitledForLibrarySPI;	// IMP=0x001000000000f064
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000edad
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ecea
- (void)synchronizeSnapshot:(id)arg1 startCondition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ec2d
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000000ebcd
- (void)startRecognitionForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000eb47
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x001000000000eae7
- (void)stop;	// IMP=0x001000000000eab8
- (id)initWithEntitlements:(id)arg1 attribution:(id)arg2;	// IMP=0x001000000000ea16
- (void)dealloc;	// IMP=0x001000000000e98c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

