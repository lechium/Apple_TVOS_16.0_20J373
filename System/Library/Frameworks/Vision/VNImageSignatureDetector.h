//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNImageSignatureDetector
{
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> _hyperplaneLSHProcessor;	// 16 = 0x10
    unsigned long long _imageSignatureprintType;	// 24 = 0x18
    unsigned long long _imageSignatureHashType;	// 32 = 0x20
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000277561
- (id).cxx_construct;	// IMP=0x00000000002780f3
- (void).cxx_destruct;	// IMP=0x00000000002780cb
@property(readonly, nonatomic) unsigned long long imageSignatureHashType; // @synthesize imageSignatureHashType=_imageSignatureHashType;
@property(readonly, nonatomic) unsigned long long imageSignatureprintType; // @synthesize imageSignatureprintType=_imageSignatureprintType;
- (shared_ptr_0a6daad2)_calculateImageSignatureHashDescriptorFrom:(const void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000277efe
- (shared_ptr_0a6daad2)_calculateImageSignatureprintDescriptorFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000277c6a
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002778b5
- (_Bool)needsMetalContext;	// IMP=0x00000000002778ad
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x0000000000277898
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000027769a

@end

