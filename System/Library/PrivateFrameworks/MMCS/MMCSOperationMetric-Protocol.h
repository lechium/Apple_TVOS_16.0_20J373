//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MMCS/NSObject-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationMetric <NSObject>
@property(readonly) NSArray *rangesCopy;
@property(readonly) NSMutableSet *requestUUIDs;
@property(readonly) NSMutableDictionary *fileCountByChunkProfile;
@property(readonly) NSMutableDictionary *chunkCountByChunkProfile;
@property(readonly) NSMutableDictionary *totalBytesByChunkProfile;
@property unsigned long long connectionsCreated;
@property unsigned long long connections;
@property unsigned long long bytesDownloaded;
@property unsigned long long bytesUploaded;
@property double executing;
@property double queueing;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
- (id <MMCSOperationStateTimeRange>)newRangeWithOperationState:(unsigned long long)arg1 startDate:(NSDate *)arg2 duration:(double)arg3;
- (void)addRange:(id <MMCSOperationStateTimeRange>)arg1;
@end

