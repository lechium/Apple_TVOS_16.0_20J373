//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSProgress, _UICircleProgressView;

__attribute__((visibility("hidden")))
@interface _UIProgressView : UIView
{
    _UICircleProgressView *_progressView;	// 8 = 0x8
    NSProgress *_trackedProgress;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000513c50
@property(retain, nonatomic) NSProgress *trackedProgress; // @synthesize trackedProgress=_trackedProgress;
- (void)_updateProgressValue;	// IMP=0x0000000000513bf7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000513b82
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000513ac0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005139b5
- (void)dealloc;	// IMP=0x000000000051395d
- (id)init;	// IMP=0x000000000051391f

@end

