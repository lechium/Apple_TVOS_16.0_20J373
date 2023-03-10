//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow
{
}

- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x0000000000f6086b
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x0000000000f6078b
- (_Bool)_isTextEffectsWindowHosting;	// IMP=0x0000000000f60783
- (void)_sceneBoundsDidChange;	// IMP=0x0000000000f6058d
- (_Bool)_isFullscreen;	// IMP=0x0000000000f60483
- (struct CGRect)actualSceneBounds;	// IMP=0x0000000000f60404
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;	// IMP=0x0000000000f6037a
- (long long)_orientationForSceneTransform;	// IMP=0x0000000000f6036f
- (long long)_orientationForRootTransform;	// IMP=0x0000000000f60364
- (long long)_orientationForViewTransform;	// IMP=0x0000000000f60359
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x0000000000f60351
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000000f60349

@end

