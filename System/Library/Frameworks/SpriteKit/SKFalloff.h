//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKFalloff : SKAction
{
    struct SKCFalloff *_mycaction;	// 8 = 0x8
}

+ (id)falloffBy:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000010a0f
+ (id)falloffTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000001098e
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000102b4
- (id)reversedAction;	// IMP=0x0000000000010b3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010ab5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001071c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000103b7
- (id)init;	// IMP=0x00000000000102bc

@end
