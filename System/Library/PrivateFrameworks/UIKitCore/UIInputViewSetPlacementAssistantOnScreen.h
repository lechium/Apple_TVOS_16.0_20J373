//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIInputViewSetPlacementAccessoryOnScreen;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen
{
    UIInputViewSetPlacementAccessoryOnScreen *_cachedSecondaryPlacement;	// 40 = 0x28
    NSArray *_subPlacements;	// 48 = 0x30
}

+ (id)infoWithPoint:(struct CGPoint)arg1 isCompact:(_Bool)arg2 frame:(struct CGRect)arg3 position:(unsigned long long)arg4;	// IMP=0x00100000009e6f0b
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009e6f03
- (void).cxx_destruct;	// IMP=0x00000000009e75c5
- (struct UIEdgeInsets)inputAccessoryViewPadding;	// IMP=0x00000000009e75b2
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x00000000009e73db
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;	// IMP=0x00000000009e7378
- (_Bool)accessoryViewWillAppear;	// IMP=0x00000000009e7366
- (_Bool)inputViewWillAppear;	// IMP=0x00000000009e735e
- (_Bool)showsEditItems;	// IMP=0x00000000009e7349
- (_Bool)showsInputOrAssistantViews;	// IMP=0x00000000009e7341
- (_Bool)showsInputViews;	// IMP=0x00000000009e7339
- (_Bool)isFloatingAssistantView;	// IMP=0x00000000009e72ef
- (double)verticalOffset;	// IMP=0x00000000009e72c4
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e70f6
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009e7097
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x00000000009e6e96
- (id)subPlacements;	// IMP=0x00000000009e6d7c

@end

