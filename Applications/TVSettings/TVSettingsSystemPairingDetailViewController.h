//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsSystemPairingsPairing;

@interface TVSettingsSystemPairingDetailViewController : TSKViewController
{
    TVSettingsSystemPairingsPairing *_device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000360d5
@property(retain, nonatomic) TVSettingsSystemPairingsPairing *device; // @synthesize device=_device;
- (void)unpairDevice:(id)arg1;	// IMP=0x0010000000035cd2
- (id)loadSettingGroups;	// IMP=0x0010000000035afd

@end

