//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject
{
    unsigned long long _currentState;	// 8 = 0x8
    CDUnknownBlockType _updateHandler;	// 16 = 0x10
    _Bool _isFirstResponder;	// 24 = 0x18
    unsigned long long _lastDistinctState;	// 32 = 0x20
    unsigned long long _previousState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000038e3ee
@property(nonatomic) _Bool isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
@property(readonly, nonatomic) unsigned long long previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) unsigned long long lastDistinctState; // @synthesize lastDistinctState=_lastDistinctState;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (_Bool)currentSateCanTransitionWithEvents:(id)arg1;	// IMP=0x000000000038e2b1
@property(readonly, nonatomic) unsigned long long *currentStateRef;
- (void)_updateFromState:(unsigned long long)arg1;	// IMP=0x000000000038e281
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000038e191

@end

