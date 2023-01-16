//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

__attribute__((visibility("hidden")))
@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation
{
    ICDelegationPlayInfoRequestOperation *_strongSelf;	// 8 = 0x8
    ICDelegationPlayInfoRequest *_playInfoRequest;	// 16 = 0x10
    ICStoreRequestContext *_storeRequestContext;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000172329
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest; // @synthesize playInfoRequest=_playInfoRequest;
- (void)_finishWithResult:(_Bool)arg1 tokens:(id)arg2 error:(id)arg3;	// IMP=0x0000000000172238
- (void)finishWithError:(id)arg1;	// IMP=0x00000000001721ee
- (void)execute;	// IMP=0x000000000017214c
- (void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3;	// IMP=0x0000000000171c67

@end

