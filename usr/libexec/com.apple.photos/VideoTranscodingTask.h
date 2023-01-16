//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VideoConversionHangDetector;

@interface VideoTranscodingTask
{
    VideoConversionHangDetector *_hangDetector;	// 144 = 0x90
}

+ (_Bool)shouldMaximizeVideoConversionPowerEfficiencyForOptions:(id)arg1 inputAssetDuration:(double)arg2 taskIdentifier:(id)arg3;	// IMP=0x004000000001680f
+ (id)metadataItemsByApplyingSignatureMetadataFromOptions:(id)arg1 toMetadataItems:(id)arg2;	// IMP=0x00100000000166a4
+ (id)signatureOptionToTypeMapping;	// IMP=0x0010000000016674
- (void).cxx_destruct;	// IMP=0x002000000001664b
@property(retain) VideoConversionHangDetector *hangDetector; // @synthesize hangDetector=_hangDetector;
- (id)outputAssetInformationWithError:(id *)arg1;	// IMP=0x0010000000015eb3
- (void)cancelProgressUpdateTimerAndMarkEndTime;	// IMP=0x0010000000015d9a
- (void)startProgressUpdateTimerAndMarkStartTime;	// IMP=0x0010000000015a61
- (void)callCompletionHandler;	// IMP=0x0010000000015a20
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x00100000000159a7
- (void)transitionToRunningStateAndConditionallyRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001590d
- (void)cancelTranscode;	// IMP=0x00100000000158ad
- (double)currentFractionCompleted;	// IMP=0x0010000000015844
- (_Bool)hasProgress;	// IMP=0x00100000000157e1
- (void)performExport;	// IMP=0x0010000000015781
- (void)cancel;	// IMP=0x00100000000155d0
- (_Bool)didDetectHang;	// IMP=0x001000000001558c
- (void)determineAndNotifyProgress;	// IMP=0x00100000000154b4
- (void)performConversion;	// IMP=0x00100000000153a7

@end
