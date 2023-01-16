//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest
{
    _Bool _ignoreMissingDeltas;	// 8 = 0x8
    NSArray *_replaceDeltasRequests;	// 16 = 0x10
    CDUnknownBlockType _perReplacementCompletionBlock;	// 24 = 0x18
    NSMutableDictionary *_replacementRequestsByRequestID;	// 32 = 0x20
}

+ (id)requestOperationsForRequest:(id)arg1 replaceDeltasRequests:(id)arg2 ignoreMissingDeltas:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00600000002c0eef
- (void).cxx_destruct;	// IMP=0x00000000002c1e76
@property(nonatomic) _Bool ignoreMissingDeltas; // @synthesize ignoreMissingDeltas=_ignoreMissingDeltas;
@property(retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // @synthesize replacementRequestsByRequestID=_replacementRequestsByRequestID;
@property(copy, nonatomic) CDUnknownBlockType perReplacementCompletionBlock; // @synthesize perReplacementCompletionBlock=_perReplacementCompletionBlock;
@property(retain, nonatomic) NSArray *replaceDeltasRequests; // @synthesize replaceDeltasRequests=_replaceDeltasRequests;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000002c1b37
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002c17b2
- (id)generateRequestOperations;	// IMP=0x00000000002c0cd8
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x00000000002c0c5e
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x00000000002c0c56
- (int)isolationLevel;	// IMP=0x00000000002c0c4b
- (id)requestOperationClasses;	// IMP=0x00000000002c0bdf
- (id)zoneIDsToLock;	// IMP=0x00000000002c0aad
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000002c0a93
- (id)initWithOperation:(id)arg1 replaceDeltasRequests:(id)arg2 ignoreMissingDeltas:(_Bool)arg3;	// IMP=0x00000000002c09d8

@end
