//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSLayoutConstraint.h>

@class _NSLayoutConstraintConstant;

@interface NSLayoutConstraint (StatusBarAdditions)
+ (double)_constraintConstantLimit;	// IMP=0x002000000109a549
+ (_Bool)_UIWantsMarginAttributeSupport;	// IMP=0x002000000109a557
- (id)_ui_constraintWithPriority:(float)arg1;	// IMP=0x0010000000d42fda
- (id)_ola_dimensionItem;	// IMP=0x001000000106bceb
- (id)_ola_dimensionRefItem;	// IMP=0x001000000106bcd9
- (id)_uiSecondRefView;	// IMP=0x001000000109a51e
- (id)_uiFirstRefView;	// IMP=0x001000000109a4f3
@property(getter=_encodedConstant, setter=_setEncodedConstant:) _NSLayoutConstraintConstant *encodedConstant;
- (id)_debuggableEquationDescriptionWithoutLegend;	// IMP=0x001000000109c76f
- (id)_debuggableEquationLegendDescription;	// IMP=0x001000000109c524
- (id)_debuggableEquationBaseDescription;	// IMP=0x001000000109c4b5
- (id)_baselineLoweringInfoForFirstItem:(_Bool)arg1;	// IMP=0x001000000109c3a5
- (void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(_Bool)arg2;	// IMP=0x001000000109c1e2
@end

