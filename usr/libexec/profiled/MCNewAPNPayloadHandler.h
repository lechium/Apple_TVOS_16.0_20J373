//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewAPNPayloadHandler
{
}

- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00400000000403ec
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00100000000403da
- (void)_sendNotifications;	// IMP=0x00100000000402d2
- (void)unsetAside;	// IMP=0x0010000000040266
- (void)setAside;	// IMP=0x00100000000401fa
- (void)remove;	// IMP=0x0010000000040138
- (void)_remove;	// IMP=0x0010000000040074
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000003fd6c
- (_Bool)_hasAPNManagedPreferences;	// IMP=0x001000000003fcdc
- (_Bool)_install;	// IMP=0x001000000003fc36
- (void)_notifyCoreTelephonyOfAPNChange;	// IMP=0x001000000003fb74

@end

