//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VCCoreMotionManagerDelegate;

__attribute__((visibility("hidden")))
@interface VCCoreMotionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    id <VCCoreMotionManagerDelegate> _coreMotionManagerDelegate;	// 24 = 0x18
}

- (void)stopMonitoringMotionActivity;	// IMP=0x00000000000ca8f0
- (void)startMonitoringMotionActivity;	// IMP=0x00000000000ca8ea
- (void)setCoreMotionManagerDelegate:(id)arg1;	// IMP=0x00000000000ca8d9
- (id)coreMotionManagerDelegate;	// IMP=0x00000000000ca8cb
- (void)dealloc;	// IMP=0x00000000000ca840
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000ca7bd

@end

