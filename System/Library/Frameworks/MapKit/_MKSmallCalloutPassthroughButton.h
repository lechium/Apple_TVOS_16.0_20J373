//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : UIControl
{
    UIControl *_targetControl;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020ad60
@property(retain, nonatomic) UIControl *targetControl; // @synthesize targetControl=_targetControl;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000020ab10
- (void)handleTap:(id)arg1;	// IMP=0x000000000020aaee
- (_Bool)canBecomeFocused;	// IMP=0x000000000020aae6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000020aa67

@end

