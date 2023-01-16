//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSData, NSError, PKDataReleaseViewController, PKMerchant, PKTransactionReleasedData;

@protocol PKDataReleaseViewControllerDelegate <NSObject>
- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didAuthorizeWithExternalAuthorizationData:(NSData *)arg2 dataToRelease:(PKTransactionReleasedData *)arg3;

@optional
- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didResolveToMerchant:(PKMerchant *)arg2;
@end
