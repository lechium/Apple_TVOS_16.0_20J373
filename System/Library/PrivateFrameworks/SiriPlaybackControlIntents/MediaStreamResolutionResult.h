//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MediaStreamResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000206c40
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000206c00
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000206bc0
+ (id)confirmationRequiredWithMediaStreamToConfirm:(id)arg1;	// IMP=0x0060000000206b70
+ (id)disambiguationWithMediaStreamsToDisambiguate:(id)arg1;	// IMP=0x0060000000206b00
+ (id)successWithResolvedMediaStream:(id)arg1;	// IMP=0x0060000000206ab0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000206db0

@end

