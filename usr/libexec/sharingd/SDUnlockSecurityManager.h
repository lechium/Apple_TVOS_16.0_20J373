//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SDUnlockSecurityManager : NSObject
{
    NSData *_localLongTermKey;	// 8 = 0x8
    NSData *_remoteLongTermKey;	// 16 = 0x10
    NSString *_keybagUUID;	// 24 = 0x18
    NSString *_keyDeviceID;	// 32 = 0x20
    NSString *_pairingID;	// 40 = 0x28
    NSString *_pairingStorePath;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000010a655
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(copy) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain) NSString *keyDeviceID; // @synthesize keyDeviceID=_keyDeviceID;
@property(retain, nonatomic) NSString *keybagUUID; // @synthesize keybagUUID=_keybagUUID;
@property(retain, nonatomic) NSData *remoteLongTermKey; // @synthesize remoteLongTermKey=_remoteLongTermKey;
@property(retain, nonatomic) NSData *localLongTermKey; // @synthesize localLongTermKey=_localLongTermKey;
- (void)deleteLegacyEscrowData;	// IMP=0x001000000010a4a3
- (void)migrateEscrowDataIfNeeded;	// IMP=0x001000000010a3b5
- (_Bool)checkForLegacyEscrowData;	// IMP=0x001000000010a1fa
- (id)legacyEscrowData;	// IMP=0x001000000010a101
- (id)baseDictionary;	// IMP=0x001000000010a01b
- (id)allKeychainItems;	// IMP=0x0010000000109ee2
- (void)deleteEscrowData;	// IMP=0x0010000000109e52
- (_Bool)checkForEscrowData;	// IMP=0x0010000000109bed
- (id)escrowData;	// IMP=0x0010000000109b05
- (_Bool)storeEscrowData:(id)arg1;	// IMP=0x001000000010981a
- (void)resetEscrowRecord;	// IMP=0x0010000000109814
- (void)clearStateForSession:(long long)arg1;	// IMP=0x001000000010980e
- (_Bool)confirmUnlockWithAuthSession:(long long)arg1;	// IMP=0x0010000000109806
- (id)escrowSecretWithAuthSession:(long long)arg1;	// IMP=0x00100000001097fe
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3 errorCode:(long long *)arg4;	// IMP=0x00100000001097f6
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3;	// IMP=0x00100000001097e1
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2;	// IMP=0x00100000001097cc
- (_Bool)setupWithAuthSession:(long long)arg1 passcode:(id)arg2;	// IMP=0x00100000001097c4
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2 errorCode:(int *)arg3;	// IMP=0x00100000001097b7
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2;	// IMP=0x00100000001097a2
- (long long)stashBagSessionAsOriginator:(_Bool)arg1 escrowSecret:(id)arg2 manifest:(id)arg3;	// IMP=0x0010000000109795
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0010000000109788
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3;	// IMP=0x0010000000109773
- (long long)escrowCreationSessionAsOriginator:(_Bool)arg1 errorCode:(int *)arg2;	// IMP=0x0010000000109766
- (void)migrateOldKeysIfNeeded;	// IMP=0x001000000010958b
- (id)legacyLocalLongTermKey;	// IMP=0x001000000010952d
- (id)legacyRemoteLongTermKey;	// IMP=0x00100000001094cf
@property(readonly) _Bool ltkFileExists;
- (id)longTermKeyStorageFilePath;	// IMP=0x00100000001091f8
- (void)deletePersistedLongTermKeys;	// IMP=0x0010000000109011
- (void)loadLongTermKeys;	// IMP=0x0010000000108d60
- (void)saveLongTermKeys;	// IMP=0x0010000000108925
- (void)checkForBackupExclusion:(id)arg1;	// IMP=0x001000000010885e
- (void)validateKeybagUUID;	// IMP=0x0010000000108758
- (void)deleteLongTermKeys;	// IMP=0x0010000000108562
- (void)updateLocalLongTermKey:(id)arg1 remoteLongTermKey:(id)arg2;	// IMP=0x0010000000108405
- (id)signRemoteKey:(id)arg1 withLocalKey:(id)arg2 localKeyClass:(long long)arg3 remoteKeyClass:(long long)arg4;	// IMP=0x00100000001083fd
- (id)generateLocalLongTermKey:(long long)arg1;	// IMP=0x00100000001083f5
@property(readonly) _Bool ltksExist;
- (unsigned int)lockState;	// IMP=0x0010000000108329
- (id)initWithPairingID:(id)arg1 pairingStorePath:(id)arg2 deviceName:(id)arg3;	// IMP=0x0010000000108236

@end

