//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextModernLoupeSession, UITextRange, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextLoupeAcceleratedTouchBehavior : NSObject
{
    UITextRange *_originalTextRange;	// 8 = 0x8
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 16 = 0x10
    UITextModernLoupeSession *_loupeSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010ae7a6
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x00000000010adf05
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000010adef0
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000010adedb
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x00000000010adec6
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x00000000010adebe
- (_Bool)usesTouchAlignment;	// IMP=0x00000000010adeb6
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000010ade07
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000010addff
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000010add62
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x00000000010adcca
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x00000000010adcc4
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x00000000010adcb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
