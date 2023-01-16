//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000018fc96
- (void)_sendLogoutRequest;	// IMP=0x001000000018f986
- (id)_sbsyncData;	// IMP=0x001000000018f97e
- (void)_disableBookkeeper;	// IMP=0x001000000018f5bf
- (void)_disableAutomaticDownloadKinds;	// IMP=0x001000000018f52b
- (id)_copyAuthenticationContext;	// IMP=0x001000000018f4b4
- (void)run;	// IMP=0x001000000018f467
@property(readonly) SSAccount *account;
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000018f3a8

@end
