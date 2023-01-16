//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIButton, UIWindow;

__attribute__((visibility("hidden")))
@interface UIZoomViewController : UIViewController
{
    UIWindow *_window;	// 424 = 0x1a8
    UIButton *_zoomButton;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x0000000000ffe767
- (id)_window;	// IMP=0x0000000000ffe756
- (id)screen;	// IMP=0x0000000000ffe714
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1 forWindow:(id)arg2;	// IMP=0x0000000000ffe6fe
- (void)_suspendAnimationStarted:(id)arg1;	// IMP=0x0000000000ffe621
- (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000000ffe53f
- (void)_zoomOrientationAnimationFinished;	// IMP=0x0000000000ffe403
- (void)_zoomOrientationChange:(id)arg1;	// IMP=0x0000000000ffe246
- (void)loadView;	// IMP=0x0000000000ffe0b9
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(_Bool)arg2;	// IMP=0x0000000000ffde02
- (void)_updateZoomButton;	// IMP=0x0000000000ffdc96
- (void)_changeZoom:(id)arg1;	// IMP=0x0000000000ffdbdd
- (_Bool)isClassicControlWindow:(id)arg1;	// IMP=0x0000000000ffdbc9
- (void)dealloc;	// IMP=0x0000000000ffdb3d
- (id)init;	// IMP=0x0000000000ffda28

@end
