//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, TTSVoiceAsset;

@interface VOTActiveSiriVoiceManager : NSObject
{
    NSLock *_cachedSiriVoiceLock;	// 8 = 0x8
    TTSVoiceAsset *_cachedSiriVoiceAsset;	// 16 = 0x10
    int _gryphonInstallNotifyToken;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000c50e5
- (void).cxx_destruct;	// IMP=0x00200000000c5842
- (id)siriVoiceIdentifierForLanguage:(id)arg1;	// IMP=0x00100000000c544b
- (void)_handleSiriVoiceUpdate;	// IMP=0x00100000000c53a8
- (void)_deregisterForNotifications;	// IMP=0x00100000000c536c
- (void)_registerForNotifications;	// IMP=0x00100000000c521e
- (void)dealloc;	// IMP=0x00100000000c51e0
- (id)_init;	// IMP=0x00100000000c517a

@end

