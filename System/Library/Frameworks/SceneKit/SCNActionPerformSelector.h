//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionPerformSelector : SCNAction
{
    SEL _selector;	// 8 = 0x8
    id _target;	// 16 = 0x10
}

+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;	// IMP=0x006000000011ff8d
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000011ff23
- (id)reversedAction;	// IMP=0x0000000000120063
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000120000
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000011ff2b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011fef4
- (_Bool)isCustom;	// IMP=0x000000000011feec
- (void)dealloc;	// IMP=0x000000000011feaa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011fe7b
- (id)init;	// IMP=0x000000000011fe2f

@end

