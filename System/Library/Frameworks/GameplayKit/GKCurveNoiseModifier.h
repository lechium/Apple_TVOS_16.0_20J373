//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKCurveNoiseModifier
{
    double *_parameters;	// 16 = 0x10
    double *_controlPoints;	// 24 = 0x18
    int _count;	// 32 = 0x20
}

- (id)cloneModule;	// IMP=0x00000000000376f4
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000373b8
- (int)requiredInputModuleCount;	// IMP=0x00000000000373ad
- (void)dealloc;	// IMP=0x0000000000037352
- (id)initWithControlPoints:(id)arg1;	// IMP=0x0000000000037043
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x0000000000036f60
- (id)init;	// IMP=0x0000000000036e7d

@end

