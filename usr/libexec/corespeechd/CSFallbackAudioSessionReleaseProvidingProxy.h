//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSXPCConnection, NSString;

@interface CSFallbackAudioSessionReleaseProvidingProxy : NSObject
{
    CSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005121
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000000500b
- (void)_handleDeactivateAudioSessionRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000004e52
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000004d97
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000004d2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

