//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLocale;

@interface CHTransliterateConfusableCharactersStep
{
    NSArray *_characterTransliterations;	// 8 = 0x8
    const struct _LXLexicon *_staticLexicon;	// 16 = 0x10
    const struct _LXLexicon *_customLexicon;	// 24 = 0x18
    NSLocale *_locale;	// 32 = 0x20
}

+ (id)characterTransliterations;	// IMP=0x00600000001a7b30
- (void).cxx_destruct;	// IMP=0x00000000001a8570
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) const struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) NSArray *characterTransliterations; // @synthesize characterTransliterations=_characterTransliterations;
- (_Bool)isStringInLexicon:(id)arg1;	// IMP=0x00000000001a7aa0
- (_Bool)isMatchingStringInLexicon:(id)arg1 withLexicon:(struct _LXLexicon *)arg2;	// IMP=0x00000000001a78e0
- (unsigned int)wordIDForCandidateString:(id)arg1;	// IMP=0x00000000001a7850
- (id)handleConfusableCharactersInToken:(id)arg1 previousContext:(id)arg2;	// IMP=0x00000000001a6e90
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000001a60e0
- (id)initWithStaticLexicon:(struct _LXLexicon *)arg1 customLexicon:(struct _LXLexicon *)arg2 locale:(id)arg3;	// IMP=0x00000000001a5fe0

@end

