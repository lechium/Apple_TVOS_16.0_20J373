//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, PKPass, PKPaymentPassAction, UITextField;
@protocol PKPaymentDataProvider, PKPerformActionViewDelegate;

@protocol PKPerformActionView <NSObject>
@property(readonly, nonatomic) UITextField *amountTextField;
@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate;
- (void)saveLastInputValues;
- (void)fetchServiceProviderDataWithCompletion:(void (^)(NSDictionary *))arg1;
- (NSString *)transactionCurrency;
- (NSDecimalNumber *)transactionAmount;
- (PKPass *)pass;
- (id)initWithPass:(PKPass *)arg1 action:(PKPaymentPassAction *)arg2 paymentDataProvider:(id <PKPaymentDataProvider>)arg3;

@optional
- (void)willDismissViewController;
@end

