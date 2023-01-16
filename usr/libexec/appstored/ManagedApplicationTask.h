//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ASDManagedApplicationRequestOptions, AppInstallLogKey, ApplicationProxy, KeepAlive, NSNumber, NSString;

@interface ManagedApplicationTask
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_applicationVariant;	// 16 = 0x10
    ApplicationProxy *_appProxy;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_bundleVersion;	// 40 = 0x28
    NSString *_clientID;	// 48 = 0x30
    NSNumber *_externalVersionIdentifier;	// 56 = 0x38
    _Bool _hasInstalledApp;	// 64 = 0x40
    NSNumber *_itemIdentifier;	// 72 = 0x48
    KeepAlive *_keepAlive;	// 80 = 0x50
    AppInstallLogKey *_logKey;	// 88 = 0x58
    ASDManagedApplicationRequestOptions *_options;	// 96 = 0x60
    _Bool _skipDownload;	// 104 = 0x68
    CDUnknownBlockType _detailedResultBlock;	// 112 = 0x70
    CDUnknownBlockType _resultBlock;	// 120 = 0x78
    long long _resultChangeType;	// 128 = 0x80
}

+ (_Bool)_processJobResult:(id)arg1 forReason:(id)arg2 logKey:(id)arg3;	// IMP=0x00400000000edb21
+ (id)createLogKeyWithOptions:(id)arg1;	// IMP=0x00100000000ecba4
+ (id)managedPurchaseQueue;	// IMP=0x00100000000ec120
- (void).cxx_destruct;	// IMP=0x00200000000f2526
@property(readonly) long long resultChangeType; // @synthesize resultChangeType=_resultChangeType;
@property(readonly, copy) ASDManagedApplicationRequestOptions *options; // @synthesize options=_options;
@property(readonly) AppInstallLogKey *logKey; // @synthesize logKey=_logKey;
@property(copy) CDUnknownBlockType detailedResultBlock; // @synthesize detailedResultBlock=_detailedResultBlock;
- (id)_vppBuyParams:(id *)arg1;	// IMP=0x00100000000f2111
- (_Bool)_updateSinfsAndReceiptsStoreItems:(id)arg1 sinfData:(id)arg2;	// IMP=0x00100000000f0e07
- (void)_updateLogKey;	// IMP=0x00100000000f0c31
- (id)_purchaseFree:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f03a7
- (_Bool)_preflightAppWithMetadata:(id *)arg1 isFree:(_Bool *)arg2 isActiveAccountAppOwner:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00100000000ef1d5
- (id)_ownsCheck:(id)arg1 account:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ef0e0
- (_Bool)_makeVPPCall:(id *)arg1 metadata:(id)arg2 changeType:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000000ee4fc
- (id)_effectiveClientInfo;	// IMP=0x00100000000ee497
- (id)_effectiveClientID;	// IMP=0x00100000000ee445
- (id)_downloadMetadataForItems:(id)arg1;	// IMP=0x00100000000eddf4
- (void)main;	// IMP=0x00100000000ecfd6
- (id)_purchaseInfoWithMetadata:(id)arg1;	// IMP=0x00100000000eccec
- (id)initWithOptions:(id)arg1 forClient:(id)arg2 logKey:(id)arg3;	// IMP=0x00100000000ec2ae
- (id)initWithOptions:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000ec216

@end

