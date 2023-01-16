//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HealthKit)
+ (id)hk_randomStringOfLength:(long long)arg1;	// IMP=0x005000000019e5e7
- (id)hk_MD5HashAsUUID;	// IMP=0x001000000019e8f1
- (id)hk_MD5Hash;	// IMP=0x001000000019e8db
- (id)hk_SHA512Hash;	// IMP=0x001000000019e8c5
- (id)hk_SHA384Hash;	// IMP=0x001000000019e8af
- (id)hk_SHA256Hash;	// IMP=0x001000000019e899
- (id)hk_SHA224Hash;	// IMP=0x001000000019e714
- (_Bool)hk_isBetweenLowerBuildVersion:(id)arg1 upperBuildVersion:(id)arg2;	// IMP=0x001000000019e4fa
- (long long)hk_compareBuildVersionWithString:(id)arg1;	// IMP=0x001000000001e519
- (id)hk_stringIndentedBy:(unsigned long long)arg1 prefix:(id)arg2;	// IMP=0x001000000019e412
- (id)hk_stringIndentedBy:(unsigned long long)arg1;	// IMP=0x001000000019e3fe
- (_Bool)hk_isBase64;	// IMP=0x001000000019e2fb
- (id)hk_localizedFirstWordCapitalizedString;	// IMP=0x001000000019e295
- (id)hk_firstWordCapitalizedStringWithLocale:(id)arg1;	// IMP=0x001000000019e06f
- (_Bool)hk_isCaseInsensitiveSubstringInString:(id)arg1;	// IMP=0x001000000019e047
- (id)hk_stringByAppendingKeyPathComponent:(id)arg1;	// IMP=0x001000000019df3a
- (id)hk_stringByUnescapingJSONCharactersForDisplay;	// IMP=0x001000000019dec6
- (id)hk_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000019dd4a
- (id)hk_trimWhitespaceAndNewlines;	// IMP=0x001000000019dce4
- (id)hk_stripLeadingTrailingWhitespace;	// IMP=0x001000000019dc7e
- (_Bool)hk_isValidPurposeString;	// IMP=0x001000000019dbd9
- (id)hk_copyNonEmptyString;	// IMP=0x00100000000109be
- (_Bool)hk_hasMetadataKeyPathPrefix;	// IMP=0x001000000023ee77
- (_Bool)hk_hasDevicePropertyKeyPathPrefix;	// IMP=0x001000000023ee5e
@end
