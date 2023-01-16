//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKTGossipPolicy, IDSKeyTransparencyVerifier, MISSING_TYPE, NSSet;

@interface IDSKTGossipManager : NSObject
{
    IDSKTGossipPolicy *_gossipPolicy;	// 8 = 0x8
    IDSKeyTransparencyVerifier *_transparencyVerifier;	// 16 = 0x10
    NSSet *_gossipEnabledServiceIdentifiers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000001a7e20
- (void).cxx_destruct;	// IMP=0x00200000001a95a0
@property(readonly, nonatomic) NSSet *gossipEnabledServiceIdentifiers; // @synthesize gossipEnabledServiceIdentifiers=_gossipEnabledServiceIdentifiers;
@property(readonly, nonatomic) IDSKeyTransparencyVerifier *transparencyVerifier; // @synthesize transparencyVerifier=_transparencyVerifier;
@property(retain, nonatomic) IDSKTGossipPolicy *gossipPolicy; // @synthesize gossipPolicy=_gossipPolicy;
- (unsigned char)maxRecipientMemoryFromBag;	// IMP=0x00100000001a9420
- (unsigned char)subsequentGossipChanceFromBag;	// IMP=0x00100000001a92e0
- (unsigned char)firstGossipChanceFromBag;	// IMP=0x00100000001a91a0
- (void)sthReceivedFromGossipReceipient:(id)arg1;	// IMP=0x00100000001a8f30
- (MISSING_TYPE *)gossipSTHPayloadForDestinations:forServiceIdentifier:fromID: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001a8250
- (_Bool)canGossipOnService:(id)arg1;	// IMP=0x00100000001a81e0
- (id)initWithGossipPolicy:(id)arg1 transparencyVerifier:(id)arg2 gossipEnabledServices:(id)arg3;	// IMP=0x00100000001a80b0
- (id)init;	// IMP=0x00100000001a7f10
- (id)transparencyVerifierSharedInstance;	// IMP=0x00100000001a7ee0

@end
