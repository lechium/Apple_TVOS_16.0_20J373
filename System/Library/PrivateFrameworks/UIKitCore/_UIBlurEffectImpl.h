//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x00800000000c53d1
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000c5778
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000c56c1
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000c56bb
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000c56b2
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x00000000000c56aa
- (_Bool)canProvideVibrancyEffect;	// IMP=0x00000000000c56a2
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000000c569a
- (id)tintColor;	// IMP=0x00000000000c5692
- (long long)style;	// IMP=0x00000000000c5682
- (void)setEffect:(id)arg1;	// IMP=0x00000000000c567c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c55ff
- (unsigned long long)hash;	// IMP=0x00000000000c5582
- (_Bool)requiresCopying;	// IMP=0x00000000000c557a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5574

@end
