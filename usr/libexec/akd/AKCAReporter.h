//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AKCAReporter : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_reportData;	// 16 = 0x10
    unsigned long long _initTime;	// 24 = 0x18
    struct mach_timebase_info _clock_timebase;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002a6ed
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1;	// IMP=0x001000000002a6b7
- (void)sendReport;	// IMP=0x001000000002a59e
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000002a588
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000002a572
- (id)initWithEvent:(id)arg1;	// IMP=0x001000000002a486

@end

