//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSURL;

@interface PostRequestTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    NSURL *_requestURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000f6e3
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestIdentifierFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000f59a
- (_Bool)_storeRequestWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f39b
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x001000000000ef91
- (id)perform;	// IMP=0x001000000000ea42
- (id)initWithRequestURL:(id)arg1 account:(id)arg2;	// IMP=0x001000000000e9a0

@end
