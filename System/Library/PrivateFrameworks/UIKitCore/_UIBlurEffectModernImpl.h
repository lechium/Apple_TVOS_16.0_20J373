//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIBlurEffectModernImpl
{
    double _blurRadius;	// 8 = 0x8
    double _blurScale;	// 16 = 0x10
}

- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000c6467
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000c5feb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5f66
- (unsigned long long)hash;	// IMP=0x00000000000c5f30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5eb3
- (id)initWithBlurRadius:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000c5e3f

@end

