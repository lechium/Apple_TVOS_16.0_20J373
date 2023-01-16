//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewStyle : NSObject
{
    _Bool _doNotClipToBounds;	// 8 = 0x8
    _Bool _shouldJustifyRow;	// 9 = 0x9
    _Bool _darkBackdrop;	// 10 = 0xa
    _Bool _scrollDisabled;	// 11 = 0xb
    _Bool _dragGestureDisabled;	// 12 = 0xc
    _Bool _allowCandidateGridExpanding;	// 13 = 0xd
    _Bool _showsIndex;	// 14 = 0xe
    _Bool _showExtraLineBeforeFirstRow;	// 15 = 0xf
    _Bool _fillGridWithLines;	// 16 = 0x10
    _Bool _dontSelectLastItemByBackwardMoving;	// 17 = 0x11
    _Bool _showOneMoreCandidate;	// 18 = 0x12
    _Bool _disableSwitchingSortingMethodByTabKey;	// 19 = 0x13
    _Bool _skipInlineCandidate;	// 20 = 0x14
    _Bool _hidesPartialCandidates;	// 21 = 0x15
    UIFont *_candidateFont;	// 24 = 0x18
    UIFont *_supplementalLexiconCandidateFont;	// 32 = 0x20
    UIFont *_annotationTextFont;	// 40 = 0x28
    UIFont *_alternativeTextFont;	// 48 = 0x30
    UIFont *_candidateNumberFont;	// 56 = 0x38
    UIFont *_sortControlFont;	// 64 = 0x40
    UIColor *_textColor;	// 72 = 0x48
    UIColor *_highlightedTextColor;	// 80 = 0x50
    UIColor *_alternativeTextColor;	// 88 = 0x58
    UIColor *_highlightedAlternativeTextColor;	// 96 = 0x60
    UIColor *_candidateNumberColor;	// 104 = 0x68
    UIColor *_highlightedCandidateNumberColor;	// 112 = 0x70
    UIColor *_backgroundColor;	// 120 = 0x78
    UIColor *_cellBackgroundColor;	// 128 = 0x80
    UIColor *_arrowButtonBackgroundColor;	// 136 = 0x88
    UIColor *_gridBackgroundColor;	// 144 = 0x90
    UIColor *_highlightedBackgroundColor;	// 152 = 0x98
    UIColor *_highlightedRowBackgroundColor;	// 160 = 0xa0
    UIColor *_groupHeaderBackgroundColor;	// 168 = 0xa8
    UIColor *_transliterationCandidateBackgroundColor;	// 176 = 0xb0
    UIColor *_lineColor;	// 184 = 0xb8
    UIColor *_sortControlColor;	// 192 = 0xc0
    UIColor *_sortControlBackgroundColor;	// 200 = 0xc8
    NSString *_arrowButtonImageName;	// 208 = 0xd0
    UIImage *_cellSeparatorImage;	// 216 = 0xd8
    UIImage *_slottedCellSeparatorImage;	// 224 = 0xe0
    UIImage *_leftEdgeSeparatorImage;	// 232 = 0xe8
    UIImage *_rightEdgeSeparatorImage;	// 240 = 0xf0
    UIImage *_arrowButtonSeparatorImage;	// 248 = 0xf8
    UIImage *_leftEdgeMaskImage;	// 256 = 0x100
    UIImage *_rightEdgeMaskImage;	// 264 = 0x108
    UIImage *_cellBackgroundImage;	// 272 = 0x110
    UIImage *_highlightedCellBackgroundImage;	// 280 = 0x118
    UIImage *_transliterationCandidateBackgroundImage;	// 288 = 0x120
    double _rowHeight;	// 296 = 0x128
    double _arrowButtonHeight;	// 304 = 0x130
    double _cornerRadius;	// 312 = 0x138
    double _cellCornerRadius;	// 320 = 0x140
    unsigned long long _maskedCorners;	// 328 = 0x148
    unsigned long long _gridMaskedCorners;	// 336 = 0x150
    double _foregroundOpacity;	// 344 = 0x158
    double _backgroundOpacity;	// 352 = 0x160
    long long _layoutOrientation;	// 360 = 0x168
    unsigned long long _columnsCount;	// 368 = 0x170
    unsigned long long _maxNumberOfProactiveCells;	// 376 = 0x178
    double _minimumCellPadding;	// 384 = 0x180
    double _minimumCellWidth;	// 392 = 0x188
    double _minimumInterItemSpacing;	// 400 = 0x190
    double _maximumIconWidth;	// 408 = 0x198
    double _singleSlottedCellMargin;	// 416 = 0x1a0
    long long _cellTextAlignment;	// 424 = 0x1a8
    long long _alternativeTextAlignment;	// 432 = 0x1b0
    long long _lineBreakMode;	// 440 = 0x1b8
    long long _minimumNumberOfCandidates;	// 448 = 0x1c0
    struct CGPoint _gridLineOffset;	// 456 = 0x1c8
    struct UIEdgeInsets _extraCellPadding;	// 472 = 0x1d8
    struct UIEdgeInsets _arrowButtonPadding;	// 504 = 0x1f8
    struct UIEdgeInsets _gridPadding;	// 536 = 0x218
    struct UIEdgeInsets _gridLinePadding;	// 568 = 0x238
    struct UIEdgeInsets _sortControlPadding;	// 600 = 0x258
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x001000000081d3c6
+ (id)tvGridStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x001000000081cfc8
+ (id)tvLinearStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x001000000081cbfd
+ (id)disambiguationStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x001000000081cbcb
+ (id)styleForDarkKeyboard:(_Bool)arg1;	// IMP=0x001000000081cb99
+ (id)darkKeyboardStyleForDisambiguation;	// IMP=0x001000000081c91a
+ (id)lightKeyboardStyleForDisambiguation;	// IMP=0x001000000081c6e9
+ (id)darkKeyboardStyle;	// IMP=0x001000000081c2b5
+ (id)lightKeyboardStyle;	// IMP=0x001000000081be81
- (void).cxx_destruct;	// IMP=0x000000000081dd04
@property(nonatomic) long long minimumNumberOfCandidates; // @synthesize minimumNumberOfCandidates=_minimumNumberOfCandidates;
@property(nonatomic) _Bool hidesPartialCandidates; // @synthesize hidesPartialCandidates=_hidesPartialCandidates;
@property(nonatomic) _Bool skipInlineCandidate; // @synthesize skipInlineCandidate=_skipInlineCandidate;
@property(nonatomic) _Bool disableSwitchingSortingMethodByTabKey; // @synthesize disableSwitchingSortingMethodByTabKey=_disableSwitchingSortingMethodByTabKey;
@property(nonatomic) _Bool showOneMoreCandidate; // @synthesize showOneMoreCandidate=_showOneMoreCandidate;
@property(nonatomic) _Bool dontSelectLastItemByBackwardMoving; // @synthesize dontSelectLastItemByBackwardMoving=_dontSelectLastItemByBackwardMoving;
@property(nonatomic) _Bool fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property(nonatomic) _Bool showExtraLineBeforeFirstRow; // @synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow;
@property(nonatomic) _Bool showsIndex; // @synthesize showsIndex=_showsIndex;
@property(nonatomic) _Bool allowCandidateGridExpanding; // @synthesize allowCandidateGridExpanding=_allowCandidateGridExpanding;
@property(nonatomic) _Bool dragGestureDisabled; // @synthesize dragGestureDisabled=_dragGestureDisabled;
@property(nonatomic) _Bool scrollDisabled; // @synthesize scrollDisabled=_scrollDisabled;
@property(nonatomic) _Bool darkBackdrop; // @synthesize darkBackdrop=_darkBackdrop;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long alternativeTextAlignment; // @synthesize alternativeTextAlignment=_alternativeTextAlignment;
@property(nonatomic) long long cellTextAlignment; // @synthesize cellTextAlignment=_cellTextAlignment;
@property(nonatomic) struct UIEdgeInsets sortControlPadding; // @synthesize sortControlPadding=_sortControlPadding;
@property(nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property(nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property(nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) struct UIEdgeInsets arrowButtonPadding; // @synthesize arrowButtonPadding=_arrowButtonPadding;
@property(nonatomic) struct UIEdgeInsets extraCellPadding; // @synthesize extraCellPadding=_extraCellPadding;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(nonatomic) _Bool shouldJustifyRow; // @synthesize shouldJustifyRow=_shouldJustifyRow;
@property(nonatomic) double maximumIconWidth; // @synthesize maximumIconWidth=_maximumIconWidth;
@property(nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property(nonatomic) double minimumCellWidth; // @synthesize minimumCellWidth=_minimumCellWidth;
@property(nonatomic) double minimumCellPadding; // @synthesize minimumCellPadding=_minimumCellPadding;
@property(nonatomic) unsigned long long maxNumberOfProactiveCells; // @synthesize maxNumberOfProactiveCells=_maxNumberOfProactiveCells;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) _Bool doNotClipToBounds; // @synthesize doNotClipToBounds=_doNotClipToBounds;
@property(nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(nonatomic) double foregroundOpacity; // @synthesize foregroundOpacity=_foregroundOpacity;
@property(nonatomic) unsigned long long gridMaskedCorners; // @synthesize gridMaskedCorners=_gridMaskedCorners;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) double cellCornerRadius; // @synthesize cellCornerRadius=_cellCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double arrowButtonHeight; // @synthesize arrowButtonHeight=_arrowButtonHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) UIImage *transliterationCandidateBackgroundImage; // @synthesize transliterationCandidateBackgroundImage=_transliterationCandidateBackgroundImage;
@property(retain, nonatomic) UIImage *highlightedCellBackgroundImage; // @synthesize highlightedCellBackgroundImage=_highlightedCellBackgroundImage;
@property(retain, nonatomic) UIImage *cellBackgroundImage; // @synthesize cellBackgroundImage=_cellBackgroundImage;
@property(retain, nonatomic) UIImage *rightEdgeMaskImage; // @synthesize rightEdgeMaskImage=_rightEdgeMaskImage;
@property(retain, nonatomic) UIImage *leftEdgeMaskImage; // @synthesize leftEdgeMaskImage=_leftEdgeMaskImage;
@property(retain, nonatomic) UIImage *arrowButtonSeparatorImage; // @synthesize arrowButtonSeparatorImage=_arrowButtonSeparatorImage;
@property(retain, nonatomic) UIImage *rightEdgeSeparatorImage; // @synthesize rightEdgeSeparatorImage=_rightEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *leftEdgeSeparatorImage; // @synthesize leftEdgeSeparatorImage=_leftEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *slottedCellSeparatorImage; // @synthesize slottedCellSeparatorImage=_slottedCellSeparatorImage;
@property(retain, nonatomic) UIImage *cellSeparatorImage; // @synthesize cellSeparatorImage=_cellSeparatorImage;
@property(copy, nonatomic) NSString *arrowButtonImageName; // @synthesize arrowButtonImageName=_arrowButtonImageName;
@property(retain, nonatomic) UIColor *sortControlBackgroundColor; // @synthesize sortControlBackgroundColor=_sortControlBackgroundColor;
@property(retain, nonatomic) UIColor *sortControlColor; // @synthesize sortControlColor=_sortControlColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *transliterationCandidateBackgroundColor; // @synthesize transliterationCandidateBackgroundColor=_transliterationCandidateBackgroundColor;
@property(retain, nonatomic) UIColor *groupHeaderBackgroundColor; // @synthesize groupHeaderBackgroundColor=_groupHeaderBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedRowBackgroundColor; // @synthesize highlightedRowBackgroundColor=_highlightedRowBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property(retain, nonatomic) UIColor *arrowButtonBackgroundColor; // @synthesize arrowButtonBackgroundColor=_arrowButtonBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *highlightedCandidateNumberColor; // @synthesize highlightedCandidateNumberColor=_highlightedCandidateNumberColor;
@property(retain, nonatomic) UIColor *candidateNumberColor; // @synthesize candidateNumberColor=_candidateNumberColor;
@property(retain, nonatomic) UIColor *highlightedAlternativeTextColor; // @synthesize highlightedAlternativeTextColor=_highlightedAlternativeTextColor;
@property(retain, nonatomic) UIColor *alternativeTextColor; // @synthesize alternativeTextColor=_alternativeTextColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *sortControlFont; // @synthesize sortControlFont=_sortControlFont;
@property(retain, nonatomic) UIFont *candidateNumberFont; // @synthesize candidateNumberFont=_candidateNumberFont;
@property(retain, nonatomic) UIFont *alternativeTextFont; // @synthesize alternativeTextFont=_alternativeTextFont;
@property(retain, nonatomic) UIFont *annotationTextFont; // @synthesize annotationTextFont=_annotationTextFont;
@property(retain, nonatomic) UIFont *supplementalLexiconCandidateFont; // @synthesize supplementalLexiconCandidateFont=_supplementalLexiconCandidateFont;
@property(retain, nonatomic) UIFont *candidateFont; // @synthesize candidateFont=_candidateFont;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000081b68e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000081b291

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

