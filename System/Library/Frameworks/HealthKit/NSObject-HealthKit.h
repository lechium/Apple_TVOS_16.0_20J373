//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (HealthKit)
- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;	// IMP=0x007000000012d0e7
- (id)hk_classNameWithTag:(id)arg1;	// IMP=0x007000000012d05e
- (_Bool)hk_expectMissingKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cfd0
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cf67
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cefe
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012ce95
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012ce2c
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000012cda5
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cd1c
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cc93
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cc0a
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000012cb81
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000012caf8
- (_Bool)hk_hasValueForKeyPath:(id)arg1;	// IMP=0x007000000012cac5
@end

