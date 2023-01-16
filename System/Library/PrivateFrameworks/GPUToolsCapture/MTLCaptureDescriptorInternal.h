//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLCaptureDescriptorInternal : MTLCaptureDescriptor
{
    _Bool _apiTriggeredCapture;	// 8 = 0x8
    _Bool toolTriggeredCapture;	// 9 = 0x9
    _Bool ignoreUnusedResources;	// 10 = 0xa
    _Bool suspendAfterCapture;	// 11 = 0xb
    unsigned long long captureMode;	// 16 = 0x10
    unsigned long long triggerHitsToStart;	// 24 = 0x18
    unsigned long long triggerHitsToEnd;	// 32 = 0x20
    CDUnknownBlockType completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000073049
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(nonatomic) _Bool suspendAfterCapture; // @synthesize suspendAfterCapture;
@property(nonatomic) _Bool ignoreUnusedResources; // @synthesize ignoreUnusedResources;
@property(nonatomic) _Bool toolTriggeredCapture; // @synthesize toolTriggeredCapture;
@property(nonatomic) _Bool apiTriggeredCapture; // @synthesize apiTriggeredCapture=_apiTriggeredCapture;
@property(nonatomic) unsigned long long triggerHitsToEnd; // @synthesize triggerHitsToEnd;
@property(nonatomic) unsigned long long triggerHitsToStart; // @synthesize triggerHitsToStart;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode;
- (id)init;	// IMP=0x0000000000072ee8

@end

