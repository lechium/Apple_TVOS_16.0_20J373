//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PBSControlCenterOverlayAssertion;
@protocol TVNPShareAudioMainViewControllerDelegate;

@interface TVNPShareAudioMainViewController : UIViewController
{
    id <TVNPShareAudioMainViewControllerDelegate> _delegate;	// 8 = 0x8
    PBSControlCenterOverlayAssertion *_overlayAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000042170
@property(readonly, nonatomic) PBSControlCenterOverlayAssertion *overlayAssertion; // @synthesize overlayAssertion=_overlayAssertion;
@property(nonatomic) __weak id <TVNPShareAudioMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)requiresOverlayAssertion;	// IMP=0x0010000000042050
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000041fb0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000041f10
- (void)dealloc;	// IMP=0x0010000000041ed0
- (void)viewDidLoad;	// IMP=0x0010000000041e30

@end

