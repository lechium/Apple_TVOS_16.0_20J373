//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakDisplayLinkTarget : NSObject
{
    id _target;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
}

+ (SEL)displayLinkAction;	// IMP=0x0040000001022b83
- (void).cxx_destruct;	// IMP=0x0000000001022b90
- (void)_displayLinkTick:(id)arg1;	// IMP=0x0000000001022b00
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000010229a2

@end
