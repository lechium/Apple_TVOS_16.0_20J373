//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface MonzaV4_1 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000027626f
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000002761e6
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000275eb9
- (void).cxx_destruct;	// IMP=0x00000000002767d5
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027659a
- (id)predictionFromInputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000276529
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000276406
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000276387
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027616e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002760f6
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000276071
- (id)init;	// IMP=0x0000000000276014
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000275f83

@end

