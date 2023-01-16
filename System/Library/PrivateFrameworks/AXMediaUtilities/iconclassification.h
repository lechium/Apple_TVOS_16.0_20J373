//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface iconclassification : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000033a96
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000033a0d
+ (id)URLOfModelInThisBundle;	// IMP=0x00600000000336e0
- (void).cxx_destruct;	// IMP=0x0000000000033f7c
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000033d64
- (id)predictionFromImage_Placeholder:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000033cf3
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000033c2d
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000033bae
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000033995
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003391d
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000033898
- (id)init;	// IMP=0x000000000003383b
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000000337aa

@end
