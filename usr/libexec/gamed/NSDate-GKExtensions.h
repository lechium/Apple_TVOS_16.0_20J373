//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x002000000008851a
+ (id)_gkServerTimestamp;	// IMP=0x001000000008b5ed
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x001000000008b59e
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x001000000008b546
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x00200000000887c0
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x00100000000886d8
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x0010000000088635
- (id)_gkServerTimestamp;	// IMP=0x001000000008b63d
@end

