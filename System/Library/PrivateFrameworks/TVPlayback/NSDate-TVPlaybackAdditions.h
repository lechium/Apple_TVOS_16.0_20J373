//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TVPlaybackAdditions)
+ (id)tvp_dateWithMillisecondsSince1970:(id)arg1;	// IMP=0x005000000009c0f6
+ (_Bool)tvp_networkTimeIsApproximatelyCorrect;	// IMP=0x005000000009c0d1
- (_Bool)_isEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000009c61e
- (_Bool)tvp_isYesterday;	// IMP=0x001000000009c59e
- (_Bool)tvp_isTomorrow;	// IMP=0x001000000009c51e
- (_Bool)tvp_isToday;	// IMP=0x001000000009c4c4
- (id)tvp_dateBySubtractingDays:(long long)arg1;	// IMP=0x001000000009c4af
- (id)tvp_dateByAddingDays:(long long)arg1;	// IMP=0x001000000009c40f
- (id)tvp_dateCeiledToNearestMinute:(int)arg1;	// IMP=0x001000000009c2b3
- (id)tvp_dateFlooredToNearestMinute:(int)arg1;	// IMP=0x001000000009c188
@end
