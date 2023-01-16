//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, _SFECKeyPair, _SFECPublicKey;

@interface CKKSSOSSelfPeer : NSObject
{
    NSSet *_viewList;	// 8 = 0x8
    _SFECKeyPair *_encryptionKey;	// 16 = 0x10
    _SFECKeyPair *_signingKey;	// 24 = 0x18
    NSString *_spid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b5857
@property(retain) NSString *spid; // @synthesize spid=_spid;
@property(retain) _SFECKeyPair *signingKey; // @synthesize signingKey=_signingKey;
@property(retain) _SFECKeyPair *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly) NSSet *viewList; // @synthesize viewList=_viewList;
- (_Bool)shouldHaveView:(id)arg1;	// IMP=0x00100000000b5763
- (_Bool)matchesPeer:(id)arg1;	// IMP=0x00100000000b5664
@property(readonly) NSString *peerID;
@property(readonly) _SFECPublicKey *publicSigningKey;
@property(readonly) _SFECPublicKey *publicEncryptionKey;
- (id)initWithSOSPeerID:(id)arg1 encryptionKey:(id)arg2 signingKey:(id)arg3 viewList:(id)arg4;	// IMP=0x00100000000b5414
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

