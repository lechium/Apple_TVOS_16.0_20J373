//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKHide : SKAction
{
    struct SKCHide *_mycaction;	// 8 = 0x8
}

+ (id)unhide;	// IMP=0x006000000001baac
+ (id)hide;	// IMP=0x006000000001ba54
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001b9c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bb4a
- (id)reversedAction;	// IMP=0x000000000001bb04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b9cd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b8a3
- (id)init;	// IMP=0x000000000001b7cc

@end

