//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@interface _PBAppSwitcherCollectionView : UICollectionView
{
    struct CGPoint _lastContentOffset;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x00100000001355ae
- (void)_updateForReducedMotionPeek:(double)arg1;	// IMP=0x0010000000135567
- (void)_updateLastContentOffset;	// IMP=0x0010000000135537
- (_Bool)_isFocusDirectionFlippedHorizontally;	// IMP=0x001000000013552f

@end

