//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVDepartureAnnouncingObjectMonitor : NSObject
{
    AVWeakReference *_weakReferenceToMonitoringObject;	// 8 = 0x8
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;	// IMP=0x00600000000e6fce
- (void)dealloc;	// IMP=0x00000000000e701d
- (id)initWithMonitoringObject:(id)arg1;	// IMP=0x00000000000e6f68

@end

