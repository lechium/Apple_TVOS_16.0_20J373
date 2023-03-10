//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EventMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
    double _lastPollTime;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_pollTimer;	// 32 = 0x20
}

+ (id)sharedEventMonitor;	// IMP=0x004000000011f586
- (void)_willRemoveEvent:(id)arg1;	// IMP=0x00200000001200b2
- (void)_reloadPollTimer;	// IMP=0x001000000011fb17
- (void)_fireEventsAfterPollTimer;	// IMP=0x001000000011f827
- (void)_cancelPollTimer;	// IMP=0x001000000011f7f8
- (void)removeEvent:(id)arg1;	// IMP=0x001000000011f71e
- (id)monitorEvent:(id)arg1;	// IMP=0x001000000011f603
- (void)dealloc;	// IMP=0x001000000011f535
- (id)init;	// IMP=0x001000000011f4e7

@end

