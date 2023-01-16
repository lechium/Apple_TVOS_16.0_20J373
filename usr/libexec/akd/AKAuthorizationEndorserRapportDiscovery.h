//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationEndorserRapportClient, AKClient, NSString, RPCompanionLinkClient;

@interface AKAuthorizationEndorserRapportDiscovery : NSObject
{
    CDUnknownBlockType _didDeactivateBlock;	// 8 = 0x8
    RPCompanionLinkClient *_deviceDiscovery;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
    AKAuthorizationEndorserRapportClient *_authorizationEndorser;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000054758
@property(retain, nonatomic) AKAuthorizationEndorserRapportClient *authorizationEndorser; // @synthesize authorizationEndorser=_authorizationEndorser;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(retain, nonatomic) RPCompanionLinkClient *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property(copy, nonatomic) CDUnknownBlockType didDeactivateBlock; // @synthesize didDeactivateBlock=_didDeactivateBlock;
- (void)_handleFoundDevice:(id)arg1;	// IMP=0x00100000000545b0
- (void)authorizationEndorserRapportClientDidFinish:(id)arg1;	// IMP=0x001000000005459e
- (void)deactivate;	// IMP=0x0010000000054510
- (_Bool)activateWithError:(id *)arg1;	// IMP=0x0010000000054498
- (id)initWithClient:(id)arg1;	// IMP=0x001000000005442d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

