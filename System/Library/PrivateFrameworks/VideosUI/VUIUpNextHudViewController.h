//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface VUIUpNextHudViewController : UIViewController
{
    int _tabIndex;	// 8 = 0x8
    UIViewController *_upNextViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aaab5
@property(nonatomic) int tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) UIViewController *upNextViewController; // @synthesize upNextViewController=_upNextViewController;
- (void)_addUpNextViewControllerToHud;	// IMP=0x00000000000aa89d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000aa844
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000aa833
- (id)init;	// IMP=0x00000000000aa7d0

@end
