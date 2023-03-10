//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor, UITapGestureRecognizer, UIVisualEffectView, VUILabel, VUITextLayout, VUITextView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface FocusableTextView
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIVisualEffectView *_vibrantEffectView;	// 16 = 0x10
    VUITextView *_auxilliaryTextView;	// 24 = 0x18
    _Bool _textTruncating;	// 32 = 0x20
    _Bool _moreLabelOnNewLine;	// 33 = 0x21
    _Bool _trackHorizontal;	// 34 = 0x22
    _Bool _alwaysShowBackground;	// 35 = 0x23
    _Bool _alwaysFocusable;	// 36 = 0x24
    _Bool _disableFocus;	// 37 = 0x25
    _Bool _needsTextSizeComputation;	// 38 = 0x26
    VUILabel *_computationLabel;	// 40 = 0x28
    UIColor *_descriptionTextColor;	// 48 = 0x30
    long long _descriptionTextAlignment;	// 56 = 0x38
    UIColor *_moreLabelTextColor;	// 64 = 0x40
    CDUnknownBlockType _selectionHandler;	// 72 = 0x48
    double _moreHighlightPadding;	// 80 = 0x50
    UIColor *_descriptionTextHighlightColor;	// 88 = 0x58
    UIColor *_highlightBackgroundColor;	// 96 = 0x60
    double _focusSizeIncrease;	// 104 = 0x68
    CDUnknownBlockType _playHandler;	// 112 = 0x70
    VUITextView *_descriptionTextView;	// 120 = 0x78
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;	// 128 = 0x80
    VUITextLayout *_textLayout;	// 136 = 0x88
    VUILabel *_moreLabel;	// 144 = 0x90
    _UIFloatingContentView *_floatingView;	// 152 = 0x98
    UIVisualEffectView *_backgroundView;	// 160 = 0xa0
    UITapGestureRecognizer *_selectRecognizer;	// 168 = 0xa8
    UITapGestureRecognizer *_playRecognizer;	// 176 = 0xb0
    NSAttributedString *_previousAttributedString;	// 184 = 0xb8
    struct CGSize _cachedSizeThatFits;	// 192 = 0xc0
    struct CGSize _previousTargetSize;	// 208 = 0xd0
    struct UIEdgeInsets _padding;	// 224 = 0xe0
}

+ (double)cornerRadius;	// IMP=0x00100000001dfeb3
+ (id)textViewWithAttributedString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;	// IMP=0x00100000001de3a2
- (void).cxx_destruct;	// IMP=0x00000000001e1819
@property(copy, nonatomic) NSAttributedString *previousAttributedString; // @synthesize previousAttributedString=_previousAttributedString;
@property(nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;
@property(nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) VUILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) VUITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(nonatomic) _Bool disableFocus; // @synthesize disableFocus=_disableFocus;
@property(nonatomic, getter=isAlwaysFocusable) _Bool alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) _Bool alwaysShowBackground; // @synthesize alwaysShowBackground=_alwaysShowBackground;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
- (void)_selectButtonAction:(id)arg1;	// IMP=0x00000000001e1446
- (void)_playButtonAction:(id)arg1;	// IMP=0x00000000001e13cd
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000001e1389
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001e1302
- (void)_updateTextColor;	// IMP=0x00000000001e1222
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001e1136
- (struct CGRect)boundingRectForAttributedString:(id)arg1 withWidth:(double)arg2 lines:(unsigned long long)arg3;	// IMP=0x00000000001e0e7d
- (struct CGRect)_moreLabelFrame;	// IMP=0x00000000001e09e4
- (struct CGRect)_moreLabelExclusionPathFrame;	// IMP=0x00000000001e08df
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x00000000001e0773
- (void)_setNeedsTextSizeComputation;	// IMP=0x00000000001e0762
- (void)_clearCachedValues;	// IMP=0x00000000001e0721
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001e059e
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000001e0581
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000001e0564
- (double)vui_baselineOffsetFromBottom;	// IMP=0x00000000001e0547
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000001e0517
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001dfe64
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001dfe0d
- (struct CGSize)computeSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001dfc0c
- (_Bool)canBecomeFocused;	// IMP=0x00000000001dfb6a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001dfab5
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001dfa67
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001df9cf
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001df98d
- (void)layoutSubviews_tvOS;	// IMP=0x00000000001df46d
- (void)setupViews_tvOS;	// IMP=0x00000000001def88
- (id)makeTextView;	// IMP=0x00000000001dee39
- (void)_updateTextColorsIfNeeded;	// IMP=0x00000000001dedf7
- (void)_updateTextColorsForFocusState:(_Bool)arg1;	// IMP=0x00000000001deb26
- (void)_updateBackgroundColors;	// IMP=0x00000000001de9a6
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001de889
- (id)accessibilityLabel;	// IMP=0x00000000001de80b
- (_Bool)isAccessibilityElement;	// IMP=0x00000000001de803
- (id)initWithTextLayout:(id)arg1;	// IMP=0x00000000001de58d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

