//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AKInheritanceCLIContext, AKInheritanceContext;

@protocol AKInheritanceInterface <NSObject>
- (void)_setupBeneficiaryAliasWithInheritanceContext:(AKInheritanceCLIContext *)arg1 completion:(void (^)(AKBeneficiaryAliasSetupResult *, NSError *))arg2;
- (void)removeBeneficiaryWithInheritanceContext:(AKInheritanceContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateBeneficiaryWithInheritanceContext:(AKInheritanceContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupBeneficiaryWithInheritanceContext:(AKInheritanceContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchManifestOptionsWithInheritanceContext:(AKInheritanceContext *)arg1 completion:(void (^)(AKBeneficiaryManifest *, NSError *))arg2;
@end

