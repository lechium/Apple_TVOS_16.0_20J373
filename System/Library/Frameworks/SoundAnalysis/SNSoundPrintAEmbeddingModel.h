//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintAEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000007ad24
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000007ac9b
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000007a946
- (void).cxx_destruct;	// IMP=0x000000000007b2ab
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007b070
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007afde
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007aebb
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007ae3c
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007ac23
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007abab
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007ab26
- (id)init;	// IMP=0x000000000007aac9
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000007aa38

@end

