//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLSettingsManagerInternal.h>

@interface CLDaemonSettingsManager : CLSettingsManagerInternal
{
    int _fDaemonPreferencesChangedNotificationToken;	// 8 = 0x8
    int _fMCProfileListChangedForDaemonSettingsNotificationToken;	// 12 = 0xc
}

- (void)flush;	// IMP=0x00200000001a239f
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;	// IMP=0x00100000001a22da
- (void)refresh;	// IMP=0x00100000001a2210
- (void)endService;	// IMP=0x00100000001a21a9
- (void)beginService;	// IMP=0x00100000001a2018
- (id)init;	// IMP=0x00100000001a1fdb

@end

