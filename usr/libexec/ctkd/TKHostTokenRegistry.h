//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, NSXPCListener, TKHostKeychainHandler, TKHostTokenDriverCache;
@protocol TKHostTokenRegistryDelegate;

@interface TKHostTokenRegistry : NSObject
{
    NSDictionary *_tokenExtensions;	// 8 = 0x8
    long long _transactionCounter;	// 16 = 0x10
    _Bool _storageDirty;	// 24 = 0x18
    _Bool _resetDB;	// 25 = 0x19
    NSXPCListener *_listener;	// 32 = 0x20
    TKHostKeychainHandler *_keychain;	// 40 = 0x28
    id <TKHostTokenRegistryDelegate> _delegate;	// 48 = 0x30
    TKHostTokenDriverCache *_driverCache;	// 56 = 0x38
    NSUserDefaults *_storage;	// 64 = 0x40
    NSArray *_tokenClassIDs;	// 72 = 0x48
    NSMutableArray *_externalTransactions;	// 80 = 0x50
    NSMutableDictionary *_pendingAutomaticTokens;	// 88 = 0x58
    NSMutableDictionary *_pendingCreationTokens;	// 96 = 0x60
    NSMutableDictionary *_tokensByTokenID;	// 104 = 0x68
}

+ (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0020000000004132
- (void).cxx_destruct;	// IMP=0x0020000000007baf
@property(readonly, nonatomic) NSMutableDictionary *tokensByTokenID; // @synthesize tokensByTokenID=_tokensByTokenID;
@property(readonly, nonatomic) NSMutableDictionary *pendingCreationTokens; // @synthesize pendingCreationTokens=_pendingCreationTokens;
@property(readonly, nonatomic) NSMutableDictionary *pendingAutomaticTokens; // @synthesize pendingAutomaticTokens=_pendingAutomaticTokens;
@property(readonly, nonatomic) NSMutableArray *externalTransactions; // @synthesize externalTransactions=_externalTransactions;
@property(readonly, nonatomic) NSArray *tokenClassIDs; // @synthesize tokenClassIDs=_tokenClassIDs;
@property(nonatomic) _Bool resetDB; // @synthesize resetDB=_resetDB;
@property(readonly, nonatomic) NSUserDefaults *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) TKHostTokenDriverCache *driverCache; // @synthesize driverCache=_driverCache;
@property(nonatomic) __weak id <TKHostTokenRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TKHostKeychainHandler *keychain; // @synthesize keychain=_keychain;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)registerClassIDs:(id)arg1;	// IMP=0x00100000000075e5
- (id)reloadTokenClassesFromStore;	// IMP=0x00100000000069a6
- (void)loadTokensFromStore:(id)arg1;	// IMP=0x0010000000005be7
- (void)failedToken:(id)arg1;	// IMP=0x0010000000005a19
- (void)disconnectedToken:(id)arg1;	// IMP=0x001000000000573a
- (void)connectedToken:(id)arg1 notifyAddedToken:(_Bool)arg2;	// IMP=0x0010000000005498
- (id)createTokenWithTokenID:(id)arg1 persistent:(_Bool)arg2;	// IMP=0x00100000000051fb
- (void)notifyTokenReinsertion:(id)arg1;	// IMP=0x00100000000050ec
- (void)removeTokenWithTokenID:(id)arg1;	// IMP=0x0010000000004e6c
- (id)tokenWithTokenID:(id)arg1;	// IMP=0x0010000000004d35
- (void)commitTransaction;	// IMP=0x001000000000482e
- (void)markModified;	// IMP=0x00100000000047fc
@property(readonly, nonatomic) NSDictionary *tokenExtensions;
- (id)beginTransaction;	// IMP=0x00100000000046d5
@property(readonly, nonatomic) NSArray *tokens;
- (void)dealloc;	// IMP=0x001000000000462f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000044a5
- (id)initWithDriverCache:(id)arg1 listener:(id)arg2 keychain:(id)arg3;	// IMP=0x0010000000003f96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

