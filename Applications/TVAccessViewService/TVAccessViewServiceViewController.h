//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, VUIAccessViewController;

@interface TVAccessViewServiceViewController : UIViewController
{
    VUIAccessViewController *_accessViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x002000000000211b
+ (id)_exportedInterface;	// IMP=0x0010000000002017
- (void).cxx_destruct;	// IMP=0x00200000000021fd
- (void)_menuPressed:(id)arg1;	// IMP=0x00100000000021b9
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002000
- (void)viewServiceUpdatePresentationWithOptions:(id)arg1;	// IMP=0x0010000000001ffa
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000001c99
- (void)viewDidLoad;	// IMP=0x0010000000001be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
