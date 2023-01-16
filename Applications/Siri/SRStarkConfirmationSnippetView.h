//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSArray, NSString, SRStarkConfirmationButton, UIFocusContainerGuide, UILabel;
@protocol UIFocusItem;

@interface SRStarkConfirmationSnippetView : UIView
{
    id <UIFocusItem> userFocusedItem;	// 8 = 0x8
    NSArray *_confirmationButtons;	// 16 = 0x10
    SRStarkConfirmationButton *_messageProgressConfirmationButton;	// 24 = 0x18
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 32 = 0x20
    UIFocusContainerGuide *_confirmationButtonsFocusContainerGuide;	// 40 = 0x28
    UILabel *_confirmationTitleLabel;	// 48 = 0x30
    UILabel *_confirmationDescriptionLabel;	// 56 = 0x38
    unsigned long long _style;	// 64 = 0x40
    UIView *_systemStyleBackgroundView;	// 72 = 0x48
    SRStarkConfirmationButton *_preferredFocusConfirmationButton;	// 80 = 0x50
}

+ (unsigned long long)maximumSupportedButtonsCount;	// IMP=0x002000000002b18a
- (void).cxx_destruct;	// IMP=0x002000000002e139
@property(retain, nonatomic) SRStarkConfirmationButton *preferredFocusConfirmationButton; // @synthesize preferredFocusConfirmationButton=_preferredFocusConfirmationButton;
// Error: Property attributes should begin with the type ('T') attribute, property name: systemStyleBackgroundView
// Property attributes: (null)

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) UILabel *confirmationDescriptionLabel; // @synthesize confirmationDescriptionLabel=_confirmationDescriptionLabel;
@property(copy, nonatomic) UILabel *confirmationTitleLabel; // @synthesize confirmationTitleLabel=_confirmationTitleLabel;
@property(retain, nonatomic) UIFocusContainerGuide *confirmationButtonsFocusContainerGuide; // @synthesize confirmationButtonsFocusContainerGuide=_confirmationButtonsFocusContainerGuide;
@property(retain, nonatomic, getter=_currentTurnContext) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic) SRStarkConfirmationButton *messageProgressConfirmationButton; // @synthesize messageProgressConfirmationButton=_messageProgressConfirmationButton;
@property(readonly, nonatomic) NSArray *confirmationButtons; // @synthesize confirmationButtons=_confirmationButtons;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem;
- (id)_semanticConfirmationButtons;	// IMP=0x001000000002df4e
- (id)accessibilityIdentifier;	// IMP=0x001000000002df3a
- (_Bool)viewContainsFocusItem:(id)arg1;	// IMP=0x001000000002de8b
- (id)updatedFocusItemForCurrentFocusItem:(id)arg1;	// IMP=0x001000000002dd84
- (id)_focusItemFromPreviousConfirmationSnippetView:(id)arg1 andFocusedConfirmationButton:(id)arg2;	// IMP=0x001000000002d9ed
@property(readonly, copy) NSString *description;
- (void)_updateFocusGuideFrameForButtons:(id)arg1;	// IMP=0x001000000002d4f8
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000002d326
- (id)preferredFocusEnvironments;	// IMP=0x001000000002d1ea
- (void)_calculateButtonWidth:(double *)arg1 spacing:(double *)arg2 inBounds:(struct CGRect)arg3 numberOfButtons:(unsigned long long)arg4 ofButtonStyle:(unsigned long long)arg5;	// IMP=0x001000000002d04f
- (double)_buttonWidthForNumberOfButtons:(unsigned long long)arg1 buttonStyle:(unsigned long long)arg2;	// IMP=0x001000000002cfcd
- (double)_buttonIconSpacingForNumberOfButtons:(unsigned long long)arg1;	// IMP=0x001000000002cf72
- (double)_yOffsetForButtonHeight:(double)arg1 inFrame:(struct CGRect)arg2 minimumOffset:(double)arg3;	// IMP=0x001000000002ced0
- (void)_layoutSystemOrTextOnlyButtons:(id)arg1 buttonWidth:(double)arg2 spacing:(double)arg3 inFrame:(struct CGRect)arg4;	// IMP=0x001000000002ca7a
- (void)_layoutIconAndTextButtons:(id)arg1 buttonWidth:(double)arg2 iconSpacing:(double)arg3 inFrame:(struct CGRect)arg4;	// IMP=0x001000000002c2b8
- (void)layoutSubviews;	// IMP=0x001000000002b6e6
@property(readonly, nonatomic) struct CGRect buttonContainerFrame;
- (void)disableAllButtonHandlers;	// IMP=0x001000000002b195
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 description:(id)arg3 style:(unsigned long long)arg4 confirmationButtons:(id)arg5 currentTurnContext:(id)arg6;	// IMP=0x001000000002aac6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
