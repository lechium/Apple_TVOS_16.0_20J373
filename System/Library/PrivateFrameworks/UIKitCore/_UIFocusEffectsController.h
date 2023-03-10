//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusEffectsController : NSObject
{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    struct CGPoint _displayOffset;	// 24 = 0x18
    double _displayMovementAdjustment;	// 40 = 0x28
    _Bool _displayOffsetAccumulatorEnabled;	// 48 = 0x30
    struct CGPoint _currentOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000613018
@property(nonatomic) _Bool displayOffsetAccumulatorEnabled; // @synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled;
@property(readonly, nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) struct CGPoint displayOffset;
- (void)_notifyObserversForMovementDirection:(struct CGVector)arg1;	// IMP=0x0000000000612e89
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000612e73
- (void)addObserver:(id)arg1;	// IMP=0x0000000000612e09
- (void)cancelRollbackAnimation;	// IMP=0x0000000000612dcb
- (void)startRollbackAnimation;	// IMP=0x0000000000612c16
- (void)reset;	// IMP=0x0000000000612b83
- (void)resetDisplayOffsetAccumulationFactor;	// IMP=0x0000000000612b6f
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;	// IMP=0x0000000000612b5b
- (void)updateCurrentOffset:(struct CGPoint)arg1 overrideDisplayOffset:(id)arg2;	// IMP=0x0000000000612853
- (void)updateCurrentOffset:(struct CGPoint)arg1;	// IMP=0x000000000061283f
- (id)init;	// IMP=0x00000000006127f9

@end

