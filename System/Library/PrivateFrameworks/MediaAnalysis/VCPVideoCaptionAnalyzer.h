//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAAsset, NSMutableArray, NSObject, NSString, NSURL, VCPTransforms, VCPVideoCaptionEncoder;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface VCPVideoCaptionAnalyzer
{
    VCPVideoCaptionEncoder *_backbone;	// 8 = 0x8
    VCPTransforms *_transformImage;	// 16 = 0x10
    float *_inputData;	// 24 = 0x18
    int _inputWidth;	// 32 = 0x20
    int _inputHeight;	// 36 = 0x24
    int _inputNumFrames;	// 40 = 0x28
    int _skipNumFramesBothEnds;	// 44 = 0x2c
    CDStruct_1b6d18a9 _timeLastProcess;	// 48 = 0x30
    CDStruct_1b6d18a9 _timeLastDetection;	// 72 = 0x48
    CDStruct_1b6d18a9 _timeStart;	// 96 = 0x60
    int _frameIndex;	// 120 = 0x78
    int _validFrames;	// 124 = 0x7c
    _Bool _enoughFrames;	// 128 = 0x80
    NSString *_resConfig;	// 136 = 0x88
    NSMutableArray *_videoCaptionResult;	// 144 = 0x90
    NSMutableArray *_activeFrameIndices;	// 152 = 0x98
    CDStruct_1b6d18a9 _timeEnd;	// 160 = 0xa0
    NSURL *_videoCaptionDecoder;	// 184 = 0xb8
    NSURL *_videoCaptionEncoder;	// 192 = 0xc0
    NSObject<OS_dispatch_group> *_downloadGroup;	// 200 = 0xc8
    MAAsset *_videoCaptionEncoderAsset;	// 208 = 0xd0
}

+ (id)cloneCaptionModel:(id)arg1 to:(id)arg2;	// IMP=0x00600000000797e7
+ (id)imageCaptionModelTestURL;	// IMP=0x00600000000797c2
+ (id)videoCaptionDecoderTestURL;	// IMP=0x006000000007979d
+ (id)videoCaptionEncoderTestURL;	// IMP=0x0060000000079778
+ (long long)mode;	// IMP=0x0060000000079770
- (void).cxx_destruct;	// IMP=0x000000000007be2c
- (id)results;	// IMP=0x000000000007bdaf
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000007bcd5
- (int)inference:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000007b4f8
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000007b24b
- (int)copyImage:(struct __CVBuffer *)arg1 withChannels:(int)arg2;	// IMP=0x000000000007af46
- (int)configInputBasedOnDevice;	// IMP=0x000000000007ae51
- (void)dealloc;	// IMP=0x000000000007ae0b
- (int)downloadVideoCaptionEncoderIfNeeded;	// IMP=0x000000000007a340
- (id)initWithFrameRate:(float)arg1 timeRange:(CDStruct_e83c9415)arg2;	// IMP=0x0000000000079eef

@end

