//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VUIAlertController : UIAlertController
{
    NSMutableArray *_alertActions;	// 8 = 0x8
}

+ (id)vui_alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;	// IMP=0x00600000001b595b
- (void).cxx_destruct;	// IMP=0x00000000001b5e9f
@property(retain, nonatomic) NSMutableArray *alertActions; // @synthesize alertActions=_alertActions;
- (void)vui_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5db0
- (void)vui_presentAlertFromPresentingController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b5bd9
- (void)vui_addAction:(id)arg1;	// IMP=0x00000000001b5bc5
- (void)vui_addAction:(id)arg1 isPreferred:(_Bool)arg2;	// IMP=0x00000000001b596d

@end

