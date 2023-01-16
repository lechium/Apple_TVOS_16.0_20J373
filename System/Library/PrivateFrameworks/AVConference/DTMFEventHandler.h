//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DTMFEventHandler : NSObject
{
    NSMutableArray *dtmfEventQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *dtmfQueue;	// 16 = 0x10
    int _currentEventState;	// 24 = 0x18
    _Bool currentEventNeedsEndBlock;	// 28 = 0x1c
    unsigned long long currentEventRetransmitFinalPacketCount;	// 32 = 0x20
    unsigned char currentEvent;	// 40 = 0x28
    unsigned char currentVolume;	// 41 = 0x29
    unsigned int currentStartTimestamp;	// 44 = 0x2c
    unsigned int currentDurationCounter;	// 48 = 0x30
    unsigned int currentEndTimestamp;	// 52 = 0x34
    unsigned int _currentPauseCompleteTimestamp;	// 56 = 0x38
}

- (_Bool)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int *)arg1;	// IMP=0x000000000030581a
- (int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned int)arg3 interval:(unsigned int)arg4 dataBuffer:(char *)arg5 isEnd:(_Bool)arg6;	// IMP=0x00000000003057da
- (_Bool)shouldTransmitDTMFWithTimestamp:(unsigned int)arg1;	// IMP=0x0000000000305619
- (void)stopDTMFEventAtTimestamp:(unsigned int)arg1 withSampleRate:(unsigned int)arg2;	// IMP=0x000000000030557b
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)arg1 interval:(unsigned int)arg2 RTPHandle:(struct tagHANDLE *)arg3;	// IMP=0x000000000030500e
- (void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned int)arg2 withSampleRate:(unsigned int)arg3;	// IMP=0x0000000000304d03
- (_Bool)insertStopBlockWithEndTimestamp:(unsigned int)arg1 withPauseCompleteTimestamp:(unsigned int)arg2;	// IMP=0x0000000000304c1a
- (_Bool)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned int)arg3;	// IMP=0x0000000000304b0b
- (void)dealloc;	// IMP=0x0000000000304aa4
- (id)init;	// IMP=0x0000000000304a23

@end
