//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface PBNavigationController : UINavigationController
{
    CDUnknownBlockType _dismissLastViewControllerBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d32d6
@property(copy, nonatomic) CDUnknownBlockType dismissLastViewControllerBlock; // @synthesize dismissLastViewControllerBlock=_dismissLastViewControllerBlock;
- (id)_lastViewController;	// IMP=0x00100000000d3234
- (void)_delegateDidDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3111
- (void)removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d301e
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2edb

@end

