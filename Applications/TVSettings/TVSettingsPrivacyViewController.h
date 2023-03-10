//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@interface TVSettingsPrivacyViewController : TSKViewController
{
    _Bool _diagnosticIdentifierVisible;	// 8 = 0x8
    _Bool _runningSysdiagnose;	// 9 = 0x9
}

@property(nonatomic) _Bool runningSysdiagnose; // @synthesize runningSysdiagnose=_runningSysdiagnose;
@property(nonatomic) _Bool diagnosticIdentifierVisible; // @synthesize diagnosticIdentifierVisible=_diagnosticIdentifierVisible;
- (void)_updateSendDataItem:(id)arg1 value:(id)arg2;	// IMP=0x0010000000099b66
- (id)_locationServicesViewController;	// IMP=0x0010000000099a4d
- (void)_generateSysdiagnose:(id)arg1;	// IMP=0x0010000000099a47
- (void)showSendDataDialog:(id)arg1;	// IMP=0x001000000009976d
- (void)showAppAnalyticsDialog:(id)arg1;	// IMP=0x0010000000099493
- (void)showProfileViewController:(id)arg1;	// IMP=0x001000000009939a
- (void)toggleShowDiagnosticIdentifier:(id)arg1;	// IMP=0x001000000009937d
- (void)internetAvailabilityChanged:(id)arg1;	// IMP=0x001000000009936b
- (id)loadSettingGroups;	// IMP=0x0010000000098477
- (void)dealloc;	// IMP=0x0010000000098402
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000009836e

@end

