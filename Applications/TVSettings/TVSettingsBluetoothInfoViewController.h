//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsBluetoothInfoViewController : TSKViewController
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
    TSKSettingItem *_pivotItem;	// 24 = 0x18
    TSKSettingItem *_soundProfileItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000827f5
@property(readonly, nonatomic) TSKSettingItem *soundProfileItem; // @synthesize soundProfileItem=_soundProfileItem;
@property(readonly, nonatomic) TSKSettingItem *pivotItem; // @synthesize pivotItem=_pivotItem;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (_Bool)_shouldShowSpatialAudioSettings;	// IMP=0x00100000000826ff
- (id)_bluetoothDevice;	// IMP=0x001000000008265f
- (void)showSpatialTutorial;	// IMP=0x00100000000822a3
- (void)_connectDevice:(id)arg1;	// IMP=0x0010000000082213
- (void)_unpairDevice:(id)arg1;	// IMP=0x0010000000081e6f
- (void)_disconnectDevice:(id)arg1;	// IMP=0x0010000000081ddf
- (void)_toggleSpatialAudio:(id)arg1;	// IMP=0x0010000000081be3
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000081a43
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000818ac
- (id)loadSettingGroups;	// IMP=0x0010000000080650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

