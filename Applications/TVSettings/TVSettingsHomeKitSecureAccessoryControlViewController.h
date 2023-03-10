//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsUserProfileListFacade;

@interface TVSettingsHomeKitSecureAccessoryControlViewController : TSKViewController
{
    TVSettingsUserProfileListFacade *_userProfilesFacade;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008c82f
@property(retain, nonatomic) TVSettingsUserProfileListFacade *userProfilesFacade; // @synthesize userProfilesFacade=_userProfilesFacade;
- (void)_selectedAllowedRemotes:(long long)arg1;	// IMP=0x001000000008c7a6
- (void)_selectedItem:(id)arg1;	// IMP=0x001000000008c3e3
- (id)loadSettingGroups;	// IMP=0x001000000008c02f
- (id)title;	// IMP=0x001000000008c01e
- (id)init;	// IMP=0x001000000008bfc1

@end

