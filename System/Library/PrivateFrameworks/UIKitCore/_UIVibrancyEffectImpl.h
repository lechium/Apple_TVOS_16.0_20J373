//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x00800000000cd407
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000cdbf3
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000cdb9f
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000cdb99
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000000cdb90
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000cdb87
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000000cdb7f
- (long long)vibrancyStyle;	// IMP=0x00000000000cdb77
- (long long)style;	// IMP=0x00000000000cdb67
- (void)setEffect:(id)arg1;	// IMP=0x00000000000cdb61
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cdae4
- (unsigned long long)hash;	// IMP=0x00000000000cda67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cda61

@end

