//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNActionRunBlock : SCNAction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0060000000077126
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000076fa4
- (id)reversedAction;	// IMP=0x00000000000771eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077181
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000007704b
- (void)dealloc;	// IMP=0x0000000000077005
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000076fac
- (_Bool)isCustom;	// IMP=0x0000000000076f9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000076f5f
- (id)init;	// IMP=0x0000000000076f13

@end

