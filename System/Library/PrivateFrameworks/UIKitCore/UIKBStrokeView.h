//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBStrokeView : UIView
{
    NSMutableArray *_points;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000098204b
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000981980
- (void)resetStrokePoints;	// IMP=0x0000000000981947
- (void)addStrokePoint:(struct CGPoint)arg1 withTimestamp:(double)arg2;	// IMP=0x00000000009818be
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000981800

@end
