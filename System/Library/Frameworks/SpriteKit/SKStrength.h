//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKStrength : SKAction
{
    struct SKCStrength *_mycaction;	// 8 = 0x8
}

+ (id)strengthBy:(double)arg1 duration:(double)arg2;	// IMP=0x006000000004d601
+ (id)strengthTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000004d580
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004cea6
- (id)reversedAction;	// IMP=0x000000000004d72d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d6a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d30e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004cfa9
- (id)init;	// IMP=0x000000000004ceae

@end

