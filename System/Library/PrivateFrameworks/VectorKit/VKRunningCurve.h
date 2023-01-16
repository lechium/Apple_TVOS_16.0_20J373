//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRunningCurve : NSObject
{
    CDStruct_6ae0d6dd _p0;	// 8 = 0x8
    double _t0;	// 72 = 0x48
    CDStruct_6ae0d6dd _p1;	// 80 = 0x50
    double _t1;	// 144 = 0x90
    CDStruct_6ae0d6dd _pu;	// 152 = 0x98
    double _tu;	// 216 = 0xd8
    struct {
        double mb[4][3];
    } _mb;	// 224 = 0xe0
    _Bool _mbValid;	// 320 = 0x140
}

- (id).cxx_construct;	// IMP=0x0000000000430857
- (void).cxx_destruct;	// IMP=0x000000000043082d
- (CDStruct_6ae0d6dd)stateAtTime:(double)arg1;	// IMP=0x000000000043045e
- (_Bool)hasStateAtTime:(double)arg1;	// IMP=0x0000000000430418
- (void)appendPosition:(Matrix_6e1d3589)arg1 atTime:(double)arg2 positionBehind:(_Bool)arg3;	// IMP=0x000000000042faa7
- (void)reset;	// IMP=0x000000000042fa7e
- (id)init;	// IMP=0x000000000042fa02

@end

