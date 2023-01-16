//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, NSURLResponse;
@protocol OS_dispatch_io;

__attribute__((visibility("hidden")))
@interface NWURLSessionResponseConsumerDownload : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSURLResponse *_currentResponse;	// 16 = 0x10
    NSURL *_fileURL;	// 24 = 0x18
    NSObject<OS_dispatch_io> *_io;	// 32 = 0x20
    CDUnknownBlockType _pendingCompletionBlock;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000596b00
@property(readonly) NSURLResponse *response;
- (void)task:(id)arg1 deliverData:(id)arg2 complete:(_Bool)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000596850
- (void)task:(id)arg1 deliverResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

