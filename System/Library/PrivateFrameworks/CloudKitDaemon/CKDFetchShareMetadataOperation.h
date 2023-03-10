//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;
@protocol CKFetchShareMetadataOperationCallbacks;

@interface CKDFetchShareMetadataOperation : CKDOperation
{
    _Bool _forceDSRefetch;	// 8 = 0x8
    _Bool _errorOnOON;	// 9 = 0x9
    _Bool _shouldFetchRootRecord;	// 10 = 0xa
    _Bool _clientWillDisplaySystemAcceptPrompt;	// 11 = 0xb
    _Bool _overwriteContainerPCSServiceIfManatee;	// 12 = 0xc
    _Bool _skipShareDecryption;	// 13 = 0xd
    CDUnknownBlockType _shareMetadataFetchedBlock;	// 16 = 0x10
    NSMutableArray *_shareURLsToFetch;	// 24 = 0x18
    NSMutableDictionary *_shareTokenMetadatasToFetchByURL;	// 32 = 0x20
    NSSet *_rootRecordDesiredKeysSet;	// 40 = 0x28
    NSDictionary *_shareInvitationTokensByShareURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b9df7
@property(nonatomic) _Bool skipShareDecryption; // @synthesize skipShareDecryption=_skipShareDecryption;
@property(nonatomic) _Bool overwriteContainerPCSServiceIfManatee; // @synthesize overwriteContainerPCSServiceIfManatee=_overwriteContainerPCSServiceIfManatee;
@property(retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL; // @synthesize shareInvitationTokensByShareURL=_shareInvitationTokensByShareURL;
@property(nonatomic) _Bool clientWillDisplaySystemAcceptPrompt; // @synthesize clientWillDisplaySystemAcceptPrompt=_clientWillDisplaySystemAcceptPrompt;
@property(retain, nonatomic) NSSet *rootRecordDesiredKeysSet; // @synthesize rootRecordDesiredKeysSet=_rootRecordDesiredKeysSet;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSMutableDictionary *shareTokenMetadatasToFetchByURL; // @synthesize shareTokenMetadatasToFetchByURL=_shareTokenMetadatasToFetchByURL;
@property(retain, nonatomic) NSMutableArray *shareURLsToFetch; // @synthesize shareURLsToFetch=_shareURLsToFetch;
@property(copy, nonatomic) CDUnknownBlockType shareMetadataFetchedBlock; // @synthesize shareMetadataFetchedBlock=_shareMetadataFetchedBlock;
@property(nonatomic) _Bool errorOnOON; // @synthesize errorOnOON=_errorOnOON;
@property(nonatomic) _Bool forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
- (void)main;	// IMP=0x00000000000b9a78
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000b9a12
- (void)_prepareShortTokens;	// IMP=0x00000000000b8ef9
- (_Bool)_currentUserIsOONForShareMetadata:(id)arg1;	// IMP=0x00000000000b8d5a
- (void)_decryptRootRecordsForShareURL:(id)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b7906
- (void)_continueHandlingFetchedShareMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x00000000000b718a
- (void)_prepPPPCSDataForDugongShareMetadata:(id)arg1 withInvitationToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b6ff2
- (void)_continueSharePCSPrepForShareMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x00000000000b69c8
- (void)_handleTokenResolveWithLookupInfo:(id)arg1 shareMetadata:(id)arg2 responseCode:(id)arg3 urlByShortTokenLookupInfos:(id)arg4 tokensToFetchByURL:(id)arg5;	// IMP=0x00000000000b57a8
- (void)_fetchShortTokenMetadata;	// IMP=0x00000000000b4ab0
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;	// IMP=0x00000000000b43fc
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b3d21
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000000b3cbf
- (_Bool)makeStateTransition;	// IMP=0x00000000000b3bee
- (int)operationType;	// IMP=0x00000000000b3be3
- (id)activityCreate;	// IMP=0x00000000000b3bba
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000b39d2

// Remaining properties
@property(retain, nonatomic) id <CKFetchShareMetadataOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

