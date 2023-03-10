//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001d329
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001ce2a
- (id)parseParam:(id)arg1;	// IMP=0x000000000001c93e
- (id)parseEventParams:(id)arg1;	// IMP=0x000000000001c4b8
- (id)parseEvent:(id)arg1 withBaseURL:(id)arg2;	// IMP=0x000000000001b9a5
- (_Bool)parseEventsAndParameters:(id)arg1 withBaseURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001afc7
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x000000000001a95f
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a1b5
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019e0a

@end

