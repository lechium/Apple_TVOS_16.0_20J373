//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BKSecureDrawingMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
    _Bool _secureModeEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000402a0
- (void).cxx_destruct;	// IMP=0x002000000003fbf3
@property(getter=isSecureModeEnabled) _Bool secureModeEnabled; // @synthesize secureModeEnabled=_secureModeEnabled;
- (void)reportAndKillInsecureProcesses;	// IMP=0x001000000003f72b
- (void)startMonitoringSecureDrawing;	// IMP=0x001000000003f6d8
- (id)init;	// IMP=0x001000000003f623

@end
