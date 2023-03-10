//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO
{
    TIHandwritingStrokes *_strokes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008be34d
@property(retain, nonatomic) TIHandwritingStrokes *strokes; // @synthesize strokes=_strokes;
- (id)scaleStrokes:(double)arg1;	// IMP=0x00000000008be12b
- (void)clear;	// IMP=0x00000000008be0c0
- (void)flush;	// IMP=0x00000000008be055
- (void)addPoint:(struct)arg1;	// IMP=0x00000000008bdfcc
- (id)initWithFIFO:(id)arg1;	// IMP=0x00000000008bdf61

@end

