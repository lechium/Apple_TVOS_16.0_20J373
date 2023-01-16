//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NAUITextStyleDescriptor;

@interface UIView (NAUIAutolayoutDebugging)
+ (void)_naui_beginDebuggingAutolayout;	// IMP=0x002000000000682b
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;	// IMP=0x00200000000093fb
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(CDUnknownBlockType)arg2 animatablesBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000008fce
+ (void)naui_endDisablingAnimations;	// IMP=0x0020000000008fa5
+ (void)naui_beginDisablingAnimations;	// IMP=0x0020000000008f71
- (id)naui_descendantsWithAmbiguousLayout;	// IMP=0x0010000000006c62
- (void)naui_removeNamedConstraints;	// IMP=0x0010000000009aea
- (void)naui_removeConstraintsNamed:(id)arg1;	// IMP=0x00100000000099e9
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;	// IMP=0x001000000000989d
- (id)_naui_constraintsNamed:(id)arg1;	// IMP=0x0010000000009818
- (id)_naui_constraintsByNameDictionary:(_Bool)arg1;	// IMP=0x001000000000979f
- (_Bool)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;	// IMP=0x0010000000009704
- (_Bool)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;	// IMP=0x0010000000009670
- (void)naui_addConstraints:(id)arg1;	// IMP=0x0010000000009657
- (void)naui_addConstraint:(id)arg1;	// IMP=0x001000000000963e
- (void)naui_removeConstraints:(id)arg1;	// IMP=0x0010000000009625
- (void)naui_removeConstraint:(id)arg1;	// IMP=0x001000000000960c
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;	// IMP=0x0010000000009587
- (_Bool)naui_isProperDescendantOfView:(id)arg1;	// IMP=0x00100000000093e0
- (void)naui_addAutoLayoutSubviews:(id)arg1;	// IMP=0x00100000000092b6
- (void)naui_addAutoLayoutSubview:(id)arg1;	// IMP=0x0010000000009262
- (void)naui_performAnimateableConstraintChanges:(CDUnknownBlockType)arg1;	// IMP=0x00100000000090a3
- (_Bool)naui_canAnimate;	// IMP=0x0010000000008f1c
@property(retain, nonatomic, setter=naui_setDynamicFontTextStyleDescriptor:) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
- (void)naui_showAllViewBoundsRecursively:(_Bool)arg1;	// IMP=0x0010000000008b9a
@end

