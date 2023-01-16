//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXIndexMap, AXSSPunctuationGroup, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SCRCTargetSelectorTimer, SCRCThread, TTSSpeechSynthesizer;
@protocol BSInvalidatable;

@interface VOTOutputSpeechComponent
{
    SCRCThread *_speechThread;	// 24 = 0x18
    AXIndexMap *_allPunctuationTable;	// 32 = 0x20
    AXIndexMap *_selectedLanguageAllPunctuationTable;	// 40 = 0x28
    AXIndexMap *_somePunctuationTable;	// 48 = 0x30
    AXIndexMap *_selectedLanguageSomePunctuationTable;	// 56 = 0x38
    AXIndexMap *_noPunctuationTable;	// 64 = 0x40
    AXIndexMap *_selectedLanguageNoPunctuationTable;	// 72 = 0x48
    AXIndexMap *_specialPunctionTable;	// 80 = 0x50
    AXIndexMap *_noneTableOverrides;	// 88 = 0x58
    NSString *_spokenLanguage;	// 96 = 0x60
    NSDictionary *_languageExceptions;	// 104 = 0x68
    _Bool _isSpeaking;	// 112 = 0x70
    _Bool _userStopped;	// 113 = 0x71
    _Bool _isPaused;	// 114 = 0x72
    _Bool _isVolumeCapped;	// 115 = 0x73
    float _rawVolume;	// 116 = 0x74
    NSMutableDictionary *_speechStatistics;	// 120 = 0x78
    double _lastTimeSpeechStarted;	// 128 = 0x80
    AXIndexMap *_currentActionVariants;	// 136 = 0x88
    id _currentRequest;	// 144 = 0x90
    NSArray *_userSubstitutions;	// 152 = 0x98
    NSArray *_transientSubstitutions;	// 160 = 0xa0
    SCRCTargetSelectorTimer *_stopSpeakingAfterLongPauseTimer;	// 168 = 0xa8
    unsigned long long _lastSetOptions;	// 176 = 0xb0
    AXSSPunctuationGroup *_fileSystemPunctuationGroup;	// 184 = 0xb8
    NSMutableDictionary *_cachedUtterances;	// 192 = 0xc0
    unsigned int _playingSoundID;	// 200 = 0xc8
    NSString *_lastSelectedLanguage;	// 208 = 0xd0
    NSMutableDictionary *_punctuationFallbacks;	// 216 = 0xd8
    TTSSpeechSynthesizer *_synthesizer;	// 224 = 0xe0
    NSDictionary *_emoticonReplacements;	// 232 = 0xe8
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 240 = 0xf0
    NSNumber *_activityBasedAudioDucking;	// 248 = 0xf8
    TTSSpeechSynthesizer *_synthesizerForTelephonyMixin;	// 256 = 0x100
}

+ (void)_setOverrideLocale:(id)arg1;	// IMP=0x0020000000034601
- (void).cxx_destruct;	// IMP=0x0020000000044f26
@property(retain, nonatomic) TTSSpeechSynthesizer *synthesizerForTelephonyMixin; // @synthesize synthesizerForTelephonyMixin=_synthesizerForTelephonyMixin;
@property(retain, nonatomic) NSNumber *activityBasedAudioDucking; // @synthesize activityBasedAudioDucking=_activityBasedAudioDucking;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) NSDictionary *emoticonReplacements; // @synthesize emoticonReplacements=_emoticonReplacements;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property(readonly, nonatomic) TTSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void)setShouldOutputToHearingAid:(_Bool)arg1;	// IMP=0x0010000000044e3f
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x0010000000044dd6
- (void)_didFinishSpeaking:(id)arg1;	// IMP=0x0010000000044b61
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;	// IMP=0x00100000000448e5
- (void)_didSynthesizeSilentlyToURL:(id)arg1 forRequest:(id)arg2;	// IMP=0x00100000000446de
- (void)speechSynthesizer:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2 forRequest:(id)arg3;	// IMP=0x001000000004469d
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;	// IMP=0x00100000000441f6
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x00100000000441b2
- (void)_didStartSpeakingAction:(id)arg1;	// IMP=0x0010000000043ee1
- (void)_uncapVolume:(float)arg1;	// IMP=0x0010000000043ea7
- (void)_capVolumeForLanguage:(id)arg1 volume:(float)arg2;	// IMP=0x0010000000043e2c
- (unsigned int)_cachedSystemSoundIDForString:(id)arg1;	// IMP=0x0010000000043ddd
- (id)_processCaptionTextForMarkup:(id)arg1 regex:(id)arg2 range:(struct _NSRange *)arg3;	// IMP=0x0010000000043b4c
- (id)_spokenTextForRequest:(id)arg1 range:(struct _NSRange *)arg2;	// IMP=0x0010000000043638
- (void)_handlePerformAction:(id)arg1;	// IMP=0x0010000000042399
- (void)_updateDuckingBasedOnActivity:(id)arg1;	// IMP=0x0010000000042251
- (double)outputMutedActivityLastToggleTime;	// IMP=0x0010000000042235
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x0010000000042220
- (id)_nextUrlForCachedSpeechSynthesis;	// IMP=0x00100000000420f0
- (void)_updatePitch:(id)arg1;	// IMP=0x0010000000041f8f
- (void)_updateActionWithCanonicalMappings:(id)arg1;	// IMP=0x0010000000041f02
- (id)_preferenceLanguageForLanguage:(id)arg1 selectedLanguage:(id)arg2;	// IMP=0x0010000000041da8
- (void)_notifyDidFinishSpeakingWithFakeRequestForEvent:(id)arg1;	// IMP=0x0010000000041cf9
- (id)stringReplacingBrailleDotRanges:(id)arg1;	// IMP=0x001000000004198f
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x00100000000418fd
- (_Bool)_processActionForLiteralEmojis:(id)arg1;	// IMP=0x00100000000416f3
- (void)preprocessAction:(id)arg1;	// IMP=0x00100000000410dc
- (void)_determineEmojiPreferenceForAction:(id)arg1;	// IMP=0x0010000000040fe0
- (void)_preprocessActionLanguageAndVoice:(id)arg1;	// IMP=0x0010000000040a0b
- (void)_configureSynthesizerWithPhonemeSubstitutionsFromAction:(id)arg1;	// IMP=0x001000000004046c
- (void)_handleAlternatePronunciation:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x001000000003ffa0
- (void)_speakAsMixOfLiteralAndNormalText:(id)arg1 withLiteralRanges:(id)arg2;	// IMP=0x001000000003fafd
- (void)_speakAsNormalText:(id)arg1;	// IMP=0x001000000003fa23
- (id)_stringForNormalText:(id)arg1 action:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 ignoreLeadingCommas:(_Bool)arg4;	// IMP=0x001000000003ecb1
- (float)_determineSpeakingRate:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000003eb0c
- (float)_determineVolume:(id)arg1;	// IMP=0x001000000003e910
- (void)_replaceUserSubstitutions:(id)arg1 action:(id)arg2;	// IMP=0x001000000003e538
- (_Bool)_makeSubstitution:(id)arg1 withString:(id)arg2 punctuationGroup:(id)arg3;	// IMP=0x001000000003e18d
- (void)_processEmoji:(id)arg1 action:(id)arg2;	// IMP=0x001000000003df65
- (void)_replaceEmoticonsWithText:(id)arg1;	// IMP=0x001000000003dc53
- (void)_removeRunsOfNewLines:(id)arg1;	// IMP=0x001000000003da9c
- (void)_replacePunctuation:(id)arg1 withAction:(id)arg2 languageCode:(id)arg3;	// IMP=0x001000000003d5bb
- (id)_urlRangesInString:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000003d123
- (id)_determinePunctuationGroupForAction:(id)arg1 isDefault:(_Bool *)arg2;	// IMP=0x001000000003ceb3
- (id)_determineVoiceIdentifier:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000003cd29
- (id)replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 replaceCommas:(_Bool)arg3 languageCode:(id)arg4;	// IMP=0x001000000003ccfc
- (id)_parseNumberInString:(id)arg1 beforeCharacterAtIndex:(long long)arg2 numberRange:(struct _NSRange *)arg3;	// IMP=0x001000000003ca50
- (_Bool)_replaceRepeatedPuntuationAndEmoji:(id)arg1 newString:(id)arg2 charReplacementString:(id)arg3 charSequence:(id)arg4 charIndex:(long long *)arg5 speakPunctuationCounts:(_Bool)arg6 languageCode:(id)arg7;	// IMP=0x001000000003c672
- (void);	// IMP=0x001000000003c130
- (id)_replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 hasMathContext:(_Bool)arg3 hasPhoneContext:(_Bool)arg4 isText:(_Bool)arg5 replaceCommas:(_Bool)arg6 languageCode:(id)arg7 speakPunctuationCounts:(_Bool)arg8;	// IMP=0x001000000003a8b1
- (id)baseTableForPunctuationGroup:(id)arg1;	// IMP=0x001000000003a796
- (id)punctuationReplacement:(id)arg1 withGroup:(id)arg2 baseTable:(id)arg3 languageCode:(id)arg4 selectedLanguage:(id)arg5 spokenLanguage:(id)arg6;	// IMP=0x001000000003a258
- (id)fileSystemPunctuationGroup;	// IMP=0x001000000003a0c4
- (void)_applyTextualWorkarounds:(id)arg1;	// IMP=0x001000000003a0be
- (void)_speakAsPhoneticText:(id)arg1;	// IMP=0x001000000003a05c
- (void)_speakAsLiteralText:(id)arg1;	// IMP=0x0010000000039f50
- (id)_stringForLiteralText:(id)arg1 action:(id)arg2 allowChangingLanguageForPunctuation:(_Bool)arg3;	// IMP=0x0010000000039a4a
- (id)_literalStringMarkupForString:(id)arg1 languageCode:(id)arg2 action:(id)arg3;	// IMP=0x001000000003992f
- (void)_appendLiteralCharacterString:(id)arg1 toString:(id)arg2 hasPhoneContext:(_Bool)arg3 hasMathContext:(_Bool)arg4 action:(id)arg5 punctuationTableLanguageUsed:(_Bool *)arg6;	// IMP=0x0010000000038d21
- (void)_formatTimeDuration:(id)arg1 didMatch:(_Bool *)arg2 voiceIdentifier:(id)arg3;	// IMP=0x00100000000381c8
- (void)_formatExplicitTimeDuration:(id)arg1 isMMSS:(_Bool)arg2 languageCode:(id)arg3;	// IMP=0x0010000000037daa
- (void)_formatIPAddress:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x0010000000037739
- (void)_formatATVStyleMediaDurations:(id)arg1;	// IMP=0x0010000000037410
- (void)_formatUSHeight:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x0010000000036f19
- (void)_formatNumbers:(id)arg1 action:(id)arg2;	// IMP=0x0010000000036b12
- (void)_formatEthernetMacAddress:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x001000000003675b
- (void)_applyTransliteration:(id)arg1 languageCode:(id)arg2;	// IMP=0x0010000000036629
- (void)_formatJapaneseYen:(id)arg1;	// IMP=0x00100000000363c4
- (void)_formatDetectedDates:(id)arg1 voiceIdentifier:(id)arg2 languageCode:(id)arg3;	// IMP=0x0010000000035c47
- (_Bool)_formatDetectedFinnishDates:(id)arg1;	// IMP=0x001000000003575d
- (void)_formatTelephoneNumber:(id)arg1 languageCode:(id)arg2 voiceIdentifier:(id)arg3;	// IMP=0x00100000000355d9
- (void)_applyTelephoneFormatting:(id)arg1 withRanges:(id)arg2 languageCode:(id)arg3 voiceIdentifier:(id)arg4;	// IMP=0x0010000000034e0b
- (void)_applyCamelCaseSeparation:(id)arg1;	// IMP=0x00100000000346ed
- (_Bool)_currentLocaleUsesSpaceAsSeparator;	// IMP=0x0010000000034615
- (void)_insertLongerPausesForSymbol:(id)arg1 withText:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 onlyApplyWhenFollowedBySpace:(_Bool)arg4 languageCode:(id)arg5 voiceIdentifier:(id)arg6;	// IMP=0x0010000000033494
- (id)pauseStringForType:(int)arg1 voiceIdentifier:(id)arg2;	// IMP=0x001000000003329d
- (long long)_ttsVoiceTypeForPauseCalculationWithVoiceIdentifier:(id)arg1;	// IMP=0x00100000000331a3
- (float)_pauseDelayForType:(int)arg1 speechRate:(float)arg2 voiceType:(long long)arg3;	// IMP=0x001000000003317a
- (id)expectedVoiceIdentifier:(id)arg1;	// IMP=0x0010000000032905
- (_Bool)_shouldForceSiriVoice;	// IMP=0x00100000000328fb
- (_Bool)_stringMatchesSpecialCases:(id)arg1 forSymbol:(id)arg2 ranges:(id *)arg3 langaugeCode:(id)arg4;	// IMP=0x00100000000323e0
- (id)_localeSpecificURLRegexForLanguageCode:(id)arg1;	// IMP=0x00100000000321a6
- (id)_localeSpecificURLsForLanguageCode:(id)arg1;	// IMP=0x0010000000032177
- (id)_secureTextDescription:(id)arg1;	// IMP=0x00100000000320ed
- (void)_replaceEmbeddedTTSCommands:(id)arg1;	// IMP=0x001000000003203b
- (void)_speakAllDigits:(id)arg1;	// IMP=0x0010000000031ee0
- (void)handleEvent:(id)arg1;	// IMP=0x0010000000031e25
- (void)dealloc;	// IMP=0x0010000000031da2
- (void)_handleStopSpeaking:(id)arg1;	// IMP=0x0010000000031a4b
- (void)_handleContinueSpeaking:(id)arg1;	// IMP=0x0010000000031977
- (void)_handlePauseSpeaking:(id)arg1;	// IMP=0x001000000003182e
- (void)_stopSpeakingAfterLongPause:(id)arg1;	// IMP=0x001000000003176b
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x0010000000031754
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2 sessionDeactivationDelay:(id)arg3;	// IMP=0x0010000000031543
- (void)continueSpeaking;	// IMP=0x0010000000031485
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000003138a
- (void)setVoice:(id)arg1;	// IMP=0x0010000000031348
- (void)_setVoice:(id)arg1;	// IMP=0x0010000000031247
- (void)setRate:(float)arg1;	// IMP=0x00100000000311c5
- (float)rate;	// IMP=0x00100000000311a8
- (void)_setRate:(id)arg1;	// IMP=0x0010000000031083
- (float)volume;	// IMP=0x0010000000031071
- (void)setVolume:(float)arg1;	// IMP=0x0010000000030fef
- (void)_setVolume:(id)arg1;	// IMP=0x0010000000030f98
- (void)_loadPunctuationTable:(id)arg1 withLevel:(long long)arg2 language:(id)arg3;	// IMP=0x0010000000030f1e
- (void)_saveSpeechStats;	// IMP=0x0010000000030e9c
- (id)currentAllPunctuationTable;	// IMP=0x0010000000030e42
- (id)currentNonePunctuationTable;	// IMP=0x0010000000030de8
- (id)currentSomePunctuationTable;	// IMP=0x0010000000030d8e
- (void)_resetLanguageDataOnSpeechThread:(id)arg1 language:(id)arg2;	// IMP=0x0010000000030a9d
- (void)_selectedLanguageChanged:(id)arg1;	// IMP=0x001000000003066c
- (void)_initializePunctuationData;	// IMP=0x00100000000304f9
- (id)init;	// IMP=0x001000000003021a
- (void)_loadNoneTableOverrides;	// IMP=0x0010000000030174
- (void)_loadSpecialPunctuation;	// IMP=0x0010000000030031
- (void)_updateChannelLayout;	// IMP=0x001000000002f80a
- (void)_updateAudioSessionProperties;	// IMP=0x001000000002e7d4
- (void)updateAudioSessionProperties:(id)arg1;	// IMP=0x001000000002e7a1
- (void)audioSessionWasInterrupted:(id)arg1;	// IMP=0x001000000002e76b
- (void)_audioSessionWasInterrupted:(id)arg1;	// IMP=0x001000000002e5d9
- (void)updateAccurateWordCallbacks;	// IMP=0x001000000002e523
- (_Bool)_usingAllChannels;	// IMP=0x001000000002e1ba
- (void)_callStatusChanged;	// IMP=0x001000000002e077
- (void)callStatusChanged;	// IMP=0x001000000002e044
- (void)_initializeSynthesizer;	// IMP=0x001000000002d985
- (void)_createTelephonySynthesizer;	// IMP=0x001000000002d850
- (void)_tearDownTelephonySynthesizer;	// IMP=0x001000000002d793
- (void)_updateUserSubstitutions:(id)arg1;	// IMP=0x001000000002d692
- (id)_internalVoiceOverSubstitutions;	// IMP=0x001000000002d583
- (void)_initializeThread;	// IMP=0x001000000002d500
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x001000000002d4c0
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x001000000002d49a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
