//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimeBoundFeature : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _autoRemove;	// 9 = 0x9
    _Bool _skippable;	// 10 = 0xa
    double _startTime;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    id _userInfo;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000243d2
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024247
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3;	// IMP=0x000000000002407e
- (id)init;	// IMP=0x000000000002405a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

