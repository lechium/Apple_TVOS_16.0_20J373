//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIWindowAnimationController : NSObject
{
    _Bool _shouldCrossfade;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

+ (id)animationControllerWithWindow:(id)arg1;	// IMP=0x001000000051602f
@property(nonatomic) _Bool shouldCrossfade; // @synthesize shouldCrossfade=_shouldCrossfade;
@property(nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000516ac7
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005168cc
- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000051610e
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000516100
- (id)initWithWindow:(id)arg1;	// IMP=0x0000000000516080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
