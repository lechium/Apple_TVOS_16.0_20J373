//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TVCKDataQueryProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 8 = 0x8
    NSMutableDictionary *_dataClientQueryRecords;	// 16 = 0x10
    NSString *_processingQueueName;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00600000000204d8
- (void).cxx_destruct;	// IMP=0x00000000000213d3
@property(copy, nonatomic) NSString *processingQueueName; // @synthesize processingQueueName=_processingQueueName;
- (void)shutdownClient:(id)arg1;	// IMP=0x00000000000212d4
- (void)processQuery:(id)arg1 concurrentCount:(int)arg2 dataClient:(id)arg3 priority:(long long)arg4 withCompletionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000020d78
- (void)executeFirstQuery:(id)arg1 dataClient:(id)arg2;	// IMP=0x0000000000020c3f
- (void)completeQuery:(id)arg1 dataClient:(id)arg2;	// IMP=0x0000000000020ab0
- (void)executeQuery:(id)arg1 andProcessNextWithDataClient:(id)arg2;	// IMP=0x000000000002063f
- (id)initWithQueueName:(id)arg1;	// IMP=0x000000000002057b

@end

