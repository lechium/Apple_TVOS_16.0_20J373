//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDataStorage, NSDictionary, NSString, TVApplicationControllerContext, UIViewController, UIWindow;
@protocol TVAppRootViewController, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface _TVMLKitApplication : NSObject
{
    _Bool _headless;	// 8 = 0x8
    TVApplicationControllerContext *_launchContext;	// 16 = 0x10
    IKAppDataStorage *_localDataStorage;	// 24 = 0x18
    UIViewController<TVAppRootViewController> *_appRootViewController;	// 32 = 0x20
    UIWindow *_keyWindow;	// 40 = 0x28
    id <UITraitEnvironment> _keyTraitEnvironment;	// 48 = 0x30
    NSDictionary *_javaScriptLaunchOptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000011c5f8
@property(nonatomic) _Bool headless; // @synthesize headless=_headless;
@property(copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // @synthesize javaScriptLaunchOptions=_javaScriptLaunchOptions;
@property(nonatomic) __weak id <UITraitEnvironment> keyTraitEnvironment; // @synthesize keyTraitEnvironment=_keyTraitEnvironment;
@property(nonatomic) __weak UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) __weak UIViewController<TVAppRootViewController> *appRootViewController; // @synthesize appRootViewController=_appRootViewController;
@property(nonatomic) __weak IKAppDataStorage *localDataStorage; // @synthesize localDataStorage=_localDataStorage;
@property(nonatomic) __weak TVApplicationControllerContext *launchContext; // @synthesize launchContext=_launchContext;
- (id)appTraitCollection;	// IMP=0x000000000011c01b
- (_Bool)appIsPrivileged;	// IMP=0x000000000011bfd0
- (_Bool)appIsTrusted;	// IMP=0x000000000011bf85
- (id)userDefaultsStorage;	// IMP=0x000000000011bf6c
- (id)vendorStorage;	// IMP=0x000000000011bf64
- (id)vendorIdentifier;	// IMP=0x000000000011bf5c
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x000000000011bf54
- (id)localStorage;	// IMP=0x000000000011bf42
- (id)appLaunchParams;	// IMP=0x000000000011bdb2
- (id)bagBootURLKey;	// IMP=0x000000000011bd6f
- (id)offlineJSURL;	// IMP=0x000000000011bd2c
- (id)appJSCachePath;	// IMP=0x000000000011bce9
- (id)appLocalJSURL;	// IMP=0x000000000011bca6
- (id)appJSURL;	// IMP=0x000000000011bc63
- (id)appIdentifier;	// IMP=0x000000000011bc0c
- (id)activeDocument;	// IMP=0x000000000011bb79
@property(readonly, nonatomic) _Bool supportsPictureInPicturePlayback;
- (id)initWithLaunchContext:(id)arg1;	// IMP=0x000000000011bada

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

