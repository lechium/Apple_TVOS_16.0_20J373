//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVFrameRateRange;

__attribute__((visibility("hidden")))
@interface AVCaptureSystemPressureStateInternal : NSObject
{
    int _figLevel;	// 8 = 0x8
    unsigned long long _factors;	// 16 = 0x10
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;	// 24 = 0x18
}

@property(readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;
@property(readonly) unsigned long long factors;
@property(readonly) int figLevel;
- (void)dealloc;	// IMP=0x000000000000a6a2
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;	// IMP=0x000000000000a63c

@end

