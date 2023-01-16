//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSMutableArray, SKNode;

__attribute__((visibility("hidden")))
@interface SKReach : SKAction
{
    SKNode *_ikRoot;	// 8 = 0x8
    struct CGPoint _goalPosition;	// 16 = 0x10
    NSMutableArray *_ikChain;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    _Bool _timeConstrained;	// 48 = 0x30
    double _zRotationSpeed;	// 56 = 0x38
}

+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 velocity:(double)arg3;	// IMP=0x006000000002da5a
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3;	// IMP=0x006000000002d9a3
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4;	// IMP=0x006000000002d826
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4;	// IMP=0x006000000002d81e
- (void).cxx_destruct;	// IMP=0x000000000002eef7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ee1d
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000002ec81
- (void)solveIKWithTarget:(id)arg1;	// IMP=0x000000000002dc0e
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000002d8f3
- (id)init;	// IMP=0x000000000002d78a

@end

