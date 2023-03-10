//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetPlacement;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementWrapper
{
    UIInputViewSetPlacement *_actualPlacement;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009e7962
+ (id)placementWithPlacement:(id)arg1;	// IMP=0x00100000009e7909
- (void).cxx_destruct;	// IMP=0x00000000009e7e35
- (id)description;	// IMP=0x00000000009e7df4
- (unsigned long long)computeComparisonMask;	// IMP=0x00000000009e7dd7
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x00000000009e7dba
- (id)subPlacements;	// IMP=0x00000000009e7d9d
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x00000000009e7d80
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009e7d63
- (struct CGAffineTransform)transform;	// IMP=0x00000000009e7d21
- (double)alpha;	// IMP=0x00000000009e7d04
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x00000000009e7cc2
- (_Bool)accessoryViewWillAppear;	// IMP=0x00000000009e7ca5
- (_Bool)inputViewWillAppear;	// IMP=0x00000000009e7c88
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;	// IMP=0x00000000009e7c6b
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e7c4e
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e7c31
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e7c14
- (_Bool)isInteractive;	// IMP=0x00000000009e7bf7
- (_Bool)showsEditItems;	// IMP=0x00000000009e7bda
- (_Bool)showsInputOrAssistantViews;	// IMP=0x00000000009e7bbd
- (_Bool)showsKeyboard;	// IMP=0x00000000009e7ba0
- (_Bool)showsInputViews;	// IMP=0x00000000009e7b83
- (_Bool)isVisible;	// IMP=0x00000000009e7b66
- (_Bool)isUndocked;	// IMP=0x00000000009e7b49
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e7ace
- (void)setDirty;	// IMP=0x00000000009e7a82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009e7a05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009e796a

@end

