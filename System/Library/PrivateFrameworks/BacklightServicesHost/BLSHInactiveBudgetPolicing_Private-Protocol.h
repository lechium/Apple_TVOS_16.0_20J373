//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSHInactiveBudgetPolicing-Protocol.h>

@class BLSAlwaysOnDateSpecifier, BLSHPresentationDateSpecifier, NSDate;
@protocol BLSHBacklightSceneHostEnvironment;

@protocol BLSHInactiveBudgetPolicing_Private <BLSHInactiveBudgetPolicing>
- (void)purgeStaleDataForNowDate:(NSDate *)arg1;
- (void)performInvalidation;
- (void)invalidateAtRequestDate:(NSDate *)arg1 forEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg2 invalidationBlock:(void (^)(void))arg3;
- (void)chargeRenderedSpecifier:(BLSHPresentationDateSpecifier *)arg1;
- (void)resetFutureSpecifiers;
- (BLSAlwaysOnDateSpecifier *)validateAndChargeFutureSpecifier:(BLSAlwaysOnDateSpecifier *)arg1 nextSpecifier:(BLSAlwaysOnDateSpecifier *)arg2 forEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg3;
- (long long)allowedFidelityAtDate:(NSDate *)arg1 forEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg2 expectedFidelity:(long long)arg3;
@end

