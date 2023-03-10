//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface UpdateRequestTask : AMSTask
{
    long long _action;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000186ff
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void)_storeBiometricsToken:(id)arg1;	// IMP=0x00100000000184e6
- (id)_parseResult:(id)arg1;	// IMP=0x0010000000017e70
- (id)_serverRequestWithUser:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017991
- (void)_enqueueMetricsWithKeychainError:(id)arg1 usedBiometrics:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000017442
- (id)perform;	// IMP=0x0010000000016b48
- (id)initWithRequestIdentifier:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000016ac8

@end

