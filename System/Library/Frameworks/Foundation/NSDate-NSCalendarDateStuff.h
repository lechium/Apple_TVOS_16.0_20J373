//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;	// IMP=0x005000000045485d
+ (id)dateWithNaturalLanguageString:(id)arg1;	// IMP=0x0050000000454846
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;	// IMP=0x00500000004547cf
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0050000000472071
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;	// IMP=0x0010000000452501
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x001000000045249c
- (Class)classForCoder;	// IMP=0x0010000000472060
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000471f85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000471ec1
- (_Bool)_web_isToday;	// IMP=0x0010000000478c98
- (long long)_web_compareDay:(id)arg1;	// IMP=0x0010000000478b75
- (id)_web_RFC1123DateString;	// IMP=0x00100000004789e3
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000005f581a
@end

