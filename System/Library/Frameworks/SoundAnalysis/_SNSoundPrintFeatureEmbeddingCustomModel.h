//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription, NSDictionary;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface _SNSoundPrintFeatureEmbeddingCustomModel : NSObject
{
    MLModelDescription *_modelDescription;	// 8 = 0x8
    id <SNMLModel> _model;	// 16 = 0x10
    NSDictionary *_outerToInnerInputFeatureNameMappings;	// 24 = 0x18
    NSDictionary *_outerToInnerOutputFeatureNameMappings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006aa92
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006a9ac
- (id)initWithModel:(id)arg1 modelDescription:(id)arg2;	// IMP=0x000000000006a7c9

@end

