//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterWritingHelper
{
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 32 = 0x20
    _Bool _startSessionCalled;	// 40 = 0x28
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 48 = 0x30
    void *_figAssetWriterCallbackContextToken;	// 56 = 0x38
}

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;	// IMP=0x001000000009a092
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2 andDelegate:(id)arg3;	// IMP=0x0010000000099bae
+ (id)prepareInputsOperationsWithInputs:(id)arg1;	// IMP=0x001000000009996e
- (void)flushSegment;	// IMP=0x000000000009a2a4
- (void)flush;	// IMP=0x000000000009a292
- (void)transitionToFailedStatusWithError:(id)arg1;	// IMP=0x000000000009a221
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;	// IMP=0x000000000009989c
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;	// IMP=0x0000000000099539
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099378
- (void)finishWriting;	// IMP=0x0000000000098fb0
- (void)cancelWriting;	// IMP=0x0000000000098e24
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// IMP=0x0000000000098d58
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000098b57
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000989da
- (long long)status;	// IMP=0x00000000000989cf
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000989ba
- (void)dealloc;	// IMP=0x0000000000098907
- (id)figTrackReferences;	// IMP=0x0000000000098487
- (_Bool)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg2 returningDebugDescription:(id *)arg3;	// IMP=0x0000000000097ead
- (_Bool)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)arg1;	// IMP=0x0000000000097ac4
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000967e1
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2;	// IMP=0x00000000000967cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

