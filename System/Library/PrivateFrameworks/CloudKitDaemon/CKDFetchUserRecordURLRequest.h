//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecord;

@interface CKDFetchUserRecordURLRequest : CKDURLRequest
{
    CDUnknownBlockType _recordFetchedBlock;	// 8 = 0x8
    CKRecord *_userRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019670a
@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000019625b
- (id)generateRequestOperations;	// IMP=0x000000000019618d
- (id)requestOperationClasses;	// IMP=0x0000000000196121

@end

