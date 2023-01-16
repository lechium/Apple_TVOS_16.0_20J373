//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface TrustURLSessionContext : NSObject
{
    void *_context;	// 8 = 0x8
    NSArray *_URIs;	// 16 = 0x10
    unsigned long long _URIix;	// 24 = 0x18
    NSMutableData *_response;	// 32 = 0x20
    double _maxAge;	// 40 = 0x28
    unsigned long long _numTasks;	// 48 = 0x30
    unsigned long long _attribution;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000046d3b
@property unsigned long long attribution; // @synthesize attribution=_attribution;
@property unsigned long long numTasks; // @synthesize numTasks=_numTasks;
@property double maxAge; // @synthesize maxAge=_maxAge;
@property(retain) NSMutableData *response; // @synthesize response=_response;
@property unsigned long long URIix; // @synthesize URIix=_URIix;
@property(retain) NSArray *URIs; // @synthesize URIs=_URIs;
@property void *context; // @synthesize context=_context;
- (void)dealloc;	// IMP=0x0010000000046c1a
- (id)initWithContext:(void *)arg1 uris:(id)arg2;	// IMP=0x0010000000046b59

@end
