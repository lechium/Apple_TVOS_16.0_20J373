//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface PlaybackSpeedResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0050000000207680
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0050000000207640
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0050000000207600
+ (id)confirmationRequiredWithPlaybackSpeedToConfirm:(id)arg1;	// IMP=0x00500000002075b0
+ (id)disambiguationWithPlaybackSpeedsToDisambiguate:(id)arg1;	// IMP=0x00500000002074f0
+ (id)successWithResolvedPlaybackSpeed:(id)arg1;	// IMP=0x00500000002073b0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x00000000002077f0

@end

