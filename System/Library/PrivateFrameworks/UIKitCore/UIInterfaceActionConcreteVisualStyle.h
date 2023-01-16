//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject
{
}

- (id)newRepresentationViewForAction:(id)arg1;	// IMP=0x0000000000029dfa
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x0000000000029df4
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x0000000000029dee
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x0000000000029de8
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x0000000000029ddb
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x0000000000029dd5
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x0000000000029dc8
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x0000000000029dc2
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x0000000000029db5
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x0000000000029daf
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x0000000000029da2
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x0000000000029d9a
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x0000000000029d88
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x0000000000029d76
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x0000000000029d5d
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x0000000000029d3a
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x0000000000029d32
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000029d2a
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000029d22
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x0000000000029d1a
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x0000000000029d12
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x0000000000029d04
- (_Bool)selectionFeedbackEnabled;	// IMP=0x0000000000029cfc
- (_Bool)selectByPressGestureRequired;	// IMP=0x0000000000029cf4
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x0000000000029ce1
- (double)actionSectionSpacing;	// IMP=0x0000000000029cd8
- (double)verticalImageContentSpacing;	// IMP=0x0000000000029ccf
- (double)horizontalImageContentSpacing;	// IMP=0x0000000000029cc6
- (struct CGSize)minimumActionContentSize;	// IMP=0x0000000000029cb0
- (struct UIEdgeInsets)contentMargin;	// IMP=0x0000000000029c9d
- (double)contentCornerRadius;	// IMP=0x0000000000029c94
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x0000000000029c07
- (id)defaultScreen;	// IMP=0x0000000000029bee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029bdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

