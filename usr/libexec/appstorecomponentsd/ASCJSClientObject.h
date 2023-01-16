//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface ASCJSClientObject : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    ACAccount *_activeiTunesAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000c174
@property(retain) ACAccount *activeiTunesAccount; // @synthesize activeiTunesAccount=_activeiTunesAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (_Bool)isAutomaticDownloadingEnabled;	// IMP=0x001000000000c0cd
- (_Bool)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1;	// IMP=0x001000000000c0c5
- (id)isPairedSystemVersionAtLeast:(id)arg1;	// IMP=0x001000000000c033
- (_Bool)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;	// IMP=0x001000000000c02b
- (_Bool)deviceHasCapabilities:(id)arg1;	// IMP=0x001000000000c009
@property(readonly) _Bool supportsHEIF;
@property(readonly) _Bool isTinkerWatch;
@property(readonly) _Bool isSidepackingEnabled;
@property(readonly) _Bool isElectrocardiogramInstallationAllowed;
@property(readonly) _Bool isActivityAvailable;
@property(readonly) NSString *buildType;
@property(readonly) NSString *deviceType;
@property(readonly) _Bool newPaymentMethodEnabled;
@property(readonly, copy) NSString *storefrontIdentifier;
@property(readonly, copy) NSString *guid;
@property(readonly) double screenCornerRadius;
@property(readonly) struct CGSize screenSize;
@property(readonly, copy) NSString *activePairedWatchSystemVersion;
@property(readonly, copy) NSString *thinnedApplicationVariantIdentifier;
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x001000000000bdd1
- (void)dealloc;	// IMP=0x001000000000bd5c
- (id)initWithAccountStore:(id)arg1;	// IMP=0x001000000000bc71

@end

