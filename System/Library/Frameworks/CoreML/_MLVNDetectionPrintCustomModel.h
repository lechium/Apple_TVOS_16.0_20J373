//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, MLModelDescription, NSDictionary;

__attribute__((visibility("hidden")))
@interface _MLVNDetectionPrintCustomModel : NSObject
{
    MLModelDescription *_modelDescription;	// 8 = 0x8
    unsigned long long _detectionPrintRequestRevision;	// 16 = 0x10
    NSDictionary *_expectedOutputShapeV1;	// 24 = 0x18
    MLModelConfiguration *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000141268
@property(readonly, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSDictionary *expectedOutputShapeV1; // @synthesize expectedOutputShapeV1=_expectedOutputShapeV1;
@property(readonly, nonatomic) unsigned long long detectionPrintRequestRevision; // @synthesize detectionPrintRequestRevision=_detectionPrintRequestRevision;
@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000140aa2
- (id)featureValueFromDetectionPrint:(id)arg1 featureName:(id)arg2;	// IMP=0x000000000014086b
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013f9e2

@end

