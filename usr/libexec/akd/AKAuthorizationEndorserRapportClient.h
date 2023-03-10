//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationDaemonService, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol AKAuthorizationEndorserRapportClientDelegate;

@interface AKAuthorizationEndorserRapportClient : NSObject
{
    id <AKAuthorizationEndorserRapportClientDelegate> _delegate;	// 8 = 0x8
    RPCompanionLinkClient *_endorseeClient;	// 16 = 0x10
    RPCompanionLinkDevice *_endorseeDevice;	// 24 = 0x18
    AKAuthorizationDaemonService *_authorizationService;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007014d
@property(retain, nonatomic) AKAuthorizationDaemonService *authorizationService; // @synthesize authorizationService=_authorizationService;
@property(retain, nonatomic) RPCompanionLinkDevice *endorseeDevice; // @synthesize endorseeDevice=_endorseeDevice;
@property(retain, nonatomic) RPCompanionLinkClient *endorseeClient; // @synthesize endorseeClient=_endorseeClient;
@property(nonatomic) __weak id <AKAuthorizationEndorserRapportClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendDidStartServerAuthorizationEvent;	// IMP=0x001000000006fdbd
- (void)_sendAuthorizationDidFinishRequestWithError:(id)arg1;	// IMP=0x001000000006f935
- (void)_sendAuthorizationDidFinishRequestWithAuthorization:(id)arg1;	// IMP=0x001000000006f4ff
- (void)_handleStartAuthorizationWithResponse:(id)arg1;	// IMP=0x001000000006f10d
- (void)_sendStartAuthorizationRequest;	// IMP=0x001000000006ed6c
- (void)_deactivate;	// IMP=0x001000000006ecf6
- (void)authorizationDaemonServiceWillProcessUserResponse:(id)arg1;	// IMP=0x001000000006ece4
- (void)startAuthorizationWithCompanionLinkClient:(id)arg1;	// IMP=0x001000000006eacb
- (void)startAuthorization;	// IMP=0x001000000006ea80
- (id)initWithDeviceID:(id)arg1;	// IMP=0x001000000006e9e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

