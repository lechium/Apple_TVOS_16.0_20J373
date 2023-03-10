//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (VSAdditions)
+ (id)vs_currentDate;	// IMP=0x003000000001f779
+ (id)vs_stopRecordingDates;	// IMP=0x003000000001f58f
+ (void)vs_startRecordingDates;	// IMP=0x003000000001f531
+ (id)vs_recordedDates;	// IMP=0x003000000001f4dc
+ (id)vs_dateAccessQueue;	// IMP=0x003000000001f447
- (_Bool)vs_isBefore:(id)arg1;	// IMP=0x001000000001fb27
- (_Bool)vs_isAfter:(id)arg1;	// IMP=0x001000000001fb0d
- (id)vs_dateIncrementedByMinutes:(unsigned long long)arg1;	// IMP=0x001000000001fa9a
- (id)vs_dateIncrementedByDays:(long long)arg1;	// IMP=0x001000000001f9c3
- (id)vs_dateRoundedToDay;	// IMP=0x001000000001f8cf
@end

