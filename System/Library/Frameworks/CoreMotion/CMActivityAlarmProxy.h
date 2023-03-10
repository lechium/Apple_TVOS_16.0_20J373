//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
    int fAlarmCounter;	// 24 = 0x18
    NSMutableDictionary *fAlarms;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *fReplyQueue;	// 40 = 0x28
    _Bool fAlarmAvailable;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00600000001d4a6f
- (void)stopListeningForActivityAlarm:(id)arg1;	// IMP=0x00000000001d4dac
- (void)listenForActivityAlarm:(id)arg1;	// IMP=0x00000000001d4b08
- (_Bool)activityAlarmAvailable;	// IMP=0x00000000001d4ae4
- (void)dealloc;	// IMP=0x00000000001d49d6
- (id)init;	// IMP=0x00000000001d406c

@end

