//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTextEncapsulation, UIColor, _UILabelContent;

__attribute__((visibility("hidden")))
@interface _UILabelSynthesizedContent : NSObject
{
    _UILabelContent *_content;	// 8 = 0x8
    UIColor *_overrideTextColor;	// 16 = 0x10
    long long _semanticContentAttribute;	// 24 = 0x18
    NSTextEncapsulation *_textEncapsulation;	// 32 = 0x20
    struct {
        unsigned int eliminateShadows:1;
        unsigned int overallWritingDirectionFollowsLayoutDirection:1;
        unsigned int disableLinkHypenation:1;
        unsigned int hasExplicitBaselineOffset:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001232398
@property(readonly, nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute=_semanticContentAttribute;
@property(readonly, nonatomic) UIColor *overrideTextColor; // @synthesize overrideTextColor=_overrideTextColor;
@property(readonly, nonatomic) _UILabelContent *content; // @synthesize content=_content;
- (id)description;	// IMP=0x00000000012321cd
- (void)_isolateStringWritingDirectionInAttributedString:(id)arg1;	// IMP=0x0000000001231b0f
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)arg1;	// IMP=0x0000000001231941
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000123178e
- (unsigned long long)hash;	// IMP=0x000000000123171c
- (id)mutableCopy;	// IMP=0x000000000123164e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000123163c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000123156e
- (id)_synthesizedAttributedString;	// IMP=0x00000000012310c1
- (id)synthesizedAttributedString;	// IMP=0x0000000001230fc1
- (id)synthesizedAttributes;	// IMP=0x0000000001230dcd
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) NSTextEncapsulation *textEncapsulation;
@property(readonly, nonatomic) _Bool hasExplicitBaselineOffset;
- (_Bool)reverseNaturalAlignment;	// IMP=0x0000000001230bbd
@property(readonly, nonatomic) _Bool disableLinkHypenation;
@property(readonly, nonatomic) _Bool overallWritingDirectionFollowsLayoutDirection;
@property(readonly, nonatomic) _Bool eliminateShadows;

@end

