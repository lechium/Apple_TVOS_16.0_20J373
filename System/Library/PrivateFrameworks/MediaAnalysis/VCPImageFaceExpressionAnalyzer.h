//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCPImageFaceExpressionAnalyzer
{
    NSArray *_faces;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023b681
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000023ad44
- (id)initWithFaceResults:(id)arg1;	// IMP=0x000000000023ac74

@end

