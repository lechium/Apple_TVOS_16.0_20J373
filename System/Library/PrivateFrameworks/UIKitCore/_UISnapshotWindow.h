//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

__attribute__((visibility("hidden")))
@interface _UISnapshotWindow : UIWindow
{
    _Bool __extendsScreenSceneLifetime;	// 336 = 0x150
}

+ (_Bool)_isSystemWindow;	// IMP=0x0060000000cc62f1
@property _Bool _extendsScreenSceneLifetime; // @synthesize _extendsScreenSceneLifetime=__extendsScreenSceneLifetime;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;	// IMP=0x0000000000cc6333
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000000cc632b
- (_Bool)_shouldZoom;	// IMP=0x0000000000cc6323
- (void)_updateTransformLayerForClassicPresentation;	// IMP=0x0000000000cc631d
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000000cc6317
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;	// IMP=0x0000000000cc630f
- (_Bool)canBecomeKeyWindow;	// IMP=0x0000000000cc6307
- (void)_setFirstResponder:(id)arg1;	// IMP=0x0000000000cc6301
- (_Bool)_isSettingFirstResponder;	// IMP=0x0000000000cc62f9

@end
