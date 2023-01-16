//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSXPCListenerEndpoint, PLXPCObject;

@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)getPhotosXPCEndpointWithReply:(void (^)(_Bool, NSXPCListenerEndpoint *, NSError *))arg1;
- (void)incompleteRestoreProcessesWithReply:(void (^)(NSArray *))arg1;
- (void)dumpPhotoAnalysisStatusWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStatusIncludingDaemon:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
@end

