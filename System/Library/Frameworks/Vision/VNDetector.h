//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, VNControlledCapacityTasksQueue, VNMetalContext;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject
{
    struct os_unfair_lock_s _detectorMultiSessionAccessLock;	// 8 = 0x8
    NSDictionary *_configurationOptions;	// 16 = 0x10
    VNMetalContext *_metalContext;	// 24 = 0x18
    unsigned long long _backingStore;	// 32 = 0x20
    VNControlledCapacityTasksQueue *_synchronizationQueue;	// 40 = 0x28
}

+ (id)primaryInferenceNetworkDescriptorForIdentifier:(id)arg1 version:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005bcd2
+ (unsigned int)VNClassCode;	// IMP=0x001000000005bc9c
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005bc58
+ (void)runSuccessReportingBlockSynchronously:(CDUnknownBlockType)arg1 detector:(id)arg2 qosClass:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000005ba5d
+ (id)supportedImageSizeSetForEspressoModelWithName:(id)arg1 inputImageBlobName:(id)arg2 analysisPixelFormatType:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000005b960
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000005b94a
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x001000000005b5ff
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x001000000005b5cf
+ (id)detectorWithConfigurationOptions:(id)arg1 forSession:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005b4a8
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b49f
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg1;	// IMP=0x001000000005b401
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x001000000005b3a0
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x001000000005b2c2
+ (id)detectorName;	// IMP=0x001000000005b003
+ (Class)detectorClassForDetectorType:(id)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005af04
+ (Class)detectorClassForDetectorType:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005add5
+ (_Bool)isReentrant;	// IMP=0x001000000005adcd
+ (id)detectorCropProcessingAsyncTasksQueue;	// IMP=0x001000000005ad5b
+ (id)detectorCropCreationAsyncTasksQueue;	// IMP=0x001000000005ace9
- (void).cxx_destruct;	// IMP=0x0000000000059f58
@property(retain, nonatomic) VNControlledCapacityTasksQueue *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(readonly, nonatomic) unsigned long long backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) VNMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(readonly, copy) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
- (id)inferenceNetworkIdentifiers;	// IMP=0x0000000000059f0d
- (void)recordImageCropQuickLookInfoFromOptionsSafe:(id)arg1 toObservation:(id)arg2;	// IMP=0x0000000000059e5b
- (void)recordImageCropQuickLookInfoToOptionsSafe:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;	// IMP=0x0000000000059d80
- (void)recordImageCropQuickLookInfoFromOptions:(id)arg1 toObservation:(id)arg2;	// IMP=0x0000000000059c83
- (void)recordImageCropQuickLookInfoToOptions:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;	// IMP=0x0000000000059b35
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059a32
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x0000000000059a2a
- (id)requiredCancellerInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000599a5
- (_Bool)getOptionalCanceller:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005991e
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059631
@property(readonly, nonatomic) unsigned long long signPostAdditionalParameter;
- (_Bool)needsMetalContext;	// IMP=0x000000000005958e
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059451
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000005934c
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000005923b
- (_Bool)validateImageBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059172
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000058d05
- (_Bool)currentQueueIsSynchronizationQueue;	// IMP=0x0000000000058ce6
- (id)processUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000058a56
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000058a4e
- (_Bool)useGPU;	// IMP=0x0000000000058a40
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000058a38
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000058963
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058868
- (void)dealloc;	// IMP=0x00000000000587d9
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x0000000000058679

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

