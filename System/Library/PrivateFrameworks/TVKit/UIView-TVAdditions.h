//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (TVAdditions)
- (double)primaryHighlightAlphaForHighlightProgress:(double)arg1;	// IMP=0x0030000000028dd3
- (void)didSelect;	// IMP=0x0030000000028dcd
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0030000000028dbb
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0030000000028db5
@property(nonatomic, getter=isPreviewPaused) _Bool previewPaused;

// Remaining properties
@property(nonatomic) double highlightProgress;
@end

