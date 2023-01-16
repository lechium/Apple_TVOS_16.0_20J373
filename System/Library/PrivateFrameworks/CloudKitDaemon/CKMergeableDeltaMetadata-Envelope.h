//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKMergeableDeltaMetadata.h>

@class CKTuple2, NSData, NSString;

@interface CKMergeableDeltaMetadata (Envelope)
@property(readonly, nonatomic) _Bool needsDecryption;
@property(readonly, nonatomic) _Bool needsEncryption;
- (struct __OpaquePCSKeyEnvelope *)_decryptWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000193901
- (_Bool)decryptWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00200000001938d1
- (struct __OpaquePCSKeyEnvelope *)_encryptWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00200000001935f3
- (struct __OpaquePCSKeyEnvelope *)_envelopeWithContext:(id)arg1 allowCreation:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0020000000193383
@property(copy, nonatomic) CKTuple2 *authenticatedTimestamps;
@property(copy, nonatomic) NSData *encryptedTimestamps;
@property(copy, nonatomic) NSData *envelope;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

