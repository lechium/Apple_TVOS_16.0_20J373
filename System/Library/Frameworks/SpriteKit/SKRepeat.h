//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKRepeat : SKAction
{
    struct SKCRepeat *_mycaction;	// 8 = 0x8
    SKAction *_repeatedAction;	// 16 = 0x10
}

+ (id)repeatActionForever:(id)arg1;	// IMP=0x0060000000014770
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x0060000000014637
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000014014
- (void).cxx_destruct;	// IMP=0x0000000000014a33
- (id)reversedAction;	// IMP=0x000000000001497c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000148d1
- (id)subactions;	// IMP=0x0000000000014866
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000144a2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001418c
- (id)init;	// IMP=0x000000000001401c

@end

