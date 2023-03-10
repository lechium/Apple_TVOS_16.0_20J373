//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSData, NSError, PKPaymentPass;

@protocol PKRemoteAddPassViewControllerProtocol <NSObject>
- (void)didFinishWithPass:(PKPaymentPass *)arg1 error:(NSError *)arg2;
- (void)generateRequestWithCertificateChain:(NSArray *)arg1 nonce:(NSData *)arg2 nonceSignature:(NSData *)arg3 completionHandler:(void (^)(PKAddPaymentPassRequest *))arg4;
@end

