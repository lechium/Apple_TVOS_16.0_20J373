//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSDictionary, NSString;

@interface RequesterRemoteNotificationTask : AMSTask
{
    NSDictionary *_payload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000014943
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)_notifyExtensionWithResult:(id)arg1;	// IMP=0x001000000001461e
- (id)_requestResultFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000014292
- (void)_presentRequest:(id)arg1;	// IMP=0x0010000000014279
- (id)_requestFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000013bde
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x00100000000137af
- (id)perform;	// IMP=0x0010000000013099
@property(readonly, nonatomic) NSString *requestIdentifier;
@property(readonly, nonatomic) long long requestStatus;
- (id)initWithPayload:(id)arg1;	// IMP=0x0010000000012eff

@end

