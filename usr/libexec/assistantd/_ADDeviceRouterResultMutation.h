//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceRouterResult, ADPeerInfo, NSError, NSString, NSUUID;

@interface _ADDeviceRouterResultMutation : NSObject
{
    ADDeviceRouterResult *_base;	// 8 = 0x8
    ADPeerInfo *_peerInfo;	// 16 = 0x10
    NSUUID *_contextIdentifier;	// 24 = 0x18
    long long _proximity;	// 32 = 0x20
    NSString *_commandRelayProxyIdentifier;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasPeerInfo:1;
        unsigned int hasContextIdentifier:1;
        unsigned int hasProximity:1;
        unsigned int hasCommandRelayProxyIdentifier:1;
        unsigned int hasError:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001b99d7
- (void)setError:(id)arg1;	// IMP=0x00100000001b99b7
- (id)getError;	// IMP=0x00100000001b997f
- (void)setCommandRelayProxyIdentifier:(id)arg1;	// IMP=0x00100000001b995f
- (id)getCommandRelayProxyIdentifier;	// IMP=0x00100000001b9927
- (void)setProximity:(long long)arg1;	// IMP=0x00100000001b9919
- (long long)getProximity;	// IMP=0x00100000001b98f7
- (void)setContextIdentifier:(id)arg1;	// IMP=0x00100000001b98d7
- (id)getContextIdentifier;	// IMP=0x00100000001b989f
- (void)setPeerInfo:(id)arg1;	// IMP=0x00100000001b987f
- (id)getPeerInfo;	// IMP=0x00100000001b9847
- (_Bool)isDirty;	// IMP=0x00100000001b983c
- (id)initWithBase:(id)arg1;	// IMP=0x00100000001b97d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

