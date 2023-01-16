//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@protocol GEOGeographicMetadataFetcher <NSObject>
- (void)reportCorrupt:(NSURL *)arg1;
- (void)fetchMetadataWithResponseQueue:(NSObject<OS_dispatch_queue> *)arg1 block:(void (^)(NSDictionary *, NSError *))arg2;
@end

