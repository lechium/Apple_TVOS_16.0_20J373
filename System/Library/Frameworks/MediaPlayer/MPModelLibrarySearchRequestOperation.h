//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibrarySearchRequest, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 8 = 0x8
    shared_ptr_299ddd6f _runningQuery;	// 16 = 0x10
    MPModelLibrarySearchRequest *_request;	// 32 = 0x20
    CDUnknownBlockType _responseHandler;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000136cc0
- (void).cxx_destruct;	// IMP=0x0000000000136c6d
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibrarySearchRequest *request; // @synthesize request=_request;
- (void)cancel;	// IMP=0x0000000000136baf
- (void)execute;	// IMP=0x00000000001361c5
- (id)init;	// IMP=0x0000000000136166

@end

