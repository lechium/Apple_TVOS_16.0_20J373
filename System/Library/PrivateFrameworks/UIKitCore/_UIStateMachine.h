//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStateMachine : NSObject
{
    const struct {
        struct _UIStateMachineMeta _field1;
        struct _UIStateMachineDebugging *_field2;
        struct {
            CDUnknownBlockType _field1;
            struct _UIStateTransition _field2[0];
        } _field3[0];
    } *_spec;	// 8 = 0x8
    _Bool _externalSpec;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)handleEvent:(unsigned long long)arg1 withContext:(union _UIStateContext)arg2;	// IMP=0x0000000000cdfce8
- (id)initWithSpec:(void *)arg1 initialState:(unsigned long long)arg2;	// IMP=0x0000000000cdfc9c
@property(readonly, nonatomic) void *spec;
- (void)setStateChangeObserver:(unsigned long long)arg1 observer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ce0206
- (void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000ce0053
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(CDUnknownBlockType)arg3 postTransitionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cdfe85
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cdfe70
- (void)dealloc;	// IMP=0x0000000000cdfd9e
- (id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3;	// IMP=0x0000000000cdfd0b

@end

