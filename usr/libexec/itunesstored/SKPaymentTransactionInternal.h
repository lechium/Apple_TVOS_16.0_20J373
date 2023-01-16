//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment, SKPaymentTransaction;

@interface SKPaymentTransactionInternal : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    NSArray *_downloads;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    SKPaymentTransaction *_originalTransaction;	// 32 = 0x20
    SKPayment *_payment;	// 40 = 0x28
    NSString *_temporaryIdentifier;	// 48 = 0x30
    NSDate *_transactionDate;	// 56 = 0x38
    NSString *_transactionIdentifier;	// 64 = 0x40
    NSData *_transactionReceipt;	// 72 = 0x48
    long long _transactionState;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000436ed
- (id)init;	// IMP=0x0010000000043647

@end

