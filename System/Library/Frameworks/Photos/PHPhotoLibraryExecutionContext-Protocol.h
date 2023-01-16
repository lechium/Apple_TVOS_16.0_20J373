//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSError, NSObject, PHPerformChangesRequest;
@protocol OS_dispatch_queue, PLAssetsdPhotoKitChangesRequestClient;

@protocol PHPhotoLibraryExecutionContext <NSObject>
- (void)callTransactionCompletionHandler:(void (^)(_Bool, NSError *))arg1 withSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)sendChangesRequest:(PHPerformChangesRequest *)arg1 onClient:(id <PLAssetsdPhotoKitChangesRequestClient>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)dispatchOnQueue:(NSObject<OS_dispatch_queue> *)arg1 block:(void (^)(void))arg2;
@end

