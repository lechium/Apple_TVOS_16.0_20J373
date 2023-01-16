//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, NSURL, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageHumanPoseAnalyzer
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    NSURL *_netFileUrl;	// 16 = 0x10
    float *_inputData;	// 24 = 0x18
    NSString *_resConfig;	// 32 = 0x20
    NSMutableArray *_persons;	// 40 = 0x28
    NSMutableArray *_results;	// 48 = 0x30
    _Bool _saveKeypoints;	// 56 = 0x38
    int _inputWidth;	// 60 = 0x3c
    int _inputHeight;	// 64 = 0x40
    float *_heatmapNms;	// 72 = 0x48
    _Bool _forceCPU;	// 80 = 0x50
    _Bool _sharedModel;	// 81 = 0x51
    _Bool _flushModel;	// 82 = 0x52
    _Bool _trackingMode;	// 83 = 0x53
}

+ (id)sharedModel:(id)arg1;	// IMP=0x006000000023c0de
+ (_Bool)saveKeypoints;	// IMP=0x006000000023ba80
- (void).cxx_destruct;	// IMP=0x000000000023ed2c
@property _Bool trackingMode; // @synthesize trackingMode=_trackingMode;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000023ea7e
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;	// IMP=0x000000000023e955
- (int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2;	// IMP=0x000000000023e72b
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;	// IMP=0x000000000023e472
- (int)generateHumanPose:(struct __CVBuffer *)arg1;	// IMP=0x000000000023e38f
- (int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3;	// IMP=0x000000000023d6da
- (int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3;	// IMP=0x000000000023c46a
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x000000000023c42f
- (int)updateModelForAspectRatio:(id)arg1;	// IMP=0x000000000023c37e
- (int)configForAspectRatio:(id)arg1;	// IMP=0x000000000023c27e
- (void)dealloc;	// IMP=0x000000000023c223
- (int)reInitModel;	// IMP=0x000000000023bf2e
- (id)initWithKeypointsOption:(_Bool)arg1 aspectRatio:(id)arg2 lightweight:(_Bool)arg3 forceCPU:(_Bool)arg4 sharedModel:(_Bool)arg5 flushModel:(_Bool)arg6;	// IMP=0x000000000023ba96
- (id)init;	// IMP=0x000000000023ba88

@end

