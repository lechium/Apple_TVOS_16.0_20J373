//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzer
{
    int _chunk;	// 8 = 0x8
    struct CGRect _region[5];	// 16 = 0x10
    float _score[5];	// 176 = 0xb0
    int _maxNumRegions;	// 196 = 0xc4
    _Bool _prune;	// 200 = 0xc8
}

+ (id)analyzerWith:(int)arg1 prune:(_Bool)arg2;	// IMP=0x0060000000099500
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000009b549
- (id)pruneRegions:(id)arg1;	// IMP=0x000000000009ae9d
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;	// IMP=0x000000000009a9ba
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a9a7
- (int)saliencyDetection:(struct __CVBuffer *)arg1 salientRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a62e
- (int)getSalientRegions:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a623
- (int)generateSalientRegion:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3;	// IMP=0x0000000000099ecd
- (float)outputScaling;	// IMP=0x0000000000099ebf
- (float)computeScore:(float *)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5;	// IMP=0x0000000000099b1c
- (int)scaleImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withWidth:(int)arg3 andHeight:(int)arg4;	// IMP=0x0000000000099a3f
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChunk:(int)arg3;	// IMP=0x0000000000099684
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x000000000009967c
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;	// IMP=0x0000000000099671
- (id)initWithMaxNumRegions:(int)arg1 prune:(_Bool)arg2;	// IMP=0x000000000009958c

@end

