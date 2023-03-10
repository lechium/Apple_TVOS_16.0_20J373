//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// IMP=0x002000000000318e
+ (id)randomString;	// IMP=0x0020000000003124
+ (id)copyStringGUIDForObject:(id)arg1;	// IMP=0x0020000000003112
+ (id)stringGUIDForObject:(id)arg1;	// IMP=0x00200000000030f8
+ (id)stringGUID;	// IMP=0x00200000000030de
+ (id)copyStringGUID;	// IMP=0x0020000000003077
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;	// IMP=0x0010000000004b2f
- (id)stringByRemovingCharactersFromSet:(id)arg1;	// IMP=0x0010000000004a00
- (id)stringWithLTREmbedding;	// IMP=0x00100000000049db
- (id)pathStringForDisplay;	// IMP=0x0010000000004936
- (id)__stringByStrippingAttachmentAndControlCharacters;	// IMP=0x00100000000048c4
- (id)__stringByStrippingControlCharacters;	// IMP=0x0010000000004823
- (id)uniqueSavePath;	// IMP=0x0010000000004729
- (id)stringByRemovingWhitespace;	// IMP=0x00100000000046c3
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;	// IMP=0x0010000000004648
- (id)stringByResolvingAndStandardizingPath;	// IMP=0x0010000000004520
- (_Bool)_appearsToBeHardwareID;	// IMP=0x0010000000004507
- (_Bool)_appearsToBePseudonymID;	// IMP=0x00100000000044ee
- (_Bool)_appearsToBeTemporaryID;	// IMP=0x00100000000044d5
- (_Bool)_appearsToBeBusinessID;	// IMP=0x0010000000004469
- (_Bool)_appearsToBeDSID;	// IMP=0x001000000000440f
- (_Bool)_appearsToBePhoneNumber;	// IMP=0x0010000000004405
- (id)_md5Hash;	// IMP=0x001000000000416b
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;	// IMP=0x001000000000401e
- (_Bool)_appearsToBeEmail;	// IMP=0x0010000000004014
- (id)_IDFromFZIDType:(long long)arg1;	// IMP=0x0010000000003f72
- (id)_URIFromFZIDType:(long long)arg1;	// IMP=0x0010000000003f37
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;	// IMP=0x0010000000003efc
- (long long)_FZBestGuessFZIDType;	// IMP=0x0010000000003e27
- (id)_im_normalizedURIString;	// IMP=0x0010000000003dc8
- (id)_bestGuessURIFromCanicalizedID;	// IMP=0x0010000000003d97
- (id)_URIFromCanonicalizedHardwareID;	// IMP=0x0010000000003d85
- (id)_URIFromCanonicalizedPseudonymID;	// IMP=0x0010000000003d73
- (id)_URIFromCanonicalizedTemporaryID;	// IMP=0x0010000000003d61
- (id)_URIFromCanonicalizedBusinessID;	// IMP=0x0010000000003d4f
- (id)_URIFromCanonicalizedDSID;	// IMP=0x0010000000003d33
- (id)_URIFromCanonicalizedPhoneNumber;	// IMP=0x0010000000003d17
- (id)_URIFromCanonicalizedEmail;	// IMP=0x0010000000003cfb
- (id)_bestGuessURI;	// IMP=0x0010000000003cca
- (id)_URIFromHardwareID;	// IMP=0x0010000000003c71
- (id)_URIFromPseudonymID;	// IMP=0x0010000000003c18
- (id)_URIFromTemporaryID;	// IMP=0x0010000000003bbf
- (id)_URIFromBusinessID;	// IMP=0x0010000000003af5
- (id)_URIFromDSID;	// IMP=0x0010000000003a5e
- (id)_URIFromPhoneNumber;	// IMP=0x00100000000039ff
- (id)_URIFromEmail;	// IMP=0x0010000000003993
- (long long)_FZIDType;	// IMP=0x00100000000037ec
- (id)_FZIDFromPhoneNumber;	// IMP=0x001000000000378d
- (id)_FZIDFromEmail;	// IMP=0x0010000000003768
- (id)_stripFZIDPrefix;	// IMP=0x0010000000003688
- (id)urlFromString;	// IMP=0x0010000000003545
- (id)stringByAddingURLEscapes;	// IMP=0x00100000000034df
- (id)stringByRemovingURLEscapes;	// IMP=0x00100000000034b3
- (id)trimmedString;	// IMP=0x0010000000003487
- (long long)localizedCompareToString:(id)arg1;	// IMP=0x00100000000033ed
- (unsigned int)unsignedIntValue;	// IMP=0x00100000000033a9
- (unsigned int)hexValue;	// IMP=0x00100000000032b7
- (_Bool)isDirectory;	// IMP=0x001000000000324e
- (_Bool)isEqualToIgnoringCase:(id)arg1;	// IMP=0x001000000000322d
- (id)_imInitWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x001000000001153a
@property(readonly, nonatomic) NSString *stripMobileMSuffixIfPresent;
@property(readonly, nonatomic) _Bool hasMobileMeSuffix;
@property(readonly, nonatomic) NSString *mobileMeDomain;
@end

