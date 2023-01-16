//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementCompactAssistantOnScreen
{
    struct CGPoint _offset;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000009e7607
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)verticalOffset;	// IMP=0x00000000009e77d1
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e771c
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009e76b9
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x00000000009e7621
- (_Bool)isCompactAssistantView;	// IMP=0x00000000009e760f

@end

