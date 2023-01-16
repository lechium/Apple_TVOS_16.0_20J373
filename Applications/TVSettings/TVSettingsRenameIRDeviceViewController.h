//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKTextInputViewController.h>

@class NSString, NSUUID, TVSettingsRemoteConfiguration, TVSettingsRemotesFacade;

@interface TVSettingsRenameIRDeviceViewController : TSKTextInputViewController
{
    TVSettingsRemotesFacade *_remotesFacade;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    TVSettingsRemoteConfiguration *_configuration;	// 24 = 0x18
    NSUUID *_deviceUUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004f3f6
@property(retain, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) TVSettingsRemoteConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) TVSettingsRemotesFacade *remotesFacade; // @synthesize remotesFacade=_remotesFacade;
- (void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2;	// IMP=0x001000000004f32d
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x001000000004f124
- (void)viewDidLoad;	// IMP=0x001000000004f028
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000004efd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

