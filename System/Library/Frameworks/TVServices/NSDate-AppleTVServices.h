//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (AppleTVServices)
+ (id)tv_dateWithMillisecondsSince1970:(id)arg1;	// IMP=0x0050000000022529
+ (_Bool)tvs_networkTimeIsApproximatelyCorrect;	// IMP=0x0050000000022504
- (_Bool)_isEqualToDateIgnoringTime:(id)arg1;	// IMP=0x0010000000022a51
- (_Bool)tvs_isYesterday;	// IMP=0x00100000000229d1
- (_Bool)tvs_isTomorrow;	// IMP=0x0010000000022951
- (_Bool)tvs_isToday;	// IMP=0x00100000000228f7
- (id)tvs_dateBySubtractingDays:(long long)arg1;	// IMP=0x00100000000228e2
- (id)tvs_dateByAddingDays:(long long)arg1;	// IMP=0x0010000000022842
- (id)tvs_dateCeiledToNearestMinute:(int)arg1;	// IMP=0x00100000000226e6
- (id)tvs_dateFlooredToNearestMinute:(int)arg1;	// IMP=0x00100000000225bb
@end

