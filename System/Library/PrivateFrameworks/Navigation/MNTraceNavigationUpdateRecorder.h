//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTraceRecorder, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceNavigationUpdateRecorder : NSObject
{
    MNTraceRecorder *_traceRecorder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004e1fc
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x000000000004e1dd
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x000000000004e1c1
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000004e1a7
- (void)_recordRouteChangeWithRouteInfo:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000004e093
- (id)initWithTraceRecorder:(id)arg1;	// IMP=0x000000000004dfff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

