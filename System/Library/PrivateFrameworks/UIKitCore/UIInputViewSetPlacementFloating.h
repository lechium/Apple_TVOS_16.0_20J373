//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIInputViewSetPlacementOnScreen, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating
{
    double _floatingWidth;	// 88 = 0x58
    UIView *_responderToFollow;	// 96 = 0x60
    struct CGRect _responderRect;	// 104 = 0x68
    struct CGSize _lastSize;	// 136 = 0x88
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;	// 152 = 0x98
    NSArray *_subPlacements;	// 160 = 0xa0
}

+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;	// IMP=0x00100000009e675b
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009e64f4
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x00100000009e63d4
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(double)arg3;	// IMP=0x00100000009e6375
- (void).cxx_destruct;	// IMP=0x00000000009e6d3c
@property(nonatomic) double floatingWidth; // @synthesize floatingWidth=_floatingWidth;
@property(nonatomic) __weak UIResponder *responderToFollow; // @synthesize responderToFollow=_responderToFollow;
- (_Bool)accessoryViewWillAppear;	// IMP=0x00000000009e6ce3
- (_Bool)isFloatingAssistantView;	// IMP=0x00000000009e6cbf
- (id)assistantView;	// IMP=0x00000000009e6ca2
- (_Bool)isFloating;	// IMP=0x00000000009e6c9a
- (_Bool)showsEditItems;	// IMP=0x00000000009e6c76
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;	// IMP=0x00000000009e6af3
- (id)expiringPlacement;	// IMP=0x00000000009e6a9a
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x00000000009e6a3c
- (id)subPlacements;	// IMP=0x00000000009e697d
- (void)setSubPlacements:(id)arg1;	// IMP=0x00000000009e6949
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e66ad
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e6643
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e64fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009e6475
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009e63fa
- (void)dealloc;	// IMP=0x00000000009e62f0
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x00000000009e5ad7
- (id)currentResponderView;	// IMP=0x00000000009e5acf
- (void)setDelegate:(id)arg1;	// IMP=0x00000000009e59d6
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009e59c5
- (void)checkSizeForOwner:(id)arg1;	// IMP=0x00000000009e550a
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x00000000009e5427

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

