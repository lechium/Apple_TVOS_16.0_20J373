//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFilePresenterProxy, NSString;
@protocol NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterXPCMessenger : NSObject
{
    id <NSFilePresenter> _filePresenter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSFilePresenterProxy *_filePresenterProxy;	// 24 = 0x18
}

- (void)_makePresenter:(id)arg1 validateRelinquishmentToSubitemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000062e866
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000062e301
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 purposeID:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000062e081
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 purposeID:(id)arg3 ifNecessaryUsingSelector:(SEL)arg4 recordingRelinquishment:(id)arg5 continuer:(CDUnknownBlockType)arg6;	// IMP=0x000000000062d648
- (id)_writeRelinquishment;	// IMP=0x000000000062d5d8
- (id)_readRelinquishment;	// IMP=0x000000000062d568
- (void)_makePresenter:(id)arg1 setProviderPurposeIdentifier:(id)arg2;	// IMP=0x000000000062d42f
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;	// IMP=0x000000000062d2ea
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;	// IMP=0x000000000062cd84
- (void)_makePresenter:(id)arg1 observeChangeOfUbiquityAttributes:(id)arg2;	// IMP=0x000000000062cc97
- (void)_makePresenter:(id)arg1 observeSharingChangeWithSubitemURL:(id)arg2;	// IMP=0x000000000062ca27
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;	// IMP=0x000000000062c7b7
- (void)_makePresenterObserveReconnection:(id)arg1;	// IMP=0x000000000062c63c
- (void)_makePresenterObserveDisconnection:(id)arg1;	// IMP=0x000000000062c4c1
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;	// IMP=0x000000000062c154
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;	// IMP=0x000000000062beea
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062bba0
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000062b56b
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000062b17a
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062adf9
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062aa99
- (oneway void)logSuspensionWarning;	// IMP=0x000000000062aa1d
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000062a9ee
- (oneway void)setProviderPurposeIdentifier:(id)arg1;	// IMP=0x000000000062a93d
- (oneway void)updateLastEventID:(unsigned long long)arg1;	// IMP=0x000000000062a88c
- (oneway void)observePresenterChange:(_Bool)arg1 forSubitemAtURL:(id)arg2;	// IMP=0x000000000062a65f
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;	// IMP=0x000000000062a586
- (oneway void)observeChangeOfUbiquityAttributes:(id)arg1;	// IMP=0x000000000062a4d5
- (oneway void)observeSharingChangeWithSubitemURL:(id)arg1;	// IMP=0x000000000062a3f6
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;	// IMP=0x000000000062a317
- (oneway void)observeReconnection;	// IMP=0x000000000062a269
- (oneway void)observeDisconnection;	// IMP=0x000000000062a1bb
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;	// IMP=0x000000000062a04c
- (oneway void)observeChangeWithSubitemURL:(id)arg1;	// IMP=0x0000000000629f6d
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000629dbb
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000629c38
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000629ac7
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;	// IMP=0x000000000062996a
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006295cb
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000062935d
- (void)invalidate;	// IMP=0x0000000000629325
- (void)dealloc;	// IMP=0x00000000006292af
- (id)initWithFilePresenterProxy:(id)arg1;	// IMP=0x000000000062923c
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;	// IMP=0x00000000006291b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
