//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    _Bool _isSplit;	// 8 = 0x8
    double _splitHeightDelta;	// 16 = 0x10
    UIResponder *_restorableResponder;	// 24 = 0x18
    UIKBRenderConfig *_restorableRenderConfig;	// 32 = 0x20
    UIResponder *_accessoryViewNextResponder;	// 40 = 0x28
    _Bool _restoreUsingBecomeFirstResponder;	// 48 = 0x30
    UIView *_inputView;	// 56 = 0x38
    UIView *_inputAccessoryView;	// 64 = 0x40
    UIView *_inputAssistantView;	// 72 = 0x48
    UIInputViewController *_inputViewController;	// 80 = 0x50
    UIInputViewController *_accessoryViewController;	// 88 = 0x58
    UIInputViewController *_assistantViewController;	// 96 = 0x60
    _Bool _isNullInputView;	// 104 = 0x68
    _Bool _isCustomInputView;	// 105 = 0x69
    _Bool _isRemoteKeyboard;	// 106 = 0x6a
    UIView *_hostedCustomInputView;	// 112 = 0x70
    struct CGRect _inputAssistantViewBounds;	// 120 = 0x78
}

+ (id)emptyInputSet;	// IMP=0x006000000006346f
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;	// IMP=0x00600000000632f5
+ (id)inputSetWithPlaceholderAndCustomInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x006000000006308d
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x0060000000063073
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;	// IMP=0x006000000006305f
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;	// IMP=0x006000000006304b
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x0060000000062f36
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;	// IMP=0x0060000000062f21
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x0060000000062e89
- (void).cxx_destruct;	// IMP=0x0000000000066c09
@property(nonatomic) _Bool isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property(nonatomic) _Bool isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property(readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property(retain, nonatomic) UIView *hostedCustomInputView; // @synthesize hostedCustomInputView=_hostedCustomInputView;
@property(readonly, nonatomic) _Bool isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property(nonatomic) __weak UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) __weak UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(retain, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(retain, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;	// IMP=0x00000000000669c2
- (void)_endSplitTransitionIfNeeded;	// IMP=0x00000000000668e1
- (void)_beginSplitTransitionIfNeeded;	// IMP=0x0000000000066769
- (_Bool)_accessorySuppressesShadow;	// IMP=0x000000000006669a
- (id)_splittableInputAccessoryView;	// IMP=0x0000000000066656
- (id)_themableInputAccessoryView;	// IMP=0x0000000000066613
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x00000000000663ea
- (_Bool)hierarchyContainsView:(id)arg1;	// IMP=0x0000000000066218
- (void)refreshPresentation;	// IMP=0x0000000000065c7a
- (struct CGRect)_rightInputViewSetFrame;	// IMP=0x0000000000065949
- (struct CGRect)_leftInputViewSetFrame;	// IMP=0x0000000000065671
- (double)inputViewSplitHeight;	// IMP=0x0000000000065594
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
@property(readonly, nonatomic) _Bool _inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool supportsSplit;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightInputView;
@property(readonly, nonatomic) _Bool isInputAccessoryViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputAssistantViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputViewPlaceholder;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;	// IMP=0x0000000000065195
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;	// IMP=0x000000000006515e
- (_Bool)_inputAccessoryViewSupportsSplit;	// IMP=0x00000000000650d0
- (_Bool)_inputViewSupportsSplit;	// IMP=0x0000000000065045
- (_Bool)_isFullscreen;	// IMP=0x0000000000064eb1
- (_Bool)__isCKAccessoryView;	// IMP=0x0000000000064e25
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;	// IMP=0x0000000000064d33
- (long long)keyboardOrientation:(id)arg1;	// IMP=0x0000000000064c8e
- (id)description;	// IMP=0x000000000006499c
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;	// IMP=0x000000000006483d
- (_Bool)containsResponder:(id)arg1;	// IMP=0x0000000000064794
@property(readonly, nonatomic) _Bool visible;
- (_Bool)_inputViewIsVisible;	// IMP=0x00000000000646c0
@property(readonly, nonatomic) _Bool usesKeyClicks;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000642ee
- (_Bool)containsView:(id)arg1;	// IMP=0x0000000000064233
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool hasNonPlaceholderViews;
@property(nonatomic) _Bool restoreUsingBecomeFirstResponder;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;	// IMP=0x000000000006406e
@property(readonly, nonatomic) UIView *splitExemptSubview;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000063e9a
- (id)normalizePlaceholders;	// IMP=0x0000000000063aca
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;	// IMP=0x000000000006399b
- (id)inputSetWithInputAccessoryViewOnly;	// IMP=0x0000000000063936
- (void)setKeyboardAssistantBar:(id)arg1;	// IMP=0x0000000000063826
- (void)inheritNullState:(id)arg1;	// IMP=0x0000000000062e66
- (void)dealloc;	// IMP=0x0000000000062e02
- (id)initWithInputView:(id)arg1 customInputView:(id)arg2 accessoryView:(id)arg3 assistantView:(id)arg4 isKeyboard:(_Bool)arg5;	// IMP=0x0000000000062c13
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;	// IMP=0x0000000000062be9
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)_isKeyboard;	// IMP=0x0000000000062b66
- (_Bool)canAnimateToInputViewSet:(id)arg1;	// IMP=0x0000000000062a1c

@end

