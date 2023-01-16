//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMMotionManager, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectCoreMotionEventProvider
{
    CMMotionManager *_motionManager;	// 8 = 0x8
    NSOperationQueue *_motionEventQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b8922a
- (double)slowUpdateIntervalForLogs;	// IMP=0x0000000000b891f3
- (double)fastUpdateIntervalForLogs;	// IMP=0x0000000000b891bc
- (_Bool)shouldLogEvents;	// IMP=0x0000000000b891b4
- (id)currentEvent;	// IMP=0x0000000000b890c7
- (void)stopGeneratingEvents;	// IMP=0x0000000000b890c1
- (void)startGeneratingEvents;	// IMP=0x0000000000b890bb
- (void)setSlowUpdatesEnabled:(_Bool)arg1;	// IMP=0x0000000000b890b5
- (void)dealloc;	// IMP=0x0000000000b89052
- (id)init;	// IMP=0x0000000000b88edb

@end

