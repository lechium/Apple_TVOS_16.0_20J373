//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TVHomeSharingKit)
+ (id)tvhk_dateWithMillisecondsSince1970:(id)arg1;	// IMP=0x0050000000034e03
+ (_Bool)tvhk_networkTimeIsApproximatelyCorrect;	// IMP=0x0050000000034dde
- (_Bool)_tvhk_isEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000003531f
- (_Bool)tvhk_isYesterday;	// IMP=0x001000000003529f
- (_Bool)tvhk_isTomorrow;	// IMP=0x001000000003521f
- (_Bool)tvhk_isToday;	// IMP=0x00100000000351c5
- (id)tvhk_dateBySubtractingDays:(long long)arg1;	// IMP=0x00100000000351b0
- (id)tvhk_dateByAddingDays:(long long)arg1;	// IMP=0x0010000000035110
- (id)tvhk_dateCeiledToNearestMinute:(long long)arg1;	// IMP=0x0010000000034fb5
- (id)tvhk_dateFlooredToNearestMinute:(long long)arg1;	// IMP=0x0010000000034e95
@end

