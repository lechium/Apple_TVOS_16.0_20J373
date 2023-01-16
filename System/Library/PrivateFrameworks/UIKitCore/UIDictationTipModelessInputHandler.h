//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIDictationTipHandlerDelegate;

__attribute__((visibility("hidden")))
@interface UIDictationTipModelessInputHandler : NSObject
{
    _Bool _modelessInputTipDictationStoppedSignal;	// 8 = 0x8
    _Bool _softwareKeyboardInteractionAfterDictationStoppedSignal;	// 9 = 0x9
    _Bool _shouldAttemptToShowModelessTip;	// 10 = 0xa
    id <UIDictationTipHandlerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b04c55
@property(nonatomic) _Bool shouldAttemptToShowModelessTip; // @synthesize shouldAttemptToShowModelessTip=_shouldAttemptToShowModelessTip;
@property(nonatomic) _Bool softwareKeyboardInteractionAfterDictationStoppedSignal; // @synthesize softwareKeyboardInteractionAfterDictationStoppedSignal=_softwareKeyboardInteractionAfterDictationStoppedSignal;
@property(nonatomic) _Bool modelessInputTipDictationStoppedSignal; // @synthesize modelessInputTipDictationStoppedSignal=_modelessInputTipDictationStoppedSignal;
@property(nonatomic) __weak id <UIDictationTipHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showModelessInputTip;	// IMP=0x0000000000b04b33
- (_Bool)shouldShowModelessInputTip;	// IMP=0x0000000000b04a68
- (void)triggerAttemptToShowModelessTipFlag;	// IMP=0x0000000000b04a09
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;	// IMP=0x0000000000b049c4
- (void)processUserInteractionEnded;	// IMP=0x0000000000b0493f
- (void)processSoftwareKeyboardInteraction;	// IMP=0x0000000000b048b5
- (void)resetDictationTipModelessHandlerSignalFlags;	// IMP=0x0000000000b04874
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000b047fc

@end
