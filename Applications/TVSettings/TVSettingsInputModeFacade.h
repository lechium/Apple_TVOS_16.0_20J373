//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVCSPreferredLanguagesManager;

@interface TVSettingsInputModeFacade : NSObject
{
    NSString *_languageIdentifier;	// 8 = 0x8
    NSArray *_allInputModeIdentifiers;	// 16 = 0x10
    NSArray *_enabledInputModeIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ca87e
@property(readonly, nonatomic) NSArray *enabledInputModeIdentifiers; // @synthesize enabledInputModeIdentifiers=_enabledInputModeIdentifiers;
@property(readonly, nonatomic) NSArray *allInputModeIdentifiers; // @synthesize allInputModeIdentifiers=_allInputModeIdentifiers;
@property(readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
- (void)_resetStateFromPreferences;	// IMP=0x00100000000ca791
- (void)commitChanges;	// IMP=0x00100000000ca6dc
- (void)toggleInputModeEnabled:(id)arg1;	// IMP=0x00100000000ca617
- (_Bool)isInputModeEnabled:(id)arg1;	// IMP=0x00100000000ca601
@property(readonly, nonatomic) TVCSPreferredLanguagesManager *preferredLanguagesManager;
- (id)initWithLangauge:(id)arg1;	// IMP=0x00100000000ca56d

@end
