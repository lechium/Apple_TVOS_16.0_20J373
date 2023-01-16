//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessArbiter, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessSubarbiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSFileAccessArbiter *_realSubarbiter;	// 16 = 0x10
}

- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;	// IMP=0x0000000000626057
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;	// IMP=0x0000000000625e15
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;	// IMP=0x0000000000625d9a
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;	// IMP=0x0000000000625d1f
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;	// IMP=0x0000000000625bc0
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;	// IMP=0x0000000000625a69
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;	// IMP=0x0000000000625912
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;	// IMP=0x0000000000625897
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;	// IMP=0x000000000062581c
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;	// IMP=0x00000000006256bd
- (oneway void)cancelAccessClaimForID:(id)arg1;	// IMP=0x000000000062556e
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;	// IMP=0x0000000000625568
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;	// IMP=0x0000000000625534
- (oneway void)revokeAccessClaimForID:(id)arg1;	// IMP=0x000000000062549f
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;	// IMP=0x00000000006252ef
- (void)stopArbitrating;	// IMP=0x00000000006252d9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000625265
- (void)dealloc;	// IMP=0x00000000006251f9
- (id)initWithQueue:(id)arg1 listener:(id)arg2;	// IMP=0x0000000000625155

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

