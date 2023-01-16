//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSVoiceTriggerPhraseConfig;

@interface CSPhraseDetectorInfo : NSObject
{
    _Bool _hasPendingNearMiss;	// 8 = 0x8
    float _effectiveKeywordThreshold;	// 12 = 0xc
    CSVoiceTriggerPhraseConfig *_phraseConfig;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009e378
@property(retain, nonatomic) CSVoiceTriggerPhraseConfig *phraseConfig; // @synthesize phraseConfig=_phraseConfig;
@property(nonatomic) _Bool hasPendingNearMiss; // @synthesize hasPendingNearMiss=_hasPendingNearMiss;
@property(nonatomic) float effectiveKeywordThreshold; // @synthesize effectiveKeywordThreshold=_effectiveKeywordThreshold;
- (id)initWithPhraseConfig:(id)arg1;	// IMP=0x001000000009e2bf

@end
