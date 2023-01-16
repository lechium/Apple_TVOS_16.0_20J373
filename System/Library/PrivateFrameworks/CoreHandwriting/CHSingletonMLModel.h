//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLModelConfiguration, MLModelDescription, NSString;

@interface CHSingletonMLModel : NSObject
{
    NSString *_modelKey;	// 8 = 0x8
    long long _modelUseCount;	// 16 = 0x10
    MLModel *_model;	// 24 = 0x18
}

+ (void)releaseModelWithKey:(id)arg1;	// IMP=0x00600000000a41a0
+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000a3b60
+ (void)setup;	// IMP=0x00600000000a39c0
- (void).cxx_destruct;	// IMP=0x00000000000a42c0
@property(readonly, nonatomic) NSString *modelKey; // @synthesize modelKey=_modelKey;
- (long long)usageCount;	// IMP=0x00000000000a4190
@property(readonly, nonatomic) MLModelConfiguration *configuration;
@property(readonly, nonatomic) MLModelDescription *modelDescription;
- (id)model;	// IMP=0x00000000000a4140
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a3e20
- (void)decrementUsageCount;	// IMP=0x00000000000a3e10
- (void)incrementUsageCount;	// IMP=0x00000000000a3e00
- (id)initWithMLModel:(id)arg1 modelKey:(id)arg2;	// IMP=0x00000000000a3a70

@end

