//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderProxy, NSString;
@protocol NSFileProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileProviderXPCMessenger : NSObject
{
    id <NSFileProvider> _fileProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSFileProviderProxy *_fileProviderProxy;	// 24 = 0x18
}

- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000630801
- (void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000063047c
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;	// IMP=0x0000000000630274
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterOfURL:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000000062fdf0
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062f988
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;	// IMP=0x000000000062f7e4
- (void)provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000062f559
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 withInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000062ed2b
- (void)checkInProviderWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000062ed18
- (void)invalidate;	// IMP=0x000000000062ece0
- (void)dealloc;	// IMP=0x000000000062ec6a
- (id)initWithFileProviderProxy:(id)arg1;	// IMP=0x000000000062ebf7
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;	// IMP=0x000000000062eb71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

