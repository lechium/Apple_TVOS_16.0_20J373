//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKTerraceNoiseModifier
{
    double *_controlPoints;	// 16 = 0x10
    int _count;	// 24 = 0x18
    _Bool _inverted;	// 28 = 0x1c
}

- (id)cloneModule;	// IMP=0x0000000000037be4
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000037a4f
- (int)requiredInputModuleCount;	// IMP=0x0000000000037a44
- (void)dealloc;	// IMP=0x00000000000379fe
- (id)initWithPeakInputValues:(id)arg1 terracesInverted:(_Bool)arg2;	// IMP=0x00000000000378a9
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x000000000003788d
- (id)init;	// IMP=0x0000000000037871

@end

