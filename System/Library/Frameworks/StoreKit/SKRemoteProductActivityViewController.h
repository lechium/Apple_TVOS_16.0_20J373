//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStoreProductActivityViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductActivityViewController : _UIRemoteViewController
{
    SKStoreProductActivityViewController *_productActivityViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x00100000000363f9
+ (id)exportedInterface;	// IMP=0x00100000000363d9
- (void).cxx_destruct;	// IMP=0x0000000000036446
@property(nonatomic) __weak SKStoreProductActivityViewController *productActivityViewController; // @synthesize productActivityViewController=_productActivityViewController;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000003633b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

