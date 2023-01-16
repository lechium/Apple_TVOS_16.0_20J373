//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSMetricsMemoryDataSource : NSObject
{
    NSMutableDictionary *_batches;	// 8 = 0x8
}

+ (id)batchesFromEvents:(id)arg1;	// IMP=0x0010000000241582
- (void).cxx_destruct;	// IMP=0x0000000000242236
@property(retain, nonatomic) NSMutableDictionary *batches; // @synthesize batches=_batches;
- (_Bool)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000242213
- (_Bool)skipEvents:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000242201
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000241dd2
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241ae8
- (void)didFinishBatching;	// IMP=0x0000000000241ae2
- (void)cancel;	// IMP=0x0000000000241adc
- (id)initWithEvents:(id)arg1;	// IMP=0x00000000002414da

@end
