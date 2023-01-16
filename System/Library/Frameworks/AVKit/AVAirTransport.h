//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;
@protocol AVAirTransportDelegate, AVAirTransportTransformationProtocol;

__attribute__((visibility("hidden")))
@interface AVAirTransport : NSObject
{
    NSMutableArray *_outputQueue;	// 8 = 0x8
    NSData *_leftoverInputData;	// 16 = 0x10
    NSMutableArray *_requestCompletions;	// 24 = 0x18
    id <AVAirTransportTransformationProtocol> _streamDataTransformer;	// 32 = 0x20
    id <AVAirTransportDelegate> _delegate;	// 40 = 0x28
    NSMutableArray *_receiveResponseBlocks;	// 48 = 0x30
}

+ (_Bool)_isRunningOnAirChannelQueue;	// IMP=0x0040000000004f62
+ (id)airTransportQueue;	// IMP=0x0040000000004f32
+ (id)eventRunLoop;	// IMP=0x0040000000004f14
+ (id)eventThread;	// IMP=0x0040000000004f03
+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000004e89
+ (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000004e00
+ (void)__performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0040000000004df5
+ (void)startEventThreadIfNecessary;	// IMP=0x0040000000004dd1
+ (id)channelWithInput:(id)arg1 output:(id)arg2;	// IMP=0x00400000000052c8
- (void).cxx_destruct;	// IMP=0x00000000000047ee
@property(readonly, nonatomic) NSMutableArray *receiveResponseBlocks; // @synthesize receiveResponseBlocks=_receiveResponseBlocks;
@property(nonatomic) __weak id <AVAirTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <AVAirTransportTransformationProtocol> streamDataTransformer; // @synthesize streamDataTransformer=_streamDataTransformer;
- (void)sendResponse:(id)arg1;	// IMP=0x0000000000004600
- (void)sendObject:(id)arg1 receiveResponse:(CDUnknownBlockType)arg2;	// IMP=0x000000000000450a
- (void)performOnAirChannelQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000000446e
@property(readonly, nonatomic) _Bool canWrite;
@property(readonly, nonatomic) _Bool isReadyToSend;
- (void)writeData:(id)arg1;	// IMP=0x00000000000042f8
- (void)writeMore;	// IMP=0x000000000000405b
- (long long)_writeData:(id)arg1;	// IMP=0x0000000000004027
- (void)terminatePendingRequests;	// IMP=0x0000000000003fdb
- (id)requestCompletions;	// IMP=0x0000000000003fcd
- (id)description;	// IMP=0x0000000000003e8f
- (void)open;	// IMP=0x0000000000003e89
- (void)close;	// IMP=0x0000000000003e5b
- (void)invalidate;	// IMP=0x0000000000003e55
- (void)dealloc;	// IMP=0x0000000000003d95
- (id)_initPrivate;	// IMP=0x0000000000003d20

@end
