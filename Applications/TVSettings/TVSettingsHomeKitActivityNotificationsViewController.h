//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsHomeKitCameraProfile;

@interface TVSettingsHomeKitActivityNotificationsViewController : TSKViewController
{
    TVSettingsHomeKitCameraProfile *_cameraProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000035aea
@property(readonly, nonatomic) TVSettingsHomeKitCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)alertTitleForEventType:(unsigned long long)arg1;	// IMP=0x0010000000035a96
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000035a43
- (void)_toggledSignificantEventType:(id)arg1;	// IMP=0x00100000000357dc
- (void)_selectedItem:(id)arg1;	// IMP=0x0010000000035524
- (id)loadSettingGroups;	// IMP=0x0010000000034da6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000034d1e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000034c90
- (id)title;	// IMP=0x0010000000034c7f
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x0010000000034c11

@end

