//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VSSpinnerTitleView : UIView
{
    UILabel *_titleView;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000180ac
- (void)didMoveToWindow;	// IMP=0x0000000000018048
- (void)layoutSubviews;	// IMP=0x0000000000017e48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000017c84
- (void)dealloc;	// IMP=0x0000000000017c3b
- (id)initWithTitle:(id)arg1;	// IMP=0x0000000000017abe

@end

