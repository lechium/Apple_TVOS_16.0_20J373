//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSilo, NSString, PCPersistentTimer;

@interface CLPersistentTimerInternal : NSObject
{
    PCPersistentTimer *_pcTimer;	// 8 = 0x8
    void *_clTimer;	// 16 = 0x10
    CLSilo *_silo;	// 24 = 0x18
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _strIdentifier;	// 32 = 0x20
    NSString *_serviceIdentifier;	// 56 = 0x38
    _Bool _wakeDevice;	// 64 = 0x40
    double _timeInterval;	// 72 = 0x48
    double _minimumEarlyFireProportion;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00200000003c8899
- (void).cxx_destruct;	// IMP=0x00100000003c8883
- (void)invalidate;	// IMP=0x00100000003c84aa
- (void)timerFired:(id)arg1;	// IMP=0x00100000003c81e7
- (void)bounce_timerFired:(id)arg1;	// IMP=0x00100000003c816d
- (void)dealloc;	// IMP=0x00100000003c80fc
- (void)setTimerWithInterval:(double)arg1;	// IMP=0x00100000003c7bbb
- (void)setNextFireTime:(double)arg1;	// IMP=0x00100000003c7b6a
- (id)initWithFireTime:(double)arg1 timeInterval:(double)arg2 serviceIdentifier:(const char *)arg3 wakeDevice:(_Bool)arg4 clTimer:(void *)arg5 silo:(id)arg6 minimumEarlyFireProportion:(double)arg7;	// IMP=0x00100000003c7a50

@end
