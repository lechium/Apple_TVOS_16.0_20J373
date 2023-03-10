//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlaybackHistoryRecordChangeRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    MPCPlaybackHistoryRecordChangeRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000195150
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPCPlaybackHistoryRecordChangeRequest *request; // @synthesize request=_request;
- (void)_finishChangeRequestOperationWithError:(id)arg1;	// IMP=0x00000000001950c0
- (void)execute;	// IMP=0x0000000000194b47

@end

