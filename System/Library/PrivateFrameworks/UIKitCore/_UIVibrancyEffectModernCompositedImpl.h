//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl
{
    long long _compositingMode;	// 8 = 0x8
    NSString *_filterType;	// 16 = 0x10
    UIColor *_compositingColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cef01
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000cee85
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000cedb5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ced36
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cec51
- (unsigned long long)hash;	// IMP=0x00000000000cec40
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000000ceb4b
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;	// IMP=0x00000000000ce9f3

@end

