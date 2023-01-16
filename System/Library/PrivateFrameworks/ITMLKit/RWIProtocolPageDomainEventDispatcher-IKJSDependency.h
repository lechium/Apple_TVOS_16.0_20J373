//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolPageDomainEventDispatcher.h>

@interface RWIProtocolPageDomainEventDispatcher (IKJSDependency)
- (void)safe_frameStoppedLoadingWithFrameId:(id)arg1;	// IMP=0x00900000000d0d98
- (void)safe_frameClearedScheduledNavigationWithFrameId:(id)arg1;	// IMP=0x00900000000d0cae
- (void)safe_frameDetachedWithFrameId:(id)arg1;	// IMP=0x00900000000d0bc4
- (void)safe_frameStartedLoadingWithFrameId:(id)arg1;	// IMP=0x00900000000d0ada
- (void)safe_domContentEventFiredWithTimestamp:(double)arg1;	// IMP=0x00900000000d0a05
- (void)safe_loadEventFiredWithTimestamp:(double)arg1;	// IMP=0x00900000000d0930
- (void)safe_frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;	// IMP=0x00900000000d0830
- (void)safe_frameNavigatedWithFrame:(id)arg1;	// IMP=0x00900000000d0746
@end
