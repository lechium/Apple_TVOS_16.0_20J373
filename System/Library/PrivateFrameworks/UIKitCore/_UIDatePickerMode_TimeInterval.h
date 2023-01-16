//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_TimeInterval
{
    double _componentWidth;	// 240 = 0xf0
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0060000000bf3a3b
+ (long long)datePickerMode;	// IMP=0x0060000000bf3a30
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf45a1
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf4584
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000bf4488
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000bf4375
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;	// IMP=0x0000000000bf4298
- (_Bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;	// IMP=0x0000000000bf419a
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000bf3c59
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf3c2a
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf3c1f
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000000bf3ae2
- (long long)hourForRow:(long long)arg1;	// IMP=0x0000000000bf3ad9
- (id)font;	// IMP=0x0000000000bf3ac7
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf3aaf
- (void)resetComponentWidths;	// IMP=0x0000000000bf3a9a
- (double)rowHeight;	// IMP=0x0000000000bf3a8c
- (void)updateDateForNewDateRange;	// IMP=0x0000000000bf3a86
- (id)localizedFormatString;	// IMP=0x0000000000bf3a4e
- (_Bool)isTimeIntervalMode;	// IMP=0x0000000000bf3a46

@end

