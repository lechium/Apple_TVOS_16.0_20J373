//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO
{
    NSMutableArray *_prevPoints;	// 16 = 0x10
    unsigned long long _width;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008beb0a
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
- (void)clear;	// IMP=0x00000000008bea58
- (void)flush;	// IMP=0x00000000008be8c8
- (void)addPoint:(struct)arg1;	// IMP=0x00000000008be673
- (void)emitAveragedPoint;	// IMP=0x00000000008be3f3
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;	// IMP=0x00000000008be360

@end
