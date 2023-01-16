//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface VUIStorePlaybackLaunchShroud : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

+ (id)sharedShroud;	// IMP=0x00600000000045b1
- (void).cxx_destruct;	// IMP=0x0000000000004c5c
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004bd5
- (void)fadeOut;	// IMP=0x0000000000004b9f
- (void)_hideWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000049bb
- (void)_showWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000047d4
- (id)init;	// IMP=0x0000000000004606

@end

