//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest
{
    NSArray *_mergeableValueIDs;	// 8 = 0x8
    NSDictionary *_previousContinuationTokens;	// 16 = 0x10
    CDUnknownBlockType _deltasFetchedBlock;	// 24 = 0x18
    NSMutableDictionary *_mergeableValueIDsByRequestID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002d82cc
@property(retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID; // @synthesize mergeableValueIDsByRequestID=_mergeableValueIDsByRequestID;
@property(copy, nonatomic) CDUnknownBlockType deltasFetchedBlock; // @synthesize deltasFetchedBlock=_deltasFetchedBlock;
@property(readonly, nonatomic) NSDictionary *previousContinuationTokens; // @synthesize previousContinuationTokens=_previousContinuationTokens;
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000002d7f3a
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002d78cf
- (id)generateRequestOperations;	// IMP=0x00000000002d74ec
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x00000000002d7472
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x00000000002d746a
- (id)requestOperationClasses;	// IMP=0x00000000002d73fe
- (id)zoneIDsToLock;	// IMP=0x00000000002d7334
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000002d731a
- (id)initWithOperation:(id)arg1 mergeableValueIDs:(id)arg2 previousContinuationTokens:(id)arg3;	// IMP=0x00000000002d7222

@end

