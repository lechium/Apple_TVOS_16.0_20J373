//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionWait : SCNAction
{
    struct SCNCActionWait *_mycaction;	// 8 = 0x8
}

+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;	// IMP=0x00600000000a656e
+ (id)waitForDuration:(double)arg1;	// IMP=0x00600000000a652d
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a6525
- (id)reversedAction;	// IMP=0x00000000000a65cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a64f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a6441
- (id)init;	// IMP=0x00000000000a638c

@end

