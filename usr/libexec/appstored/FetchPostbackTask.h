//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSURLRequestEncoder, InstallAttributionDatabaseStore, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSURL;

@interface FetchPostbackTask
{
    NSNumber *_appAdamID;	// 8 = 0x8
    NSURL *_fetchPostbackInfoURL;	// 16 = 0x10
    InstallAttributionDatabaseStore *_databaseStore;	// 24 = 0x18
    AMSURLRequestEncoder *_requestEncoder;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    NSMutableDictionary *_paramsDict;	// 48 = 0x30
    NSMutableArray *_results;	// 56 = 0x38
    NSArray *_params;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000f45ba
- (void)main;	// IMP=0x00100000000f3bcc

@end
