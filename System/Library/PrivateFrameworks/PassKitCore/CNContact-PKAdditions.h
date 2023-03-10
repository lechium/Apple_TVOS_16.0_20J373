//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@interface CNContact (PKAdditions)
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;	// IMP=0x002000000000dd45
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;	// IMP=0x002000000000dd2c
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;	// IMP=0x002000000000b582
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;	// IMP=0x002000000000b450
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;	// IMP=0x002000000000b28a
+ (id)contactWithPkDictionary:(id)arg1;	// IMP=0x002000000000a7a0
+ (id)pkPassbookRequiredKeys;	// IMP=0x002000000000a6d4
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;	// IMP=0x001000000000d5be
- (id)pkDeconstructContactUsingKey:(id)arg1;	// IMP=0x001000000000d343
- (id)pk_displayName;	// IMP=0x001000000000d2b1
- (id)pkContactWithCleanedUpCountryCode;	// IMP=0x001000000000d03f
- (id)contactWithCleanedUpDistrict;	// IMP=0x001000000000cf0a
- (id)sanitizedContact;	// IMP=0x001000000000c947
- (id)nameComponents;	// IMP=0x001000000000c580
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x001000000000c475
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x001000000000c3a2
- (id)pkFullAndPhoneticName;	// IMP=0x001000000000c260
- (id)pkPhoneticName;	// IMP=0x001000000000c1fc
- (id)pkFullName;	// IMP=0x001000000000c198
- (id)pkFullyQualifiedName;	// IMP=0x001000000000c134
@property(nonatomic) _Bool recentFromContactInformation;
- (_Bool)isSubsetOfMeCard;	// IMP=0x001000000000bb2d
@property(nonatomic) unsigned long long contactSource;
- (id)recentContact;	// IMP=0x001000000000ba53
- (void)setRecentContact:(id)arg1;	// IMP=0x001000000000ba3d
- (id)pkSingleLineFormattedContactAddressIncludingCountryName:(_Bool)arg1;	// IMP=0x001000000000b92f
- (id)pkSingleLineFormattedContactAddress;	// IMP=0x001000000000b918
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1 showName:(_Bool)arg2;	// IMP=0x001000000000b6c1
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1;	// IMP=0x001000000000b6aa
- (id)pkFormattedContactAddressWithoutName;	// IMP=0x001000000000b694
- (id)pkFormattedContactAddress;	// IMP=0x001000000000b680
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;	// IMP=0x001000000000b570
- (id)pkDictionaryForProperty:(id)arg1;	// IMP=0x001000000000acb2
@end

