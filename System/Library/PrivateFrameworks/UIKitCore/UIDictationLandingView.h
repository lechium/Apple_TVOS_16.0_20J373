//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView
{
    UITextRange *_range;	// 8 = 0x8
    id _placeholder;	// 16 = 0x10
    _Bool _didHaveText;	// 24 = 0x18
    _Bool _willInsertResult;	// 25 = 0x19
    double _angle;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _shrinkStartTime;	// 64 = 0x40
    _Bool _shrinking;	// 72 = 0x48
    NSOperation *_afterShrinkCompletionInvocation;	// 80 = 0x50
    id <UITextCursorAssertion> _blinkAssertion;	// 88 = 0x58
}

+ (long long)fallbackPlaceholderLength;	// IMP=0x00100000009abc08
+ (id)activeInstance;	// IMP=0x00100000009abbf7
+ (id)sharedInstance;	// IMP=0x00100000009abb7f
+ (double)widthForLineHeight:(double)arg1;	// IMP=0x00100000009abb1f
+ (double)diameterForLineHeight:(double)arg1;	// IMP=0x00100000009abb01
- (void).cxx_destruct;	// IMP=0x00000000009ae1f7
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;	// IMP=0x00000000009ae18f
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000009ae173
- (double)fadeOutDuration;	// IMP=0x00000000009ae11c
- (void)stopLandingForError;	// IMP=0x00000000009adc9f
- (void)errorShakeDidFinish;	// IMP=0x00000000009adbb7
- (_Bool)hasActivePlaceholder;	// IMP=0x00000000009adba2
- (void)stopLanding;	// IMP=0x00000000009ad876
- (void)startLandingIfNecessary;	// IMP=0x00000000009ad244
- (void)performRemoteSelector:(SEL)arg1;	// IMP=0x00000000009ad0b9
- (void)startDisplayLinkIfNecessary;	// IMP=0x00000000009acd9c
- (void)showCursor;	// IMP=0x00000000009acc49
- (void)hideCursor;	// IMP=0x00000000009acafe
- (_Bool)delegateWasEmpty;	// IMP=0x00000000009acad8
- (void)updatePosition;	// IMP=0x00000000009ac7c4
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000009ac214
- (void)advanceLanding:(id)arg1;	// IMP=0x00000000009abf3f
- (void)shrinkWithCompletion:(id)arg1;	// IMP=0x00000000009abdf5
- (void)rotateBy:(double)arg1;	// IMP=0x00000000009abd8d
- (void)clearRotation;	// IMP=0x00000000009abd2f
- (void)dealloc;	// IMP=0x00000000009abcf1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009abc21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

