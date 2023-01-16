//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CCDValidationKeyInfo
{
    unsigned long long _validationType;	// 8 = 0x8
    NSString *_destinationKey;	// 16 = 0x10
    NSArray *_subKeys;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000ed10
@property(retain, nonatomic) NSArray *subKeys; // @synthesize subKeys=_subKeys;
@property(retain, nonatomic) NSString *destinationKey; // @synthesize destinationKey=_destinationKey;
@property(nonatomic) unsigned long long validationType; // @synthesize validationType=_validationType;
- (_Bool)_validateUnstructureddDictionaryInDictionary:(id)arg1;	// IMP=0x001000000000ec04
- (_Bool)_validateDictionaryInDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x001000000000e913
- (_Bool)_validateCredentialTokenInDictionary:(id)arg1;	// IMP=0x001000000000e75b
- (_Bool)_validateStringArrayInDictionary:(id)arg1;	// IMP=0x001000000000e576
- (_Bool)_validateStringInDictionary:(id)arg1;	// IMP=0x001000000000e4df
- (_Bool)_validateNumberInDictionary:(id)arg1;	// IMP=0x001000000000e448
- (_Bool)_validateHttpsURLStringInDictionary:(id)arg1;	// IMP=0x001000000000e33d
- (_Bool)_validateCertificateArrayInDictionary:(id)arg1;	// IMP=0x001000000000e12c
- (id)_certificateDataFromBase64EncodedString:(id)arg1;	// IMP=0x001000000000e0c2
- (_Bool)_validateBooleanInDictionary:(id)arg1;	// IMP=0x001000000000e0b0
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x001000000000db9f
- (id)description;	// IMP=0x001000000000da8e
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x001000000000d73c

@end
