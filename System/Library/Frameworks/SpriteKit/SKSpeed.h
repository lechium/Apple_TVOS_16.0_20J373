//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKSpeed : SKAction
{
    struct SKCSpeed *_mycaction;	// 8 = 0x8
}

+ (id)speedTo:(double)arg1 duration:(double)arg2;	// IMP=0x000000000005a212
+ (id)speedBy:(double)arg1 duration:(double)arg2;	// IMP=0x000000000005a16c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059a92
- (id)reversedAction;	// IMP=0x000000000005a319
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a293
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059efa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059b95
- (id)init;	// IMP=0x0000000000059a9a

@end

