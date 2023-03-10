//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishApplauseModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000000783ef
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000078366
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000078011
- (void).cxx_destruct;	// IMP=0x0000000000078976
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007873b
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000786a9
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000078586
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078507
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000782ee
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078276
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000781f1
- (id)init;	// IMP=0x0000000000078194
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000078103

@end

