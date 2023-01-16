//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class VUIMediaInfo, VUINowPlayingViewController;

@protocol VUINowPlayingViewControllerDelegate <NSObject>
- (void)nowPlayingViewControllerMenuButtonPressedToDismiss:(VUINowPlayingViewController *)arg1;

@optional
- (void)nowPlayingViewController:(VUINowPlayingViewController *)arg1 mediaInfoDidChange:(VUIMediaInfo *)arg2 canPlay:(_Bool)arg3;
- (void)nowPlayingViewControllerUserDidInteract:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingController:(VUINowPlayingViewController *)arg1 safeAreaDidChange:(struct UIEdgeInsets)arg2;
- (void)nowPlayingControllerDidSelectMoreInfoButton:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerDidSelectFromBeginningButton:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerDidSelectSkipIntro:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingController:(VUINowPlayingViewController *)arg1 didEnableUIMode:(long long)arg2 enabled:(_Bool)arg3;
- (void)nowPlayingControllerViewDidDisappear:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerViewWillDisappear:(VUINowPlayingViewController *)arg1 withDisappearanceReason:(unsigned long long)arg2;
- (void)nowPlayingControllerViewDidAppear:(VUINowPlayingViewController *)arg1;
- (void)nowPlayingControllerViewWillAppear:(VUINowPlayingViewController *)arg1;
@end

