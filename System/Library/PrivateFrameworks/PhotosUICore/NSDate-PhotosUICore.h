//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (PhotosUICore)
+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDateInterval:(id)arg3;	// IMP=0x00800000002eb300
+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDate:(id)arg3;	// IMP=0x00800000002eb23c
- (id)px_dateTruncatedToCalendarUnit:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x00100000002eb051
- (_Bool)px_isBetweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x00100000002eaf4a
- (_Bool)px_isWithinTimeInterval:(double)arg1 sinceDate:(id)arg2;	// IMP=0x00100000002eaf09
- (long long)px_yearsSinceDate:(id)arg1;	// IMP=0x00100000002eada5
- (_Bool)px_isSameDayAsDate:(id)arg1;	// IMP=0x00100000002ead24
@end

