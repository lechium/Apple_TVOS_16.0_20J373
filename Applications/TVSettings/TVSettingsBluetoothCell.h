//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKTableViewTextCell.h>

@class NSString, TVSBluetoothDevice, TVSettingsBluetoothRecognizer, UIImageView;

@interface TVSettingsBluetoothCell : TSKTableViewTextCell
{
    UIImageView *_batteryIconView;	// 8 = 0x8
    TVSettingsBluetoothRecognizer *_touchGesture;	// 16 = 0x10
    NSString *_originalText;	// 24 = 0x18
    TVSBluetoothDevice *_bluetoothDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e4ea4
@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000000e4e8b
- (void)_touchGesture:(id)arg1;	// IMP=0x00100000000e4d3c
- (void)_updateBatteryImage;	// IMP=0x00100000000e4b77
- (void)_enableTouchGestureIfPossible;	// IMP=0x00100000000e4add
- (void)_updateAccessoryTintColor;	// IMP=0x00100000000e4988
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000e492c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00100000000e4860
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000e4799
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000000e46d9
- (void)layoutSubviews;	// IMP=0x00100000000e42f4
- (void)prepareForReuse;	// IMP=0x00100000000e415e
- (void)dealloc;	// IMP=0x00100000000e411e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000e3fad

@end
