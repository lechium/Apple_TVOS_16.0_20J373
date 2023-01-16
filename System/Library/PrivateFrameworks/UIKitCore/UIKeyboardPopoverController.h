//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardPopoverController : UIViewController
{
    UIView *_contentView;	// 8 = 0x8
    struct CGSize _contentSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010e7a35
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000010e79d8
- (long long)overrideUserInterfaceStyle;	// IMP=0x00000000010e79d0
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;	// IMP=0x00000000010e79c8
- (struct CGSize)preferredContentSize;	// IMP=0x00000000010e79b0
- (void)viewDidLoad;	// IMP=0x00000000010e7549
- (_Bool)isPresented;	// IMP=0x00000000010e74f9
- (id)init;	// IMP=0x00000000010e74c6

@end

