//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationContainerView
{
    long long _activeDropAnimationCount;	// 176 = 0xb0
    double _originalTargetCenterY;	// 184 = 0xb8
    struct CGPoint __tableViewContainerOffsetFromTargetCenter;	// 192 = 0xc0
}

@property(nonatomic) double originalTargetCenterY; // @synthesize originalTargetCenterY=_originalTargetCenterY;
@property(nonatomic) long long activeDropAnimationCount; // @synthesize activeDropAnimationCount=_activeDropAnimationCount;
@property(nonatomic) struct CGPoint _tableViewContainerOffsetFromTargetCenter; // @synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter;
@property(readonly, nonatomic) _Bool hasCompletedAllDropAnimations;
- (void)endDropAnimation;	// IMP=0x0000000000eb0dbd
- (void)beginDropAnimation;	// IMP=0x0000000000eb0b99
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000eb0b58
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000eb0b06
- (void)updateOffsetFromTargetCenterIfNeeded;	// IMP=0x0000000000eb0a9d
@property(readonly, nonatomic) NSArray *cells;
- (id)init;	// IMP=0x0000000000eb085e

@end

