//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv3
{
}

+ (_Bool)inputBGR;	// IMP=0x000000000026521e
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x0000000000265209
+ (float)inputScale;	// IMP=0x00000000002651fb
+ (_Bool)hasPose;	// IMP=0x00000000002651f3
+ (const void *)importantClasses;	// IMP=0x00000000002651c7
+ (unsigned long long)mumberPosClasses;	// IMP=0x00000000002651bc
+ (id)inputLayerName;	// IMP=0x00000000002651af
+ (id)modelName;	// IMP=0x00000000002651a2
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x0000000000264d28
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000264b86
- (void)initializeBuffers;	// IMP=0x0000000000264163
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;	// IMP=0x0000000000264097

@end

