//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class NSString, PBInternalShortcutManager, PBSystemKeychordGestureRecognizer, PBTapGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, _UIRepeatingPressGestureRecognizer;

@interface PBWindow : UIWindow
{
    UILongPressGestureRecognizer *_microphoneLongPressRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_microphoneTapRecognizer;	// 16 = 0x10
    PBTapGestureRecognizer *_microphoneTapDownRecognizer;	// 24 = 0x18
    UILongPressGestureRecognizer *_tvLongPressRecognizer;	// 32 = 0x20
    PBTapGestureRecognizer *_tvTapRecognizer;	// 40 = 0x28
    PBTapGestureRecognizer *_tvDoubleTapRecognizer;	// 48 = 0x30
    UILongPressGestureRecognizer *_rapidVolumeUpRecognizer;	// 56 = 0x38
    UILongPressGestureRecognizer *_rapidVolumeDownRecognizer;	// 64 = 0x40
    PBTapGestureRecognizer *_muteTapRecognizer;	// 72 = 0x48
    UILongPressGestureRecognizer *_longPressMenuRecognizer;	// 80 = 0x50
    UILongPressGestureRecognizer *_longPressHomeRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_tapMenuRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_tapACHomeRecognizer;	// 104 = 0x68
    UITapGestureRecognizer *_tripleTapMenuRecognizer;	// 112 = 0x70
    UITapGestureRecognizer *_quadrupleTapMenuRecognizer;	// 120 = 0x78
    UITapGestureRecognizer *_doubleTapMenuRecognizer;	// 128 = 0x80
    UITapGestureRecognizer *_doubleTapACHomeRecognizer;	// 136 = 0x88
    UITapGestureRecognizer *_tapExposeAllRecognizer;	// 144 = 0x90
    UITapGestureRecognizer *_tapPowerRecognizer;	// 152 = 0x98
    UILongPressGestureRecognizer *_powerLongPressRecognizer;	// 160 = 0xa0
    UILongPressGestureRecognizer *_rewindLongPressRecognizer;	// 168 = 0xa8
    UILongPressGestureRecognizer *_fastForwardLongPressRecognizer;	// 176 = 0xb0
    UITapGestureRecognizer *_playPauseTapRecognizer;	// 184 = 0xb8
    PBTapGestureRecognizer *_playTapRecognizer;	// 192 = 0xc0
    PBTapGestureRecognizer *_pauseTapRecognizer;	// 200 = 0xc8
    PBTapGestureRecognizer *_stopTapRecognizer;	// 208 = 0xd0
    UITapGestureRecognizer *_rewindTapRecognizer;	// 216 = 0xd8
    UITapGestureRecognizer *_fastForwardTapRecognizer;	// 224 = 0xe0
    PBTapGestureRecognizer *_nextTrackTapRecognizer;	// 232 = 0xe8
    PBTapGestureRecognizer *_previousTrackTapRecognizer;	// 240 = 0xf0
    _UIRepeatingPressGestureRecognizer *_skipForwardsRepeatingPressRecognizer;	// 248 = 0xf8
    _UIRepeatingPressGestureRecognizer *_skipBackwardsRepeatingPressRecognizer;	// 256 = 0x100
    PBSystemKeychordGestureRecognizer *_sysdiagnoseRecognizer;	// 264 = 0x108
    PBSystemKeychordGestureRecognizer *_screenshotRecognizer;	// 272 = 0x110
    PBSystemKeychordGestureRecognizer *_blackScreenRecoveryRecognizer;	// 280 = 0x118
    UITapGestureRecognizer *_channelGuideTapRecognizer;	// 288 = 0x120
    UILongPressGestureRecognizer *_channelGuideLongPressRecognizer;	// 296 = 0x128
    PBInternalShortcutManager *_internalShortcutManager;	// 304 = 0x130
    _Bool _shouldOcclude;	// 312 = 0x138
    _Bool _occluding;	// 313 = 0x139
    NSString *_name;	// 320 = 0x140
}

+ (void)_decrementOcclusionCounter;	// IMP=0x00200000000cdc92
+ (void)_incrementOcclusionCounter;	// IMP=0x00100000000cd969
- (void).cxx_destruct;	// IMP=0x00200000000d0471
@property(nonatomic, getter=isOccluding) _Bool occluding; // @synthesize occluding=_occluding;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldOcclude; // @synthesize shouldOcclude=_shouldOcclude;
- (void)_systemKeychordRecognized:(id)arg1;	// IMP=0x00100000000d038b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeOnPressDown:(id)arg2;	// IMP=0x00100000000d0286
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;	// IMP=0x00100000000d0023
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000000cff87
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00100000000cfe03
- (id)_newTripleTapGestureRecognizerWithPressTypes:(id)arg1;	// IMP=0x00100000000cfd53
- (void)setSystemGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000cfa28
- (void)setPlaybackGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000cf19e
- (void)setPowerGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000cefbd
- (void)setTripleTapMenuGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000cef31
- (void)setMenuGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000ce8dd
- (void)setChannelGuideGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000ce716
- (void)setMicrophoneGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000ce46e
- (void)setExposeAllGestureRecognizerEnabled:(_Bool)arg1;	// IMP=0x00100000000ce39d
- (void)setTVGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000ce0ed
- (void)setVolumeGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00100000000cde82
- (void)_updateOccludingState;	// IMP=0x00100000000cd902
- (void)setHidden:(_Bool)arg1;	// IMP=0x00100000000cd6d5
- (void)setWindowLevel:(double)arg1;	// IMP=0x00100000000cd5d5
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000cd44d
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2;	// IMP=0x00100000000cd371
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000cd33d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000cd30f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
