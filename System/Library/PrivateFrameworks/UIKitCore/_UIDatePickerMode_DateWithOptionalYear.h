//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear
{
}

+ (long long)datePickerMode;	// IMP=0x0080000000bf45be
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;	// IMP=0x0000000000bf49fd
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000bf498e
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(_Bool)arg2;	// IMP=0x0000000000bf487d
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x0000000000bf471d
- (long long)yearForRow:(long long)arg1;	// IMP=0x0000000000bf4699
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000000bf4611
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000bf45c9

@end

