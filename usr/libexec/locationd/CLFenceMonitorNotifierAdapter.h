//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLFenceMonitorNotifierAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_fenceNotifier;	// 16 = 0x10
}

@property(nonatomic) void *fenceNotifier; // @synthesize fenceNotifier=_fenceNotifier;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onScenarioTrigger:(id)arg1;	// IMP=0x00100000005f5326
- (void)onVisit:(id)arg1;	// IMP=0x00100000005f50ff
- (id)initWithFenceMonitor:(void *)arg1;	// IMP=0x00100000005f50b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

