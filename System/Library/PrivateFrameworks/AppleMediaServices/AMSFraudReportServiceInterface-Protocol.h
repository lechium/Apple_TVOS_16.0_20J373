//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class ACAccount, NSString;

@protocol AMSFraudReportServiceInterface <NSObject>
- (void)performFraudReportRefreshWithAccount:(ACAccount *)arg1 transactionID:(NSString *)arg2 nameSpace:(NSString *)arg3 fsrData:(NSString *)arg4 keyID:(NSString *)arg5 completion:(void (^)(AMSFraudReportResponse *, NSError *))arg6;
@end

