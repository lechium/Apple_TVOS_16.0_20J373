//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class IKMediaContentElement, NSString, UICollectionReusableView, UIViewController, _TVPlayer, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVInlinePlayerView : UIView
{
    IKMediaContentElement *_mediaContentElement;	// 8 = 0x8
    long long _playbackMode;	// 16 = 0x10
    long long _audioMode;	// 24 = 0x18
    _TVPlayer *_appPlayer;	// 32 = 0x20
    UICollectionReusableView *_containingCell;	// 40 = 0x28
    UIViewController *_hostViewController;	// 48 = 0x30
    UIViewController *_playerViewController;	// 56 = 0x38
    struct CGRect _hostedPlayerViewFrame;	// 64 = 0x40
    _Bool _playbackEnabled;	// 96 = 0x60
    int _playbackState;	// 100 = 0x64
    _UIFloatingContentView *_floatingView;	// 104 = 0x68
    UIView *_staticView;	// 112 = 0x70
    _Bool _usesFocusedState;	// 120 = 0x78
    _Bool _playerViewEnabled;	// 121 = 0x79
    UIView *_imageView;	// 128 = 0x80
    UIView *_playerView;	// 136 = 0x88
}

+ (id)_makePlayerViewControllerWithPlayer:(id)arg1;	// IMP=0x0010000000172491
- (void).cxx_destruct;	// IMP=0x00000000000593c4
@property(nonatomic) _Bool playerViewEnabled; // @synthesize playerViewEnabled=_playerViewEnabled;
@property(nonatomic) _Bool usesFocusedState; // @synthesize usesFocusedState=_usesFocusedState;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) struct CGRect _playerViewFrame;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000000591d0
- (void)layoutSubviews;	// IMP=0x0000000000058f7e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000058f10
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058e5b
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000058da2
- (void)setFocusDirection:(struct CGPoint)arg1;	// IMP=0x0000000000058d8e
- (struct CGPoint)focusDirection;	// IMP=0x0000000000058cd9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000058c1c
- (void)didMoveToWindow;	// IMP=0x0000000000058553
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000005847c
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000583c0
- (void)dealloc;	// IMP=0x0000000000058382
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000581ac
- (void)_stop;	// IMP=0x0000000000173ded
- (void)_play;	// IMP=0x0000000000173cf9
- (void)_schedule;	// IMP=0x0000000000173c32
- (void)_playerWillGetPresented:(id)arg1;	// IMP=0x00000000001739cc
- (void)_playbackError:(id)arg1;	// IMP=0x0000000000173602
- (void)_containingCellDidFocus:(_Bool)arg1;	// IMP=0x00000000001731f2
- (void)_containingCellDidDisplay:(_Bool)arg1;	// IMP=0x0000000000172e39
- (void)_hostPlayer:(_Bool)arg1;	// IMP=0x0000000000172661
- (_Bool)_canHostPlayer;	// IMP=0x0000000000172603
- (_Bool)_isPlayerHosted;	// IMP=0x0000000000172574
- (void)_controller_viewDidMoveToWindow;	// IMP=0x0000000000171e88
- (void)_controller_viewWillMoveToWindow:(id)arg1 andSuperView:(id)arg2;	// IMP=0x0000000000171973
- (void)_controller_dealloc;	// IMP=0x000000000017182c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001714b5
- (void)viewDidDisappearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000171186
- (void)viewWillDisappearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170f06
- (void)viewDidAppearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170cd9
- (void)viewWillAppearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170a0b
- (id)playbackViewController:(id)arg1 customAnimatorForNavigationControllerOperation:(long long)arg2;	// IMP=0x000000000017087d
@property(readonly, nonatomic) __weak UIViewController *hostViewController;
@property(readonly, nonatomic) long long audioMode;
@property(readonly, nonatomic) long long playbackMode;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000001705a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

