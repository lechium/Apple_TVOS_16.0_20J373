//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;

@interface RestoreDownloadsOperation : ISOperation
{
    NSMutableDictionary *_accountIDsByAppleID;	// 96 = 0x60
    long long _cancelRetryAlertState;	// 104 = 0x68
    NSOrderedSet *_downloadIDs;	// 112 = 0x70
    NSMutableArray *_errors;	// 120 = 0x78
    _Bool _hadAutoRetrySoftFailure;	// 128 = 0x80
    _Bool _hadCancelFailure;	// 129 = 0x81
    NSString *_restoreReason;	// 136 = 0x88
}

+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x00200000000d3d0f
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x00100000000d3ccb
+ (void)resetShouldSuppressTermsAndConditionsDialogs;	// IMP=0x00100000000d3c9c
- (_Bool)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;	// IMP=0x00200000000da9f3
- (id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000da7d5
- (_Bool)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1;	// IMP=0x00100000000da70d
- (_Bool)_shouldAuthenticateForCancelRetry;	// IMP=0x00100000000da4bb
- (void)_scheduleCancelRetry;	// IMP=0x00100000000da4b5
- (void)_scheduleAutomaticRetry;	// IMP=0x00100000000da4af
- (_Bool)_preflightAccountWithID:(id)arg1 isFamily:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000d9e16
- (id)_newRestoreItemsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000d94d3
- (id)_newDownloadWithStoreDownload:(id)arg1;	// IMP=0x00100000000d93dd
- (_Bool)_isErrorSoftFail:(id)arg1;	// IMP=0x00100000000d92b8
- (_Bool)_isErrorCancelFailure:(id)arg1;	// IMP=0x00100000000d926e
- (void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00100000000d8f16
- (void)_establishPrimaryAccount;	// IMP=0x00100000000d8d40
- (long long)_downloadRestoreStateForError:(id)arg1;	// IMP=0x00100000000d8cde
- (id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2;	// IMP=0x00100000000d8bd8
- (void)_applyResponses:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00100000000d7af9
- (id)_accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d72c6
- (void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000d694f
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000d6888
- (void)run;	// IMP=0x00100000000d4406
- (_Bool)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;	// IMP=0x00100000000d3dc7
@property(readonly) NSString *restoreReason;
@property(readonly) NSArray *errors;
@property(readonly) NSOrderedSet *downloadIdentifiers;
- (void)dealloc;	// IMP=0x00100000000d3c28
- (id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2;	// IMP=0x00100000000d3ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

