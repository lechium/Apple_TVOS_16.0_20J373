//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedAccessView : UIView
{
    UIView *_backgroundView;	// 176 = 0xb0
    UILabel *_keyboardLimitedLabel;	// 184 = 0xb8
    UIButton *_backButton;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000cc4e26
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000cc4dc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000cc44be

@end

