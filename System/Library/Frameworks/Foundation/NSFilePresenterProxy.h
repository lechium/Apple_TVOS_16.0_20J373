//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessProcessManager, NSFilePresenterXPCMessenger, NSFileWatcher, NSMutableArray, NSObject, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy
{
    id _remotePresenter;	// 40 = 0x28
    NSFilePresenterXPCMessenger *_forwardedMessenger;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSFileWatcher *_watcher;	// 64 = 0x40
    unsigned long long _writingRelinquishmentCount;	// 72 = 0x48
    id _currentWriterPurposeID;	// 80 = 0x50
    NSMutableArray *_previousWriterPurposeIDs;	// 88 = 0x58
    NSFileAccessProcessManager *_processManager;	// 96 = 0x60
    NSSet *_observedUbiquityAttributes;	// 104 = 0x68
    unsigned long long _filePresenterResponses;	// 112 = 0x70
    _Bool _didObserveMovingByWriter;	// 120 = 0x78
    _Bool _didObserveVersionChangingByWriter;	// 121 = 0x79
    _Bool _disconnected;	// 122 = 0x7a
    _Bool _inSubarbiter;	// 123 = 0x7b
    _Bool _usesMainThreadDuringRelinquishing;	// 124 = 0x7c
    _Bool _didObserveNonCoordinatedChanges;	// 125 = 0x7d
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;	// IMP=0x0060000000634cd1
@property(nonatomic) unsigned long long filePresenterResponses; // @synthesize filePresenterResponses=_filePresenterResponses;
@property(copy) NSSet *observedUbiquityAttributes; // @synthesize observedUbiquityAttributes=_observedUbiquityAttributes;
@property _Bool usesMainThreadDuringReliquishing; // @synthesize usesMainThreadDuringReliquishing=_usesMainThreadDuringRelinquishing;
@property _Bool inSubarbiter; // @synthesize inSubarbiter=_inSubarbiter;
- (void)localFileWasEvicted;	// IMP=0x0000000000636432
- (void)promisedFileWasFulfilled;	// IMP=0x0000000000636415
@property(readonly) _Bool disconnected;
- (void)disconnect;	// IMP=0x00000000006363f4
- (void)forwardRelinquishmentForWritingClaim:(_Bool)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000006357f5
- (void)observeNewProvider:(id)arg1;	// IMP=0x00000000006357a7
- (void)observePresenterChange:(_Bool)arg1 atSubitemURL:(id)arg2;	// IMP=0x000000000063573c
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;	// IMP=0x0000000000635694
- (void)observeChangeAtSubitemPath:(id)arg1;	// IMP=0x00000000006355ee
- (void)observeDisappearanceAtSubitemPath:(id)arg1;	// IMP=0x000000000063552f
- (void)observeChangeOfUbiquityAttributes:(id)arg1;	// IMP=0x000000000063545a
- (void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;	// IMP=0x00000000006353a6
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;	// IMP=0x00000000006352f2
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;	// IMP=0x00000000006352b3
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;	// IMP=0x0000000000635251
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;	// IMP=0x00000000006351e1
- (void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2;	// IMP=0x000000000063513c
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000634f6d
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000634df6
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000634d5e
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000634ca9
- (void)stopObservingApplicationState;	// IMP=0x0000000000634c4b
- (void)startObservingApplicationStateWithQueue:(id)arg1;	// IMP=0x0000000000634aac
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000063456d
- (void)_settleNonCoordinatedChanges;	// IMP=0x000000000063446c
- (_Bool)allowedForURL:(id)arg1;	// IMP=0x000000000063411f
- (void)invalidate;	// IMP=0x00000000006340c9
- (void)forwardUsingProxy:(id)arg1;	// IMP=0x0000000000634011
- (_Bool)shouldSendObservationMessageWithPurposeID:(id)arg1;	// IMP=0x0000000000633fd4
- (void)setItemLocation:(id)arg1;	// IMP=0x0000000000633b47
- (id)_clientProxy;	// IMP=0x0000000000633b36
- (void)dealloc;	// IMP=0x0000000000633a4b
- (id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3;	// IMP=0x00000000006339b8

@end

