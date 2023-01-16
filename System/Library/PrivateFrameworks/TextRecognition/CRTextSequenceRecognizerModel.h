//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRNeuralRecognizerConfiguration, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModel : NSObject
{
    int *_codemapArray;	// 8 = 0x8
    unsigned long long _codemapSize;	// 16 = 0x10
    long long _ctcBlankLabelIndex;	// 24 = 0x18
    NSDictionary *_outputShape;	// 32 = 0x20
    NSNumber *_outputWidthDownscale;	// 40 = 0x28
    NSNumber *_outputWidthOffset;	// 48 = 0x30
    CRNeuralRecognizerConfiguration *_configuration;	// 56 = 0x38
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x001000000011a592
- (void).cxx_destruct;	// IMP=0x000000000011a7ca
@property(readonly) CRNeuralRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSNumber *outputWidthOffset; // @synthesize outputWidthOffset=_outputWidthOffset;
@property(retain, nonatomic) NSNumber *outputWidthDownscale; // @synthesize outputWidthDownscale=_outputWidthDownscale;
@property(retain, nonatomic) NSDictionary *outputShape; // @synthesize outputShape=_outputShape;
@property(nonatomic) long long ctcBlankLabelIndex; // @synthesize ctcBlankLabelIndex=_ctcBlankLabelIndex;
@property(nonatomic) unsigned long long codemapSize; // @synthesize codemapSize=_codemapSize;
@property(nonatomic) int *codemapArray; // @synthesize codemapArray=_codemapArray;
- (void)releaseIntermediateBuffers;	// IMP=0x000000000011a755
- (_Bool)preheatWithError:(id *)arg1;	// IMP=0x000000000011a74d
- (id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4;	// IMP=0x000000000011a745
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011a738
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011a709
- (_Bool)supportCharacterBoxes;	// IMP=0x000000000011a701
@property(readonly) NSURL *modelURL;
- (id)populateInputBatchData:(float *)arg1 textFeatures:(id)arg2 image:(id)arg3 batchSize:(long long)arg4 width:(double)arg5 configuration:(id)arg6;	// IMP=0x00000000001196fc
- (void)dealloc;	// IMP=0x00000000001196b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

