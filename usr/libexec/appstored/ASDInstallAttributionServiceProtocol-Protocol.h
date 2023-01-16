//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDImpressionParamsConfig, ASDInstallAttributionParamsConfig, ASDInstallWebAttributionParamsConfig, NSNumber;

@protocol ASDInstallAttributionServiceProtocol
- (void)validateImpression:(ASDInstallAttributionParamsConfig *)arg1 withFidelityType:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateConversionValueForApp:(NSNumber *)arg1 conversionValue:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)registerPingbackForApp:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startPingbackTaskWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)addInstallWebAttributionParamsWithConfig:(ASDInstallWebAttributionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addInstallAttributionParamsWithConfig:(ASDInstallAttributionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)endAdImpressionWithConfig:(ASDImpressionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startAdImpressionWithConfig:(ASDImpressionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
