//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIASCIIArtFramesRenderer : NSObject
{
    NSArray *_frames;	// 8 = 0x8
    double _outputLineWidth;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002570cc
- (id)_normalizeFrames:(id)arg1;	// IMP=0x0000000000256e19
- (struct CGRect)scaledRectForRect:(struct CGRect)arg1 scaleSize:(struct CGSize)arg2;	// IMP=0x0000000000256d3d
- (id)renderedLines;	// IMP=0x0000000000255ff9
@property(readonly, nonatomic) double outputLineWidth;
@property(readonly, nonatomic) NSArray *frames;
- (id)description;	// IMP=0x0000000000255fce
- (id)visualDescription;	// IMP=0x0000000000255ea5
- (id)initWithFrames:(id)arg1;	// IMP=0x0000000000255e8b
- (id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2;	// IMP=0x0000000000255dfe

@end

