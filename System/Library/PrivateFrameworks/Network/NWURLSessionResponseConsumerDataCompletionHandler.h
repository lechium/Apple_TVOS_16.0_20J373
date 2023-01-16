//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLResponse;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSURLResponse *_currentResponse;	// 16 = 0x10
    NSObject<OS_dispatch_data> *_data;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000596400
@property(readonly) NSURLResponse *response;
- (void)task:(id)arg1 deliverData:(id)arg2 complete:(_Bool)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000596130
- (void)task:(id)arg1 deliverResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005960c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

