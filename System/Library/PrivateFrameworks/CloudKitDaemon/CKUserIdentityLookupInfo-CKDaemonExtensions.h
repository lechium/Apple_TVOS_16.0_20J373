//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKUserIdentityLookupInfo.h>

@interface CKUserIdentityLookupInfo (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;	// IMP=0x0060000000012046
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;	// IMP=0x0060000000011eb1
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x0060000000011e7e
@end

