//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv4
{
}

+ (_Bool)inputBGR;	// IMP=0x0080000000265350
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x0080000000265315
+ (float)inputScale;	// IMP=0x0080000000265307
+ (_Bool)hasPose;	// IMP=0x00800000002652ff
+ (const void *)importantClasses;	// IMP=0x00800000002652d3
+ (unsigned long long)mumberPosClasses;	// IMP=0x00800000002652c8
+ (id)inputLayerName;	// IMP=0x00800000002652bb
+ (id)modelName;	// IMP=0x00800000002652ae
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x0000000000265dd7
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000265c8d
- (void)initializeBuffers;	// IMP=0x00000000002653f6

@end

