//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPHomeKitMotionAnalyzer
{
    NSMutableArray *_regions;	// 8 = 0x8
    float *_diff;	// 16 = 0x10
    float *_ptrFirst;	// 24 = 0x18
    float *_ptrLast;	// 32 = 0x20
    struct Scaler _scaler;	// 40 = 0x28
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;	// 96 = 0x60
    int _frameWidth;	// 120 = 0x78
    int _frameHeight;	// 124 = 0x7c
    int _width;	// 128 = 0x80
    int _height;	// 132 = 0x84
    int _stride;	// 136 = 0x88
    int _blockSize;	// 140 = 0x8c
    int _widthBlockNum;	// 144 = 0x90
    int _heightBlockNum;	// 148 = 0x94
    float _actionScore;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x000000000019a39c
- (void).cxx_destruct;	// IMP=0x000000000019a353
@property(readonly) float actionScore; // @synthesize actionScore=_actionScore;
- (id)regionsOfInterest;	// IMP=0x000000000019a32c
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000019a2c7
- (int)computeRegionsofInterest;	// IMP=0x0000000000199d4f
- (int)calculateFrameDifference:(struct __CVBuffer *)arg1;	// IMP=0x0000000000199520
- (int)setPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000001993db
- (void)dealloc;	// IMP=0x00000000001992d2
- (id)init;	// IMP=0x00000000001991c0

@end

