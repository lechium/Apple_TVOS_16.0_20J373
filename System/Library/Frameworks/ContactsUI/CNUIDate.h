//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject
{
}

+ (_Bool)isYearlessComponents:(id)arg1;	// IMP=0x0080000000015b0f
+ (id)dateByNormalizingToGMT:(id)arg1;	// IMP=0x00800000000159f1
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;	// IMP=0x0080000000015726
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00800000000156b9
+ (id)yearlessComponentsFromDate:(id)arg1;	// IMP=0x008000000001563c
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;	// IMP=0x0080000000015568
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;	// IMP=0x00800000000154ce
+ (id)gregorianCalendarGMT;	// IMP=0x008000000001540e
+ (id)currentCalendarGMT;	// IMP=0x008000000001534f
+ (void)localeDidChange:(id)arg1;	// IMP=0x008000000001531a
+ (void)initialize;	// IMP=0x0080000000015278

@end

