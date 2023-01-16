//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NWAccumulation : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isSnapshot;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSMutableDictionary *_durations;	// 24 = 0x18
    NSString *_currentState;	// 32 = 0x20
    double _lastUpdateTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004d4e0
@property(nonatomic) _Bool isSnapshot; // @synthesize isSnapshot=_isSnapshot;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSMutableDictionary *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)snapshot;	// IMP=0x000000000004d0a0
- (void)reset;	// IMP=0x000000000004d040
- (void)updateWithState:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000004cc20
- (id)description;	// IMP=0x000000000004cb80
- (void)dealloc;	// IMP=0x000000000004caf0
- (id)initWithName:(id)arg1;	// IMP=0x000000000004c8f0

@end
