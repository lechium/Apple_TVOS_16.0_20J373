//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKVersioning)
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;	// IMP=0x00100000000e23fd
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000e1b85
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000e195b
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;	// IMP=0x00100000000e1843
+ (id)_gkPreferredSystemLanguage;	// IMP=0x00100000000e0c73
+ (id)_gkBundleIdentifierOrProcessNameForPID:(int)arg1;	// IMP=0x00100000000e00ff
+ (id)_gkBundleWithPID:(int)arg1;	// IMP=0x00100000000dff59
+ (id)_gkBundleWithIdentifier:(id)arg1;	// IMP=0x00100000000dfeb3
- (id)_gkFrameworkVersionDescription;	// IMP=0x0020000000087a63
- (_Bool)_gkIsPurpleBuddy;	// IMP=0x00100000000e23af
- (_Bool)_gkIsDaemon;	// IMP=0x00100000000e2361
- (_Bool)_gkIsContacts;	// IMP=0x00100000000e21e2
- (_Bool)_gkIsFirstParty;	// IMP=0x00100000000e1ff7
- (_Bool)_gkIsPreferences;	// IMP=0x00100000000e1eab
- (_Bool)_gkIsGameCenterExtension;	// IMP=0x00100000000e1d61
- (_Bool)_gkIsGameCenter;	// IMP=0x00100000000e1d13
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;	// IMP=0x00100000000e1693
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;	// IMP=0x00100000000e1681
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x00100000000e0d6f
- (id)_gkLocalizedName;	// IMP=0x00100000000e0bc0
- (id)_gkBundleShortVersion;	// IMP=0x00100000000e0b69
- (id)_gkBundleVersion;	// IMP=0x00100000000e0b0f
- (id)_gkPathForChallengeSound;	// IMP=0x00100000000e0af6
- (id)_gkPathForInviteSound;	// IMP=0x00100000000e0add
- (id)_gkPathForMessageImage;	// IMP=0x00100000000e0ac4
- (id)_gkPathForImageWithName:(id)arg1;	// IMP=0x00100000000e0aab
- (id)_gkPathForSoundWithName:(id)arg1;	// IMP=0x00100000000e0a04
- (_Bool)_gkIsBadgingEnabled;	// IMP=0x00100000000e098b
- (_Bool)_gkIsGameCenterEnabled;	// IMP=0x00100000000e0065
@end
