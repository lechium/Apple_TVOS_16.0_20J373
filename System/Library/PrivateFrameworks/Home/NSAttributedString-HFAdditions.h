//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class NSString;

@interface NSAttributedString (HFAdditions)
+ (id)hf_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(_Bool)arg3;	// IMP=0x00100000001adc0c
+ (id)hf_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x00100000001ad505
+ (id)hf_loadFromHTMLWithString:(id)arg1 options:(id)arg2;	// IMP=0x00100000001ad2cc
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;	// IMP=0x00100000001acacc
+ (id)hf_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001ac8c3
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001ac896
+ (id)hf_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001ac7f6
+ (id)hf_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;	// IMP=0x00100000001ac689
- (id)hf_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x00100000001ad212
- (id)hf_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x00100000001ad10d
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00100000001acd2f
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1;	// IMP=0x00100000001accc5
- (id)hf_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x00100000001ac60f
- (id)hf_attributedStringScaledByFactor:(double)arg1;	// IMP=0x00100000001ac5ca
- (double)hf_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x00100000001ac51c
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;	// IMP=0x001000000029ed8b
- (_Bool)prefersDynamicString;	// IMP=0x001000000029ed83
- (id)stringWithAttributes:(id)arg1;	// IMP=0x001000000029ed19
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x001000000029ed07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

