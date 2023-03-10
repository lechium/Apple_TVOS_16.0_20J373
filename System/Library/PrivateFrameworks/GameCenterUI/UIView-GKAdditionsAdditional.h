//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (GKAdditionsAdditional)
+ (id)_gkViewFromNib;	// IMP=0x00200000000d76d8
+ (id)_gkStandardBackdropView;	// IMP=0x00200000000e8d5d
- (id)_gkAncestryAffectingVisualLayout;	// IMP=0x0010000000009814
- (id)_gkAncestryDescription;	// IMP=0x00100000000096e8
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000096d3
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;	// IMP=0x00100000000094f9
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;	// IMP=0x0010000000009362
- (id)_gkRecursiveDescriptionForKey:(id)arg1;	// IMP=0x001000000000934e
- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;	// IMP=0x0010000000009258
@property(nonatomic) struct CGPoint integralCenter;
- (void)_gkSetNeedsRender;	// IMP=0x00100000000936c5
- (void)_gkRemoveAllConstraints;	// IMP=0x00100000000acd8d
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;	// IMP=0x00100000000e917f
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;	// IMP=0x00100000000e8feb
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;	// IMP=0x00100000000e8f6c
- (id)_gkBackdropView;	// IMP=0x00100000000e8eda
- (id)_gkApplyFakeStatusBarView;	// IMP=0x00100000000e8dd3
- (void)_gkSetDrawsAsKnockout:(_Bool)arg1 inBackdrop:(id)arg2;	// IMP=0x00100000000e8cab
- (void)_gkSetDrawsAsBackdropOverlay:(_Bool)arg1;	// IMP=0x00100000000e8c75
@property(nonatomic, readonly) double lastBaselineMaxY;
@property(nonatomic, readonly) double lastBaselineFromBottom;
@property(nonatomic, readonly) double firstBaselineFromTop;
@end

