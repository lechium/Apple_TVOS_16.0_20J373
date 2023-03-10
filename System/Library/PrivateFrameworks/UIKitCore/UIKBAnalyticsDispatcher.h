//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject
{
}

+ (void)keyboardCameraSessionEndedForTextContentType:(id)arg1 didFindText:(_Bool)arg2 didInsertText:(_Bool)arg3 sender:(id)arg4;	// IMP=0x0080000000298fd5
+ (void)keyplaneSwitched:(int)arg1;	// IMP=0x0080000000298ed7
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3;	// IMP=0x00800000002987bd
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;	// IMP=0x00800000002982cc
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(_Bool)arg2;	// IMP=0x0080000000297f2b
+ (void)editingSessionEnded:(unsigned long long)arg1;	// IMP=0x0080000000297dc9
+ (void)sessionEfficacyAnalyticsEnded:(id)arg1;	// IMP=0x0080000000297754
+ (void)sessionAnalyticsEnded:(id)arg1;	// IMP=0x0080000000296db8
+ (void)handwritingResized:(id)arg1;	// IMP=0x0080000000296aa7
+ (void)globeKeySelected;	// IMP=0x0080000000296a84
+ (void)globeKeyLongPress;	// IMP=0x0080000000296758
+ (void)globeKeyEducationShown:(double)arg1;	// IMP=0x0080000000296460
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;	// IMP=0x0080000000296093
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;	// IMP=0x0080000000295a77
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;	// IMP=0x008000000029595a
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;	// IMP=0x00800000002958bf
+ (id)allowedValuesForType:(id)arg1;	// IMP=0x0080000000295719
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;	// IMP=0x0080000000295312
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;	// IMP=0x008000000029515f
+ (void)deleteKeySelected:(int)arg1;	// IMP=0x0080000000295061
+ (id)currentInputMode;	// IMP=0x0080000000294fe0
+ (id)preferredEventName:(id)arg1;	// IMP=0x0080000000294f64

@end

