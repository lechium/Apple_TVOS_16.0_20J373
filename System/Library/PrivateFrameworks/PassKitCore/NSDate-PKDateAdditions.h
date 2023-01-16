//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (PKDateAdditions)
+ (id)dateForYesterday;	// IMP=0x008000000009b8ca
+ (id)dateForTomorrow;	// IMP=0x008000000009b8ac
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;	// IMP=0x008000000009b890
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;	// IMP=0x008000000009b7d1
- (long long)numberOfYearsFromNow;	// IMP=0x001000000009bd9a
- (long long)numberOfMonthsFromNow;	// IMP=0x001000000009bca2
- (long long)numberOfWeeksFromNow;	// IMP=0x001000000009bbaa
- (id)dateWithoutTime;	// IMP=0x001000000009bb1b
- (_Bool)isYesterday;	// IMP=0x001000000009bac1
- (_Bool)isTomorrow;	// IMP=0x001000000009ba67
- (_Bool)isToday;	// IMP=0x001000000009ba0d
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000009b8e8
@end
