//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMXPCClient, NSString;

__attribute__((visibility("hidden")))
@interface HMXPCClientConnectionProxy : HMFMessageTransport
{
    HMXPCClient *_client;	// 8 = 0x8
    CDUnknownBlockType _refreshHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001be25
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property __weak HMXPCClient *client; // @synthesize client=_client;
- (void)fetchUserInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bd4a
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bc8b
- (void)handleMessage:(id)arg1;	// IMP=0x000000000001bb94
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baff
- (id)initWithRefreshHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ba8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

