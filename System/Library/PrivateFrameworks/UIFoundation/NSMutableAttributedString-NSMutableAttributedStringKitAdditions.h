//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;	// IMP=0x00900000000890c0
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x0090000000088cce
- (void)convertBidiControlCharactersToWritingDirection;	// IMP=0x0090000000088c50
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00900000000888f3
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000888de
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000888c9
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000888b6
- (_Bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000888a0
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x009000000008888a
- (void)unscriptRange:(struct _NSRange)arg1;	// IMP=0x0090000000088868
- (void)subscriptRange:(struct _NSRange)arg1;	// IMP=0x009000000008883f
- (void)superscriptRange:(struct _NSRange)arg1;	// IMP=0x0090000000088818
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x009000000008869d
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x009000000008852f
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00900000000883c1
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;	// IMP=0x0090000000088251
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0090000000088137
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;	// IMP=0x0090000000087e9a
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;	// IMP=0x0090000000087c35
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000858ba
- (_Bool)_shouldSetOriginalFontAttribute;	// IMP=0x00900000000858a8
- (void)fixAttributesInRange:(struct _NSRange)arg1;	// IMP=0x009000000008578f
- (void)_setAttributeFixingInProgress:(_Bool)arg1;	// IMP=0x0090000000085789
- (_Bool)_attributeFixingInProgress;	// IMP=0x0090000000085781
@end

