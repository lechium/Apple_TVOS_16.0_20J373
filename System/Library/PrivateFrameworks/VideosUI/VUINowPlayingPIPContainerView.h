//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VUIMediaController, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface VUINowPlayingPIPContainerView : UIView
{
    VUIMediaController *_mediaController;	// 8 = 0x8
    CDUnknownBlockType _selectHandler;	// 16 = 0x10
    _UIFloatingContentView *_floatingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005e7cd
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
@property(retain, nonatomic) VUIMediaController *mediaController; // @synthesize mediaController=_mediaController;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e611
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e50a
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e3ff
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000005e351
- (unsigned long long)_floatingViewControlState;	// IMP=0x000000000005dec4
- (void)layoutSubviews;	// IMP=0x000000000005de2a
- (_Bool)canBecomeFocused;	// IMP=0x000000000005de22
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005dc8c

@end

