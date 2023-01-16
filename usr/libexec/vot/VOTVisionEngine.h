//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMVoiceOverVisionEngine;
@protocol VOTVisionEngineResultUpdateDelegate;

@interface VOTVisionEngine : NSObject
{
    id _languageConfigurationObserver;	// 8 = 0x8
    _Bool _wasCachePurged;	// 16 = 0x10
    id <VOTVisionEngineResultUpdateDelegate> _resultUpdateDelegate;	// 24 = 0x18
    AXMVoiceOverVisionEngine *_engine;	// 32 = 0x20
}

+ (_Bool)elementNeedsAdditionalDescription:(id)arg1;	// IMP=0x00400000001131ea
+ (_Bool)shouldAnalyzeElement:(id)arg1;	// IMP=0x00100000001131d3
+ (_Bool)_shouldAnalyzeElement:(id)arg1 deferToMediaAnalysisElementIfNeeded:(_Bool)arg2;	// IMP=0x0010000000112fec
- (void).cxx_destruct;	// IMP=0x00200000001149fe
@property(retain, nonatomic) AXMVoiceOverVisionEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak id <VOTVisionEngineResultUpdateDelegate> resultUpdateDelegate; // @synthesize resultUpdateDelegate=_resultUpdateDelegate;
@property(nonatomic) _Bool wasCachePurged; // @synthesize wasCachePurged=_wasCachePurged;
- (void)produceCaptionForElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000114427
- (void)purgeCache;	// IMP=0x00100000001143b7
- (id)resultsForElement:(id)arg1;	// IMP=0x001000000011439e
- (void)analyzeElement:(id)arg1 withOptions:(id)arg2;	// IMP=0x0010000000113993
- (id)_renderStringToImage:(id)arg1;	// IMP=0x0010000000113734
- (id)_visionAnalysisOptionsForElement:(id)arg1 visionOptions:(id)arg2;	// IMP=0x001000000011372c
- (id)_preferredMediaAnalysisLocale;	// IMP=0x00100000001135e0
- (long long)_interfaceOrientationForElement:(id)arg1;	// IMP=0x00100000001135d5
- (void)dealloc;	// IMP=0x0010000000113558
- (id)init;	// IMP=0x0010000000113337

@end

