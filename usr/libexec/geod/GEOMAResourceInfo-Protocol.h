//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MAAssetQuery, MADownloadOptions, NSArray, NSObject, NSURL;
@protocol OS_dispatch_queue;

@protocol GEOMAResourceInfo <NSObject>
@property(readonly, nonatomic) MAAssetQuery *query;
@property(readonly, nonatomic) MADownloadOptions *downloadOptions;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) double lastAccessedTime;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic) NSURL *baseURL;
- (void)listResources:(_Bool)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 results:(void (^)(long long, NSArray *, NSError *))arg3;
- (NSArray *)installedResources;
- (void)updateLastAccessedTime;

// Remaining properties
@property(readonly, nonatomic) unsigned long long policy;
@end

