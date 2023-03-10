//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (PKAdditions)
+ (id)pk_recordWithSystemFieldsData:(id)arg1;	// IMP=0x0060000000201de4
- (id)pk_systemFieldsData;	// IMP=0x0010000000201e8f
- (_Bool)pk_isRemoteAsset;	// IMP=0x0010000000201d4f
- (_Bool)pk_isPassCatalog;	// IMP=0x0010000000201cba
- (_Bool)pk_isPass;	// IMP=0x0010000000201c25
- (id)_dictionaryFromStringValue:(id)arg1;	// IMP=0x0010000000201adc
- (id)_arrayFromStringValue:(id)arg1;	// IMP=0x0010000000201993
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x001000000020174b
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x0010000000201625
- (id)pk_share;	// IMP=0x00100000002015e6
- (id)pk_participantWithLookupInfo:(id)arg1;	// IMP=0x001000000020139c
- (id)pk_participantWithPhoneNumber:(id)arg1;	// IMP=0x0010000000201312
- (id)pk_participantWithEmailAddress:(id)arg1;	// IMP=0x0010000000201288
- (id)pk_participantWithRecipientHandle:(id)arg1;	// IMP=0x001000000020120c
- (id)pk_copyRecordForNewRecordZone:(id)arg1;	// IMP=0x0010000000200c9b
- (unsigned long long)pk_hash;	// IMP=0x0010000000200754
- (id)description;	// IMP=0x00100000002006f1
- (id)pk_description;	// IMP=0x00100000002000e0
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000001fff9d
- (id)pk_referenceForKey:(id)arg1;	// IMP=0x00100000001fff39
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;	// IMP=0x00100000001ffeec
- (unsigned long long)pk_uint64ForKey:(id)arg1;	// IMP=0x00100000001ffe9f
- (int)pk_intForKey:(id)arg1;	// IMP=0x00100000001ffe52
- (long long)pk_integerForKey:(id)arg1;	// IMP=0x00100000001ffe05
- (_Bool)pk_boolForKey:(id)arg1;	// IMP=0x00100000001ffdb8
- (id)pk_arrayForKey:(id)arg1;	// IMP=0x00100000001ffc47
- (id)pk_dictionaryForKey:(id)arg1;	// IMP=0x00100000001ffbe8
- (id)pk_urlForKey:(id)arg1;	// IMP=0x00100000001ffb88
- (id)pk_decimalNumberForKey:(id)arg1;	// IMP=0x00100000001ffb28
- (id)pk_locationForKey:(id)arg1;	// IMP=0x00100000001ffac4
- (id)pk_dataForKey:(id)arg1;	// IMP=0x00100000001ffa60
- (id)pk_dateForKey:(id)arg1;	// IMP=0x00100000001ff9fc
- (id)pk_numberForKey:(id)arg1;	// IMP=0x00100000001ff998
- (id)pk_stringForKey:(id)arg1;	// IMP=0x00100000001ff934
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000001ff7cc
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;	// IMP=0x00100000001ff77f
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;	// IMP=0x00100000001ff732
- (int)pk_encryptedIntForKey:(id)arg1;	// IMP=0x00100000001ff6e5
- (long long)pk_encryptedIntegerForKey:(id)arg1;	// IMP=0x00100000001ff698
- (_Bool)pk_encryptedBoolForKey:(id)arg1;	// IMP=0x00100000001ff64b
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001ff29f
- (id)pk_encryptedDictionaryForKey:(id)arg1;	// IMP=0x00100000001ff240
- (id)pk_encryptedUrlForKey:(id)arg1;	// IMP=0x00100000001ff1e0
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;	// IMP=0x00100000001ff180
- (id)pk_encryptedLocationForKey:(id)arg1;	// IMP=0x00100000001ff11c
- (id)pk_encryptedDataForKey:(id)arg1;	// IMP=0x00100000001ff0b8
- (id)pk_encryptedDateForKey:(id)arg1;	// IMP=0x00100000001ff054
- (id)pk_encryptedNumberForKey:(id)arg1;	// IMP=0x00100000001feff0
- (id)pk_encryptedUUIDForKey:(id)arg1;	// IMP=0x00100000001fef8c
- (id)pk_encryptedStringForKey:(id)arg1;	// IMP=0x00100000001fef28
@end

