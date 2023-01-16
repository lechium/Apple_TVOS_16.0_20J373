//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MCUtilities)
+ (id)MCShortenedDictionary:(id)arg1;	// IMP=0x0010000000012a97
+ (id)MCShortenedArray:(id)arg1;	// IMP=0x00100000000128b5
+ (id)MCShortenedData:(id)arg1;	// IMP=0x00100000000126c3
+ (id)MCShortenedObject:(id)arg1;	// IMP=0x0010000000012603
+ (id)MCDictionaryFromFile:(id)arg1;	// IMP=0x00100000000119f9
- (id)MCDictionaryWithLeafValuesSetToValue:(id)arg1;	// IMP=0x00200000000143ee
- (id)MCInsertedKeysFromDictionary:(id)arg1 withNewLeafValue:(id)arg2;	// IMP=0x0010000000014045
- (id)MCRemovedKeysFromDictionary:(id)arg1;	// IMP=0x0010000000013d10
- (id);	// IMP=0x0010000000013a20
- (id)MCDictionaryAdditiveDeltaToCreateDictionary:(id)arg1;	// IMP=0x0010000000013742
- (_Bool)MCValidateUnionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x001000000001362d
- (_Bool)MCValidateIntersectionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x0010000000013518
- (_Bool)MCValidateValueRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x001000000001335f
- (_Bool)MCValidateBoolRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;	// IMP=0x00100000000131a6
- (_Bool)MCValidateRestrictions;	// IMP=0x0010000000012c0f
- (id)MCShortenedPlistDescription;	// IMP=0x00100000000125a5
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000001241b
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;	// IMP=0x001000000001223c
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;	// IMP=0x00100000000120f6
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;	// IMP=0x0010000000011f34
- (id)MCDeepCopy;	// IMP=0x0010000000011f20
- (id)MCDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000011f0e
- (id)MCMutableDeepCopy;	// IMP=0x0010000000011efa
- (id)MCMutableDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000011b20
- (_Bool)MCWriteToBinaryFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000011834
- (_Bool)MCWriteToBinaryFile:(id)arg1;	// IMP=0x00100000000117b6
@end
