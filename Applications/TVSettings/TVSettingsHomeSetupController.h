//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINavigationController, UIViewController;

@interface TVSettingsHomeSetupController : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    UIViewController *_roomPickerInitialViewController;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ed4ba
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *roomPickerInitialViewController; // @synthesize roomPickerInitialViewController=_roomPickerInitialViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)_makeRoomPickerViewControllerWithHome:(id)arg1;	// IMP=0x00100000000ed3e5
- (id)_makeHomePickerViewController;	// IMP=0x00100000000ed3ad
- (id)_makeRoomPickerViewController;	// IMP=0x00100000000ed0bf
- (void)wholeHomeAudioSetupViewControllerDidTransitionToUnconfiguredWithLocalAccessoryState:(id)arg1;	// IMP=0x00100000000ed00d
- (void)wholeHomeAudioSetupViewControllerDidTransitionToConfiguredState:(id)arg1;	// IMP=0x00100000000ecfd5
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x00100000000ecf3a
- (void)roomPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000ece65
- (void)pushRoomPickerFromInitialViewController:(id)arg1;	// IMP=0x00100000000ecdc1
- (void)startSetupWithType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000ecc96

@end

