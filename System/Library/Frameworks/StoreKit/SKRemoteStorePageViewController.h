//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStorePageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController
{
    SKStorePageViewController *_storePageViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x001000000003616f
+ (id)exportedInterface;	// IMP=0x001000000003614f
- (void).cxx_destruct;	// IMP=0x00000000000361bc
@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;
- (void)showProductPageWithItemIdentifier:(id)arg1;	// IMP=0x00000000000360dd
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000036057

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

