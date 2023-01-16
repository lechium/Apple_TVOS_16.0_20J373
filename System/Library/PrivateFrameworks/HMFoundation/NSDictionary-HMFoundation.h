//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSString;

@interface NSDictionary (HMFoundation)
+ (id)shortDescription;	// IMP=0x0010000000017767
- (id)hmf_fileHandleForKey:(id)arg1;	// IMP=0x00100000000188ec
- (id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x00100000000186fd
- (id)hmf_valueForKey:(id)arg1;	// IMP=0x00100000000186a6
- (id)hmf_UUIDForKey:(id)arg1;	// IMP=0x001000000001858a
- (id)hmf_URLForKey:(id)arg1;	// IMP=0x0010000000018533
- (id)hmf_timeZoneForKey:(id)arg1;	// IMP=0x00100000000184dc
- (id)hmf_stringForKey:(id)arg1;	// IMP=0x0010000000018485
- (id)hmf_mutableSetForKey:(id)arg1;	// IMP=0x001000000001842e
- (id)hmf_setForKey:(id)arg1;	// IMP=0x00100000000183d7
- (id)hmf_numberForKey:(id)arg1;	// IMP=0x0010000000018380
- (long long)hmf_integerForKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001828b
- (id)hmf_nullForKey:(id)arg1;	// IMP=0x0010000000018234
- (id)hmf_errorForKey:(id)arg1;	// IMP=0x00100000000181dd
- (id)hmf_mutableDictionaryForKey:(id)arg1;	// IMP=0x0010000000018186
- (id)hmf_dictionaryForKey:(id)arg1;	// IMP=0x001000000001812f
- (id)hmf_dateComponentsForKey:(id)arg1;	// IMP=0x00100000000180d8
- (id)hmf_dateForKey:(id)arg1;	// IMP=0x0010000000018081
- (id)hmf_dataForKey:(id)arg1;	// IMP=0x001000000001802a
- (id)hmf_calendarForKey:(id)arg1;	// IMP=0x0010000000017fd3
- (_Bool)hmf_boolForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017ee0
- (_Bool)hmf_boolForKey:(id)arg1 isPresent:(_Bool *)arg2;	// IMP=0x0010000000017e84
- (_Bool)hmf_boolForKey:(id)arg1;	// IMP=0x0010000000017e70
- (id)hmf_base64EncodedDataForKey:(id)arg1;	// IMP=0x0010000000017e0b
- (id)hmf_mutableArrayForKey:(id)arg1;	// IMP=0x0010000000017db4
- (id)hmf_arrayForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0010000000017af6
- (id)hmf_arrayForKey:(id)arg1;	// IMP=0x0010000000017a9f
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;	// IMP=0x0010000000019486
- (id)urlForKey:(id)arg1;	// IMP=0x0010000000019474
- (id)nsValueForKey:(id)arg1;	// IMP=0x0010000000019462
- (id)nullForKey:(id)arg1;	// IMP=0x0010000000019450
- (id)predicateFromDataForKey:(id)arg1;	// IMP=0x00100000000192f2
- (id)calendarFromDataForKey:(id)arg1;	// IMP=0x00100000000192a2
- (id)calendarForKey:(id)arg1;	// IMP=0x0010000000019290
- (id)errorFromDataForKey:(id)arg1;	// IMP=0x00100000000191ab
- (id)errorForKey:(id)arg1;	// IMP=0x0010000000019199
- (id)dateComponentsFromDataForKey:(id)arg1;	// IMP=0x0010000000019149
- (id)dateComponentsForKey:(id)arg1;	// IMP=0x00100000000190d4
- (id)timeZoneFromDataForKey:(id)arg1;	// IMP=0x0010000000019084
- (id)timeZoneForKey:(id)arg1;	// IMP=0x0010000000019072
- (id)dateForKey:(id)arg1;	// IMP=0x0010000000019060
- (id)base64EncodedDataForKey:(id)arg1;	// IMP=0x001000000001904e
- (id)dataForKey:(id)arg1;	// IMP=0x001000000001903c
- (id)setForKey:(id)arg1;	// IMP=0x001000000001902a
- (id)mutableSetForKey:(id)arg1;	// IMP=0x0010000000019018
- (id)arrayForKey:(id)arg1;	// IMP=0x0010000000019006
- (id)mutableArrayForKey:(id)arg1;	// IMP=0x0010000000018ff4
- (id)mutableDictionaryForKey:(id)arg1;	// IMP=0x0010000000018fe2
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0010000000018fd0
- (_Bool)boolForKey:(id)arg1 keyPresent:(_Bool *)arg2;	// IMP=0x0010000000018fbe
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0010000000018fac
- (id)numberForKey:(id)arg1;	// IMP=0x0010000000018f9a
- (id)stringForKey:(id)arg1;	// IMP=0x0010000000018f88
- (id)uuidFromStringForKey:(id)arg1;	// IMP=0x0010000000018f28
- (id)uuidForKey:(id)arg1;	// IMP=0x0010000000018f16
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x0010000000018efa
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x0010000000018943

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end
