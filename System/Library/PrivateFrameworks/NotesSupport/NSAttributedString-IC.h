//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IC)
+ (id)ic_emptyAttributedString;	// IMP=0x002000000001553c
- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x00100000000152c5
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0010000000015244
- (void)ic_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015079
- (void)ic_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000014e8d
- (void)ic_enumerateAttributesInClampedRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014c44
- (id)ic_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x0010000000014baa
- (struct _NSRange)ic_enclosingRangeContainingCharactersInSet:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x0010000000014a3f
- (struct _NSRange)ic_rangeByTrimmingCharactersInSet:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0010000000014893
- (id)ic_componentRangesSeparatedByPredicate:(CDUnknownBlockType)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00100000000146d6
@property(readonly, nonatomic) struct _NSRange ic_range;
@end
