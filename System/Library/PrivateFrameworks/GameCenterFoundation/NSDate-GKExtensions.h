//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x00500000000318a9
+ (id)_gkServerTimestamp;	// IMP=0x0050000000034a63
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x0050000000034a14
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x00500000000349bc
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x0010000000031b4f
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x0010000000031a67
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x00100000000319c4
- (id)_gkServerTimestamp;	// IMP=0x0010000000034ab3
@end

