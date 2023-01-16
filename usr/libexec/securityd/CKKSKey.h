//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainBackedKey, NSData, NSString;
@protocol SecCKKSKeyClass, SecCKKSProcessedState;

@interface CKKSKey
{
    _Bool _currentkey;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    NSString *_parentKeyUUID;	// 24 = 0x18
    NSString<SecCKKSKeyClass> *_keyclass;	// 32 = 0x20
    NSString<SecCKKSProcessedState> *_state;	// 40 = 0x28
    CKKSKeychainBackedKey *_keycore;	// 48 = 0x30
    NSData *_wrappedKeyDataBackingStore;	// 56 = 0x38
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x0040000000101b36
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 flagHandler:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001010cb
+ (id)loadFromProtobuf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000100db9
+ (id)countsByClassWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000100bc5
+ (id)countsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000100962
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000010063f
+ (id)sqlColumns;	// IMP=0x0010000000100632
+ (id)sqlTable;	// IMP=0x0010000000100625
+ (id)localKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001004a6
+ (id)remoteKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000100327
+ (id)allKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001001be
+ (id)currentKeysForClass:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000fffad
+ (id)currentKeyForClass:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ffec5
+ (id)selfWrappedKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ffce0
+ (id)tryFromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ffb3d
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff988
+ (id)fromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff7e5
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff630
+ (id)isItemKeyForKeychainView:(struct SecDbItem *)arg1;	// IMP=0x00100000000ff301
+ (id)randomKeyWrappedBySelf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ff263
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ff145
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ff0b9
+ (id)loadKeyWithUUID:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000feff9
- (void).cxx_destruct;	// IMP=0x00200000000fef84
@property(retain) NSData *wrappedKeyDataBackingStore; // @synthesize wrappedKeyDataBackingStore=_wrappedKeyDataBackingStore;
@property(retain) CKKSKeychainBackedKey *keycore; // @synthesize keycore=_keycore;
@property _Bool currentkey; // @synthesize currentkey=_currentkey;
@property(copy) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x00100000000fec3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000feba8
- (id)sqlValues;	// IMP=0x00100000000fe76f
- (id)whereClauseToFindSelf;	// IMP=0x00100000000fe614
- (id)description;	// IMP=0x00100000000fe4b5
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000fe016
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000fdd19
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000fd9d6
- (id)CKRecordName;	// IMP=0x00100000000fd9c4
- (_Bool)saveToDatabaseAsOnlyCurrentKeyForClassAndState:(id *)arg1;	// IMP=0x00100000000fd721
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000000fd69f
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000000fd61d
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000fd588
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x00100000000fd501
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fd42e
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fd35b
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fd2a5
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fd1ef
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fd145
- (_Bool)tlkMaterialPresentOrRecoverableViaTLKShareForContextID:(id)arg1 forTrustStates:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fcb6c
- (_Bool)validTLK:(id *)arg1;	// IMP=0x00100000000fc9c4
- (_Bool)unwrapViaTLKSharesTrustedBy:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fc3dc
- (id)unwrapViaKeyHierarchy:(id *)arg1;	// IMP=0x00100000000fbf9f
- (id)ensureKeyLoadedForContextID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fbcf5
- (id)topKeyInAnyState:(id *)arg1;	// IMP=0x00100000000fb9be
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fb809
- (_Bool)wrapsSelf;	// IMP=0x00100000000fb795
@property(readonly) NSString *zoneName;
@property(readonly) NSData *wrappedKeyData;
- (id)getKeychainBackedKey:(id *)arg1;	// IMP=0x00100000000fb289
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fafd8
- (void)dealloc;	// IMP=0x00100000000fafa9
- (id)initWithKeyCore:(id)arg1 contextID:(id)arg2 state:(id)arg3 currentkey:(_Bool)arg4;	// IMP=0x00100000000fadde
- (id)initWithWrappedKeyData:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 state:(id)arg6 zoneID:(id)arg7 encodedCKRecord:(id)arg8 currentkey:(long long)arg9;	// IMP=0x00100000000fac98
- (id)initSelfWrappedWithAESKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 keyclass:(id)arg4 state:(id)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8;	// IMP=0x00100000000faa86
- (id)init;	// IMP=0x00100000000faa57

@end
