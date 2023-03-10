//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _attendingState;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000007cd96
- (void).cxx_destruct;	// IMP=0x002000000007d15d
@property(nonatomic) unsigned long long attendingState; // @synthesize attendingState=_attendingState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopMonitoring;	// IMP=0x001000000007d110
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007d10a
- (_Bool)isAttendingForDictation;	// IMP=0x001000000007d0f0
- (_Bool)isAttending;	// IMP=0x001000000007d0d7
- (void)updateState:(unsigned long long)arg1;	// IMP=0x001000000007cf19
- (unsigned long long)getAttendingState;	// IMP=0x001000000007ce59
- (id)init;	// IMP=0x001000000007cdeb

@end

