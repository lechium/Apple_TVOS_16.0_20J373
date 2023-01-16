//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRCompactKeyboardAnimation;

@interface SRCompactKeyboardState : NSObject
{
    SRCompactKeyboardAnimation *_animation;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e68e
@property(readonly, copy, nonatomic) SRCompactKeyboardAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002e661
@property(readonly, nonatomic) struct CGRect frameForAnimation;
- (id)initWithKeyboardNotification:(id)arg1;	// IMP=0x001000000002e25f
- (id)initWithFrame:(struct CGRect)arg1 animation:(id)arg2;	// IMP=0x001000000002e1e1

@end

