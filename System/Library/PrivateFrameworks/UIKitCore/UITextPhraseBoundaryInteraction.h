//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction : UITextInteraction
{
    UITextGestureTuning *_gestureTuning;	// 8 = 0x8
    id <UITextCursorAssertion> _blinkAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000efecab
- (void)_phraseBoundaryGesture:(id)arg1;	// IMP=0x0000000000efe0a4
- (id)_phraseBoundaryGestureRecognizer;	// IMP=0x0000000000efdfcc
- (void)updateVisibilityOffsetForGesture:(id)arg1;	// IMP=0x0000000000efdf2f
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000efde1e
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x0000000000efddfb
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;	// IMP=0x0000000000efddd8
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000efdd62
- (id)initWithTextInput:(id)arg1;	// IMP=0x0000000000efdcb6

@end

