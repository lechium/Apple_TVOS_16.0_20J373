//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup
{
    NSArray *_stablePlacements;	// 8 = 0x8
    NSArray *_unstablePlacements;	// 16 = 0x10
    _UIStatusBarDisplayItemPlacement *_bluetoothInsetPaddingItem;	// 24 = 0x18
}

+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3;	// IMP=0x0040000000d390a7
+ (id)activityItemDisplayIdentifier;	// IMP=0x0040000000d3908e
- (void).cxx_destruct;	// IMP=0x0000000000d39842
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacement *bluetoothInsetPaddingItem; // @synthesize bluetoothInsetPaddingItem=_bluetoothInsetPaddingItem;
@property(readonly, copy, nonatomic) NSArray *unstablePlacements; // @synthesize unstablePlacements=_unstablePlacements;
@property(readonly, copy, nonatomic) NSArray *stablePlacements; // @synthesize stablePlacements=_stablePlacements;

@end

