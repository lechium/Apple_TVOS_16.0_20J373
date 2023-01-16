//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVSettingsAudioVideoFacade : NSObject
{
    NSString *_subtitleLanguageOption;	// 8 = 0x8
    id _tvsPreferencesToken;	// 16 = 0x10
    id _appleTVServicesDomainObserver;	// 24 = 0x18
    _Bool _automaticSubtitles;	// 32 = 0x20
    _Bool _atmosEnabled;	// 33 = 0x21
    NSArray *_availableSubtitleLanguageOptions;	// 40 = 0x28
    NSArray *_availableAudioLanguageCodes;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x004000000002efea
- (void).cxx_destruct;	// IMP=0x0020000000031006
@property(nonatomic) _Bool atmosEnabled; // @synthesize atmosEnabled=_atmosEnabled;
@property(readonly, copy, nonatomic) NSArray *availableAudioLanguageCodes; // @synthesize availableAudioLanguageCodes=_availableAudioLanguageCodes;
@property(readonly, copy, nonatomic) NSArray *availableSubtitleLanguageOptions; // @synthesize availableSubtitleLanguageOptions=_availableSubtitleLanguageOptions;
@property(nonatomic) _Bool automaticSubtitles; // @synthesize automaticSubtitles=_automaticSubtitles;
@property(copy, nonatomic) NSString *subtitleLanguageOption; // @synthesize subtitleLanguageOption=_subtitleLanguageOption;
- (id)_availableDefaultAudioLanguages;	// IMP=0x00100000000309ff
- (id)_availableDefaultSubtitleLanguages;	// IMP=0x00100000000309af
- (void)_updateSelectedSubtitleOption:(_Bool)arg1;	// IMP=0x00100000000307f3
- (void)_updateAvailableSubtitleLanguageOptions:(_Bool)arg1;	// IMP=0x00100000000305c8
- (void)_updateAvailableAudioLanguageCodes:(_Bool)arg1;	// IMP=0x00100000000303d3
- (void)_updateAutomaticSubtitles;	// IMP=0x00100000000302f4
- (void)_didBecomeActive:(id)arg1;	// IMP=0x001000000003010a
- (void);	// IMP=0x001000000002fe67
@property(nonatomic) _Bool videoTapToZoomEnabled;
@property(nonatomic) _Bool highQualityAudioEnabled;
@property(nonatomic) _Bool audioFormatConversionEnabled;
@property(readonly, nonatomic) _Bool atmosAvailable;
@property(nonatomic) _Bool transitionSoundsAndPreviewAudioEnabled;
@property(nonatomic) _Bool navigationSoundEffectsEnabled;
- (void)dealloc;	// IMP=0x001000000002f2fe
- (id)init;	// IMP=0x001000000002f03f

@end

