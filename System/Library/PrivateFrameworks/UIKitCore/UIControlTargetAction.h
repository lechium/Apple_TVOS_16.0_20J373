//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAction;

__attribute__((visibility("hidden")))
@interface UIControlTargetAction : NSObject
{
    UIAction *_actionHandler;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
    unsigned long long _eventMask;	// 32 = 0x20
    _Bool _cancelled;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000052547f
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)description;	// IMP=0x000000000052533e

@end

