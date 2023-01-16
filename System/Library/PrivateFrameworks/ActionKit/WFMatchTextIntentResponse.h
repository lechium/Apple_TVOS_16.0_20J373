//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WFMatchTextIntentResponse : INIntentResponse
{
    long long _code;	// 8 = 0x8
}

+ (id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg1;	// IMP=0x006000000036dd7f
@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000036dce3

// Remaining properties
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSArray *matches; // @dynamic matches;

@end

