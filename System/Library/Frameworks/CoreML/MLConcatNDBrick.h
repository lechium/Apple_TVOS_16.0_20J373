//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLConcatNDBrick : NSObject
{
    _Bool _shapeInfoNeeded;	// 8 = 0x8
    NSNumber *_axis;	// 16 = 0x10
    NSArray *_inputRanks;	// 24 = 0x18
    NSArray *_outputRanks;	// 32 = 0x20
    NSArray *_inputShapes;	// 40 = 0x28
    NSArray *_outputShapes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000160027
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
@property(readonly, nonatomic) NSNumber *axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) _Bool shapeInfoNeeded; // @synthesize shapeInfoNeeded=_shapeInfoNeeded;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x000000000015f91e
- (_Bool)hasGPUSupport;	// IMP=0x000000000015f916
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000015f6a9
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000000015f2f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

