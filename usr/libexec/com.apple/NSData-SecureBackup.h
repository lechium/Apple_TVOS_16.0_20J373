//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (SecureBackup)
- (id)peerIDForKeybagDigest:(id)arg1;	// IMP=0x0010000000012cae
- (id)backupKeyDigests;	// IMP=0x0010000000012bb9
- (id)peersAndBackupKeyDigests;	// IMP=0x0010000000012a99
- (id)recoveryKey;	// IMP=0x0010000000012a44
- (id)peerIDs;	// IMP=0x00100000000127d1
- (id)sha1Digest;	// IMP=0x0010000000012753
- (id)hexString;	// IMP=0x0010000000012659
- (void)enumeratePeersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000124fb
- (id)bskb;	// IMP=0x001000000001248b
@end

