//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSArray, NSDictionary;

@interface ContentRestoreTask
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_restoreInstalls;	// 16 = 0x10
    NSArray *_successfulItems;	// 24 = 0x18
    NSDictionary *_failedItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000064fdf
@property(readonly) NSDictionary *failedItems; // @synthesize failedItems=_failedItems;
@property(readonly) NSArray *successfulItems; // @synthesize successfulItems=_successfulItems;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (id)_newBodyDictionaryWithAccountID:(id)arg1;	// IMP=0x0010000000064655
- (void)main;	// IMP=0x0010000000063d28
- (id)initWithRestoreAppInstalls:(id)arg1 account:(id)arg2;	// IMP=0x0010000000063c86

@end

