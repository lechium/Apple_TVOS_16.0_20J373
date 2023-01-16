//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffect.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect
{
    NSArray *_effects;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000d68cc
- (void).cxx_destruct;	// IMP=0x00000000000d6d6e
- (id)description;	// IMP=0x00000000000d6cef
- (long long)_expectedUsage;	// IMP=0x00000000000d6c16
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d6aaf
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6968
- (id)_allEffects;	// IMP=0x00000000000d6953
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d68f1
- (unsigned long long)hash;	// IMP=0x00000000000d68d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d684f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d67c3
- (id)initWithEffects:(id)arg1;	// IMP=0x00000000000d655e

@end

