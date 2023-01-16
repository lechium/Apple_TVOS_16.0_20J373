//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSDictionary, NSString, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface UITextInteractionSelectableInputDelegate : UIResponder
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
}

+ (id)selectableInputDelegateWithTextInput:(id)arg1;	// IMP=0x0010000000b9bf1d
- (void).cxx_destruct;	// IMP=0x0000000000b9d190
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9d099
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9cfa2
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9ceab
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9cdb4
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9ccbd
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9cbc6
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9cacf
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9c9d8
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9c8e1
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9c7ea
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9c6f3
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b9c5fc
- (void)_unmarkText;	// IMP=0x0000000000b9c5c3
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b9c58a
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000b9c551
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b9c518
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b9c4df
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000b9c4c2
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000000b9c4a5
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000b9c488
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000b9c46b
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000b9c42d
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000000b9c3ef
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000000b9c3b6
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000b9c399
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000b9c37c
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000b9c35f
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000b9c2eb
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000b9c2ce
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000b9c2b1
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000b9c294
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000b9c277
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;	// IMP=0x0000000000b9c204
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b9c1cb
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000b9c0e5
- (id)textInRange:(id)arg1;	// IMP=0x0000000000b9c0c8
- (void)deleteBackward;	// IMP=0x0000000000b9c08f
- (void)insertText:(id)arg1;	// IMP=0x0000000000b9c056
@property(readonly, nonatomic) _Bool hasText;
- (id)nextResponder;	// IMP=0x0000000000b9c024
- (void)updateSelectionRects;	// IMP=0x0000000000b9bf74
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end
