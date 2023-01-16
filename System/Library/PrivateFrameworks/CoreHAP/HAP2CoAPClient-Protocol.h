//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class NSData, NSError, NSString;
@protocol HAP2CoAPClientDelegate;

@protocol HAP2CoAPClient <NSObject>
@property(readonly, nonatomic) double initialACKTimeout;
@property(readonly, nonatomic) unsigned long long maxTransmitAttempts;
@property(readonly, nonatomic) _Bool connected;
@property(nonatomic) __weak id <HAP2CoAPClientDelegate> delegate;
- (void)closeWithError:(NSError *)arg1 completion:(void (^)(NSError *))arg2;
- (void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2;
- (void)sendRequestWithMethod:(unsigned char)arg1 path:(NSString *)arg2 payload:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)openWithCompletion:(void (^)(NSError *))arg1;
@end

