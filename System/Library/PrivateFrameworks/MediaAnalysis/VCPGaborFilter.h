//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPGaborFilter : NSObject
{
    struct Kernel **_filterBanks;	// 8 = 0x8
    int _numScales;	// 16 = 0x10
    int _numOrientations;	// 20 = 0x14
    int _num;	// 24 = 0x18
}

- (int)createGaborFilterKernel:(struct Kernel)arg1 sigmaX:(float)arg2 sigmaY:(float)arg3 lambda:(float)arg4 thetaInDegree:(float)arg5 phaseInDegree:(float)arg6;	// IMP=0x00000000001cd6a7
- (int)processWithFilterScaleIdx:(int)arg1 orientIdx:(int)arg2 srcImage:(const float *)arg3 outImage:(float *)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;	// IMP=0x00000000001cd634
- (void)dealloc;	// IMP=0x00000000001cd58c
- (id)initWithNumberOfScales:(int)arg1 numOfOrientations:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001cd2ee

@end

