//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBluetoothItem
{
    _UIStatusBarImageView *_batteryImageView;	// 8 = 0x8
}

+ (_Bool)alwaysShowRegulatoryBluetoothIndicator;	// IMP=0x0040000000d25756
+ (id)batteryDisplayIdentifier;	// IMP=0x0040000000d256a6
- (void).cxx_destruct;	// IMP=0x0000000000d261f6
@property(retain, nonatomic) _UIStatusBarImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000d26138
- (void)_create_batteryImageView;	// IMP=0x0000000000d260de
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;	// IMP=0x0000000000d25fe3
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000d25799
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000d256d3
- (id)indicatorEntryKey;	// IMP=0x0000000000d256bf

@end

