//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPlayActivityController, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackObserver : NSObject
{
    NSOperationQueue *_recordEventOperationQueue;	// 8 = 0x8
    ICPlayActivityController *_reportingController;	// 16 = 0x10
    _Bool _offline;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000145fdd
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;	// IMP=0x0000000000145f18
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;	// IMP=0x0000000000144cd2
- (id)newPlayActivityEvent;	// IMP=0x0000000000144b07
- (id)init;	// IMP=0x0000000000144a35

@end
