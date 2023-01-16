//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector
{
    unsigned long long _model;	// 16 = 0x10
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;	// 24 = 0x18
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;	// 40 = 0x28
    struct map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> _imageAnalyzerJunkCustomClassifiers;	// 56 = 0x38
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;	// 80 = 0x50
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;	// 88 = 0x58
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifiers;	// 96 = 0x60
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _potentialLandmarkCustomClassifiers;	// 120 = 0x78
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiers;	// 144 = 0x90
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _significantEventCustomClassifiers;	// 168 = 0xa8
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _cityNatureGatingCustomClassifiers;	// 192 = 0xc0
    struct os_unfair_lock_s _cachedAllSceneClassificationsFromLastAnalysisAccessLock;	// 216 = 0xd8
    struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> _cachedAllSceneClassificationsFromLastAnalysis;	// 224 = 0xe0
    NSMutableDictionary *_cachedSaliencyHeatmapBoundingBoxGenerators;	// 240 = 0xf0
    _Bool _hasherInitialized;	// 248 = 0xf8
}

+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_5_10_0;	// IMP=0x0060000000201e41
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNet_3_0_0;	// IMP=0x0060000000201e28
+ (id)availableVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNetVersions;	// IMP=0x0060000000201d78
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_3_0_0;	// IMP=0x0060000000201d65
+ (id)availableVNInferenceNetworkIdentifierSceneNetVersions;	// IMP=0x0060000000201c66
+ (id)inferenceNetworkIdentifiers;	// IMP=0x0060000000201bf4
+ (id)allPhotosAdjustmentKeysForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000201be7
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002019e1
+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00600000002015da
+ (id)blacklistForModel:(unsigned long long)arg1;	// IMP=0x0060000000201591
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x00600000002014bd
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002012c9
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000201266
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00600000002011e7
+ (id)_inputImageBlobNameForModel:(unsigned long long)arg1 configuredWithOptions:(id)arg2;	// IMP=0x00600000002011c8
+ (_Bool)_getAnalyzerName:(id *)arg1 version:(id *)arg2 forModel:(unsigned long long)arg3 configuredWithOptions:(id)arg4 error:(id *)arg5;	// IMP=0x0060000000200fc7
- (id).cxx_construct;	// IMP=0x00000000001f065d
- (void).cxx_destruct;	// IMP=0x00000000001f0558
- (id)allCityNatureIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f042a
- (id)allSignificantEventIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f02fc
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f01ce
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001efdd5
- (id)allJunkIdentifiersForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001efbb6
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001efb89
- (id)allSceneIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ef7ed
@property(readonly) _Bool hasSliderNet;
@property(readonly) _Bool hasObjDetNet;
- (id)_processFullImagePixelBuffer:(const struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001eef36
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001eeeec
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001eed03
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ed2f6
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ea980
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x00000000001ea8cd
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ea272
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000001ea1eb
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000001ea13b
- (unsigned long long)signPostAdditionalParameter;	// IMP=0x00000000001ea0cd
- (id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e9baa

@end

