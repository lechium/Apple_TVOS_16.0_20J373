//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusGuide.h"

@protocol UIKBFocusGuideDelegate;

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide : UIFocusGuide
{
    unsigned long long focusHeading;	// 64 = 0x40
    id <UIKBFocusGuideDelegate> _keyboardDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000a1f985
@property(nonatomic) __weak id <UIKBFocusGuideDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading;
- (id)description;	// IMP=0x0000000000a1f89c
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;	// IMP=0x0000000000a1f769
- (_Bool)_ignoresSpeedBumpEdges;	// IMP=0x0000000000a1f761
- (float)_focusPriority;	// IMP=0x0000000000a1f753
- (_Bool)_isUnclippable;	// IMP=0x0000000000a1f74b
- (_Bool)_isUnoccludable;	// IMP=0x0000000000a1f743
- (void)_didUpdateFocusToPreferredFocusedView;	// IMP=0x0000000000a1f6c5

@end

