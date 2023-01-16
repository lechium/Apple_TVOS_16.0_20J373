//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;	// 8 = 0x8
    NSMutableArray *_hiddenAlertControllers;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000073844
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;	// IMP=0x000000000007381d
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;	// IMP=0x0000000000073743
- (void)_didHideAlertController:(id)arg1;	// IMP=0x0000000000073657
- (void)_willHideAlertController:(id)arg1;	// IMP=0x0000000000073651
- (void)_willShowAlertController:(id)arg1;	// IMP=0x0000000000073565
- (id)_topAlertControllerInStack;	// IMP=0x000000000007354f
- (void)_removeAlertControllerFromStack:(id)arg1;	// IMP=0x000000000007348a
- (void)_addAlertControllerToStack:(id)arg1;	// IMP=0x00000000000733c5
- (void)_showHiddenStackedAlertControllers;	// IMP=0x000000000007312a
- (void)_hideStackedAlertControllers;	// IMP=0x0000000000072ebf
- (void)_alertControllerDidDisappear:(id)arg1;	// IMP=0x0000000000072e5c
- (void)_alertControllerWillDisappear:(id)arg1;	// IMP=0x0000000000072d69
- (void)_alertControllerDidAppear:(id)arg1;	// IMP=0x0000000000072d63
- (void)_alertControllerWillAppear:(id)arg1;	// IMP=0x0000000000072cf9
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000072c5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

