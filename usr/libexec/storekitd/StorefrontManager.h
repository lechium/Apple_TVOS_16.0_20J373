//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Storefront, StorefrontDatabaseStore;
@protocol OS_dispatch_queue;

@interface StorefrontManager : NSObject
{
    NSObject<OS_dispatch_queue> *_storefrontQueue;	// 8 = 0x8
    StorefrontDatabaseStore *_databaseStore;	// 16 = 0x10
}

+ (id)storefrontForClient:(id)arg1;	// IMP=0x004000000004ed49
+ (id)defaultManager;	// IMP=0x001000000004ecf4
- (void).cxx_destruct;	// IMP=0x00200000000500c4
- (void)_updateStorefrontForClientType:(BOOL)arg1;	// IMP=0x001000000004f864
- (void)_updateStorefronts;	// IMP=0x001000000004f7d4
- (id)_storefrontIdentifierForClientType:(BOOL)arg1;	// IMP=0x001000000004f6e0
- (void)_bagChanged:(id)arg1;	// IMP=0x001000000004f5c5
@property(readonly, nonatomic) Storefront *sandboxStorefront;
@property(readonly, nonatomic) Storefront *productionStorefront;
- (id)octaneStorefrontForBundleID:(id)arg1;	// IMP=0x001000000004f13e
- (id)databaseStore;	// IMP=0x001000000004f052
- (void)dealloc;	// IMP=0x001000000004ef97
- (id)init;	// IMP=0x001000000004ee6e

@end

