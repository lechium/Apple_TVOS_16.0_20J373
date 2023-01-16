//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UINavigationController;
@protocol UIViewControllerAnimatedTransitioning;

@interface SRBarSlideNavigationTransitionController : NSObject
{
    long long _operation;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005de6
@property(nonatomic, getter=_navigationController, setter=_setNavigationController:) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id)arg1;	// IMP=0x0010000000005c0a
- (void)configureWithNavigationController:(id)arg1;	// IMP=0x0010000000005b91

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

