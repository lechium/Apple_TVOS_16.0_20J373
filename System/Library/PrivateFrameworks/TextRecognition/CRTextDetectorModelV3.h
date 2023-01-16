//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelV3 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x0060000000074ddb
- (void).cxx_destruct;	// IMP=0x00000000000757b5
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007549b
- (id)predictionFromImg_input:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000007542a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000752a1
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000075222
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075061
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000074f8b
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000074ed9
- (id)init;	// IMP=0x0000000000074e7c

@end

