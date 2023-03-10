//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGenerator, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSURL;
@protocol AVFrameSetDelegate;

__attribute__((visibility("hidden")))
@interface AVFrameSet : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    _Bool _ready;	// 12 = 0xc
    _Bool _invalidated;	// 13 = 0xd
    _Bool _canAssetImageGeneratorFetchFrames;	// 14 = 0xe
    _Bool _haveSeenAssetImageGeneratorTimeout;	// 15 = 0xf
    _Bool _memoryConstrained;	// 16 = 0x10
    AVAsset *_asset;	// 24 = 0x18
    NSURL *_assetURL;	// 32 = 0x20
    double _frameInterval;	// 40 = 0x28
    CDUnknownBlockType _imageGenerator;	// 48 = 0x30
    id <AVFrameSetDelegate> _delegate;	// 56 = 0x38
    NSIndexSet *_framesOnScreenNow;	// 64 = 0x40
    NSIndexSet *_highPriorityFrames;	// 72 = 0x48
    NSMutableIndexSet *_frameSet;	// 80 = 0x50
    NSMutableIndexSet *_requestedTimes;	// 88 = 0x58
    NSMutableDictionary *_cacheImages;	// 96 = 0x60
    AVAssetImageGenerator *_assetImageGenerator;	// 104 = 0x68
    NSMutableArray *_completionBlocks;	// 112 = 0x70
    double _earliestAllowedFetchTime;	// 120 = 0x78
    struct CGSize _desiredImageSize;	// 128 = 0x80
    CDStruct_1b6d18a9 _assetDuration;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingCanFetchFrames;	// IMP=0x0060000000016f47
+ (id)imageFetchingQueue;	// IMP=0x0060000000016f17
- (void).cxx_destruct;	// IMP=0x000000000001635d
@property double earliestAllowedFetchTime; // @synthesize earliestAllowedFetchTime=_earliestAllowedFetchTime;
@property CDStruct_1b6d18a9 assetDuration; // @synthesize assetDuration=_assetDuration;
@property(retain) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(getter=isMemoryConstrained) _Bool memoryConstrained; // @synthesize memoryConstrained=_memoryConstrained;
@property _Bool haveSeenAssetImageGeneratorTimeout; // @synthesize haveSeenAssetImageGeneratorTimeout=_haveSeenAssetImageGeneratorTimeout;
@property _Bool canAssetImageGeneratorFetchFrames; // @synthesize canAssetImageGeneratorFetchFrames=_canAssetImageGeneratorFetchFrames;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain) AVAssetImageGenerator *assetImageGenerator; // @synthesize assetImageGenerator=_assetImageGenerator;
@property(retain) NSMutableDictionary *cacheImages; // @synthesize cacheImages=_cacheImages;
@property(readonly) NSMutableIndexSet *requestedTimes; // @synthesize requestedTimes=_requestedTimes;
@property(retain, nonatomic) NSMutableIndexSet *frameSet; // @synthesize frameSet=_frameSet;
@property(copy) NSIndexSet *highPriorityFrames; // @synthesize highPriorityFrames=_highPriorityFrames;
@property(readonly, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(readonly) struct CGSize desiredImageSize; // @synthesize desiredImageSize=_desiredImageSize;
@property(copy) NSIndexSet *framesOnScreenNow; // @synthesize framesOnScreenNow=_framesOnScreenNow;
@property __weak id <AVFrameSetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) CDUnknownBlockType imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(readonly) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly) AVAsset *asset; // @synthesize asset=_asset;
- (void)_mediaServicesReset:(id)arg1;	// IMP=0x00000000000160b9
- (void)_handleMemoryWarning:(id)arg1;	// IMP=0x0000000000015fec
- (unsigned long long)_estimatedImageMemoryFootprint;	// IMP=0x0000000000015e72
- (void)flushAllCachedImages;	// IMP=0x0000000000015ddb
- (id)imageForFrame:(long long)arg1;	// IMP=0x0000000000015ca2
- (long long)availableFrameIndexForIndex:(long long)arg1;	// IMP=0x0000000000015c36
- (id)frameForIndex:(long long)arg1;	// IMP=0x0000000000015b8c
- (id)frameForTime:(double)arg1;	// IMP=0x0000000000015b5b
- (struct _NSRange)_rangeFramesAffectedByLoadedFrame:(long long)arg1;	// IMP=0x0000000000015ac1
- (void)_fetchNextFrame;	// IMP=0x0000000000015248
- (void)_flushSomeLowPriorityFramesExcluding:(unsigned long long)arg1;	// IMP=0x0000000000014fbc
- (void)_callDoneBlocks;	// IMP=0x0000000000014f1d
- (void)whenDoneCallBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014ea1
- (id)_arrayOfTimesForFrames:(id)arg1;	// IMP=0x0000000000014dd0
- (void)_cacheImage:(id)arg1 forFrame:(long long)arg2 actualTime:(double)arg3;	// IMP=0x0000000000014ca5
- (void)requestFrameRange:(struct _NSRange)arg1;	// IMP=0x0000000000014a69
- (void)requestFrameForTime:(double)arg1;	// IMP=0x00000000000149c9
- (void)requestFrame:(long long)arg1;	// IMP=0x0000000000014944
- (id)framesRequestedAndOnScreenStoppingAfterFirst:(_Bool)arg1;	// IMP=0x0000000000014744
- (_Bool)isRequestedTime:(double)arg1;	// IMP=0x0000000000014713
- (void)removeRequestedTime:(double)arg1;	// IMP=0x00000000000146e2
- (void)addRequestedTime:(double)arg1;	// IMP=0x00000000000146b1
- (double)timeIntervalRequestedForFrameIndex:(long long)arg1;	// IMP=0x000000000001465a
- (long long)frameIndexForRequestedTime:(double)arg1;	// IMP=0x0000000000014604
- (id)copyOfRequestedFrames;	// IMP=0x00000000000145ca
- (_Bool)isRequestedFrameIndex:(long long)arg1;	// IMP=0x0000000000014583
- (void)removeAllFrameRequests;	// IMP=0x0000000000014534
- (void)removeRequestedFrameRange:(struct _NSRange)arg1;	// IMP=0x00000000000144ed
- (void)removeRequestedFrameIndex:(long long)arg1;	// IMP=0x00000000000144ab
- (_Bool)addRequestedFrameSet:(id)arg1;	// IMP=0x0000000000014430
- (_Bool)addRequestedFrameIndex:(long long)arg1;	// IMP=0x00000000000143c7
- (unsigned long long)numberOfRequestedFrames;	// IMP=0x000000000001438d
@property(readonly) _Bool canFetchFrames;
- (void)flushUndisplayedFrames;	// IMP=0x0000000000013fd0
- (unsigned long long)flushSomeFrames;	// IMP=0x0000000000013d1d
- (long long)numberOfFrames;	// IMP=0x0000000000013c6a
- (void)invalidate;	// IMP=0x0000000000013afe
- (void)setReady:(_Bool)arg1;	// IMP=0x0000000000013ad0
- (id)imageFetchingQueue;	// IMP=0x0000000000013ab6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000139c1
- (id)_assetImageGeneratorForAsset:(id)arg1 videoComposition:(id)arg2;	// IMP=0x0000000000013814
- (void)dealloc;	// IMP=0x000000000001372a
- (id)initWithImageGenerator:(CDUnknownBlockType)arg1 asset:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(struct CGSize)arg4;	// IMP=0x0000000000013632
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(struct CGSize)arg4;	// IMP=0x0000000000013522
- (id)initWithAsset:(id)arg1 frameInterval:(double)arg2 maximumImageSize:(struct CGSize)arg3;	// IMP=0x000000000001350b
- (id)init;	// IMP=0x00000000000134da

@end

