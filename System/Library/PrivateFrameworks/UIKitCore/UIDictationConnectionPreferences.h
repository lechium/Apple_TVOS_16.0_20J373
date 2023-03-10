//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0060000000989612
- (void).cxx_destruct;	// IMP=0x000000000098a29b
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (_Bool)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)arg1;	// IMP=0x000000000098a027
- (_Bool)isOnDeviceDictationSupportAvailableForLanguage:(id)arg1;	// IMP=0x0000000000989cae
- (_Bool)isSmartLanguageSelectionEnabled;	// IMP=0x0000000000989c6e
- (id)getOfflineDictationStatusForLanguage:(id)arg1;	// IMP=0x0000000000989a3a
- (id)dictationSLSEnabledLanguages;	// IMP=0x0000000000989a24
- (void)afPreferencesChanged:(id)arg1;	// IMP=0x000000000098996a
- (id)languageCode;	// IMP=0x0000000000989954
- (id)manualEndpointingThreshold;	// IMP=0x000000000098993e
- (_Bool)ignoreServerManualEndpointingThreshold;	// IMP=0x0000000000989928
- (_Bool)suppressDictationOptIn;	// IMP=0x0000000000989912
- (_Bool)suppressDataSharingOptIn;	// IMP=0x00000000009898fc
- (long long)dataSharingOptInStatus;	// IMP=0x00000000009898e6
- (_Bool)dictationIsEnabled;	// IMP=0x00000000009898d0
- (id)initSingleton;	// IMP=0x0000000000989677

@end

