//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSURL, SSAccount, TVSStoreFrontLocale;

@interface TVSettingsITMSFacade : NSObject
{
    NSArray *_availableLocales;	// 8 = 0x8
    TVSStoreFrontLocale *_locale;	// 16 = 0x10
    _Bool _isManagedSubscriptionsURLLoaded;	// 24 = 0x18
    _Bool _autoDownloadApps;	// 25 = 0x19
    SSAccount *_preferredAccount;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000063b99
- (void).cxx_destruct;	// IMP=0x0020000000064e3b
@property(retain, nonatomic) SSAccount *preferredAccount; // @synthesize preferredAccount=_preferredAccount;
@property(nonatomic) _Bool autoDownloadApps; // @synthesize autoDownloadApps=_autoDownloadApps;
@property(nonatomic) _Bool isManagedSubscriptionsURLLoaded; // @synthesize isManagedSubscriptionsURLLoaded=_isManagedSubscriptionsURLLoaded;
- (void)_urlBagLoaded:(id)arg1;	// IMP=0x0010000000064da0
- (void)killStoreApps;	// IMP=0x0010000000064c27
- (void)_updateAutoDownloadApps;	// IMP=0x0010000000064b58
- (void)_updateAutoDownloadAppsPerCloudSyncPreferences;	// IMP=0x0010000000064983
- (void)_automaticDownloadKindsChangedNotification:(id)arg1;	// IMP=0x0010000000064898
- (void)_availableLocalesUpdated;	// IMP=0x001000000006481d
- (void)_localeUpdated;	// IMP=0x00100000000647a2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000646db
@property(readonly, retain, nonatomic) NSURL *manageSubscriptionsURL;
@property(readonly, copy, nonatomic) NSArray *availableLocales;
@property(retain, nonatomic) TVSStoreFrontLocale *locale;
- (void)dealloc;	// IMP=0x0010000000063de8
- (MISSING_TYPE *)init;	// IMP=0x0010000000063bee

@end
